#include <stdio.h>

// Kullan�c� ad�n� soyad�n� ve yas�n� girsin yas� 18 den b�y�kse ehliyet alabilsin.

int main() {
	
	char ad[10];
	char soyad[15];
	int yas;
	
	printf("Adinizi giriniz :");
	scanf("%c",&ad);
	printf("\nSoyadinizi giriniz :");
	scanf("%c",&soyad);
	printf("\nYasinizi giriniz :");
	scanf("%d",&yas);
	
	if(yas>=18) {
		
       printf("\nAdiniz:%c",ad);
       printf(" \nSoyadiniz:%c",soyad);
       
	   printf("Ehliyet alabilirsiniz");	
		
	}
	else {
			
	printf("\nAdiniz:%c",ad);
    printf(" \nSoyadiniz:%c",soyad);
       
	printf("Ehliyet alamazsiniz'");
		
	}
	
	  return 0;
}
