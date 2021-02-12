#include <stdio.h>
#include <string.h>
 
 int main() {
 	
 	char name[10] ="Burhan";
 	int password = 1234;
 	int balance= 100;
 	int selection;
 	char name1[10];
 	int password1;
 	int money;
 	int money1;
 	
 	printf("Welcome to cash machine\nPlease enter your username :");
 	scanf("%s",&name1);
 	
 	printf("Please enter your password :");
 	scanf("%d",&password1);
 	
 	if(strcmp (name,name1)==0 && password1 == password){
 		printf("User information is correct\n");
 		printf("Select one of the actions : \n[1]- Deposit money\n[2]- Withdraw money\n[3]- user information\nPlease select one :");
 		scanf("%d",&selection);
 		
 		if(selection==1) {
 			printf("\nHow many money would you like to deposit :");
 			scanf("%d",&money);
 			balance = balance + money;
 			printf("Your deposit is successful\nThe amount you deposit :%d\nCurrent balance :%d",money,balance);
		  }
 		else if(selection==2) {
 			printf("\nHow many money would you like to withdraw:");
 			scanf("%d",&money1);
 			balance = balance - money1;
 			printf("Your withdrawal has been successfully executed\nThe amount you withdraw :%d\nCurrent balance :%d",money1,balance);
		 }
		else if(selection==3) {
			printf("Welcome to the user interface\nYour Username :%s\nYour is password :%d\nThe balance is :%d",name,password,balance);
		}
	
    } 
 		else
 		{
 		printf("The username or password has been entered incorrectly\n");
	    }
  
	 
 	return 0;
 }
