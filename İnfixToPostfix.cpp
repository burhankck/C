#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>


typedef struct node {
   char c;
   struct node *next;
}stack;


stack *create(char c) {
   stack *x = (stack*)malloc(sizeof(stack));
   x->c = c;
   x->next = NULL;
   return x;
}


stack *push(stack *head, char c) {
   stack *temp = create(c);
   temp->next = head;
   head = temp;
   return head;
}


char top(stack *head) {
   if(!head) {
       return '$';
   }
   return head->c;
}


stack *pop(stack *head) {
   if(head) {  
       stack *temp = head;
       head = head->next;
       free(temp);
       return head;
   }
   return head;
}


int isEmpty(stack *head) {
   return (head == NULL);
}


int priority(char x) {
   switch(x) {
       case '+':
       case '-':
           return 0;
       case '*':
       case '/':
           return 1;
       case '^':
           return 2;
   }
   return -1;
}


void infixToPostfix(char *string, int y) {
   
   stack *head = NULL;
   int i = 0;
   char postfix[y];
   int k = 0;
  
   while(string[i] != '\0') {
      
       if((string[i] >= 'a' && string[i] <= 'z') || (string[i] >= 'A' && string[i] <= 'Z')) {
           postfix[k++] = string[i];
       }
       else if(string[i] == '(') {
           head = push(head, string[i]);
       }
       else if(string[i] == '+' || string[i] == '-' || string[i] == '*' || string[i] == '/' || string[i] == '^') {
           if(isEmpty(head) || top(head) == '(' || priority(top(head)) < priority(string[i])) {
               head = push(head, string[i]);
           }
           else {
               while(!isEmpty(head) && top(head) != '(' && priority(top(head)) >= priority(string[i])) {
                   postfix[k++] = top(head);
                   head = pop(head);
               }
               head = push(head, string[i]);
           }
       }
       else if(string[i] == ')') {
           while(top(head) != '(') {
               postfix[k++] = top(head);
               head = pop(head);
           }
           head = pop(head);
       }
       i++;
   }
   while(!isEmpty(head)) {
       postfix[k++] = top(head);
       head = pop(head);
   }
   postfix[k] = '\0';
   printf("Post fix: %s\n", postfix);
}


int main(void) {

   char infix[256];
   printf("Please enter an infix transaction: ");
   scanf("%s", infix);
   infixToPostfix(infix, strlen(infix));
   return 0;
}
