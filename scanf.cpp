#include<stdio.h>


// SCANF KULLANICININ GIRDIGI INT FLOAT CHAR DEGISKENLERINI ALMAYA YARAR
int main () {
	
	// Aritmetik örnekler ve scanf fonksiyonu
	
	int ilkSayi;
	int ikinciSayi;
	int islem1;
	int islem2;
	
	
	printf("Bir sayi giriniz :");
	scanf("%d",&ilkSayi);
	
	printf("Bir sayi giriniz :");
	scanf("%d",&ikinciSayi);
	
	islem1 = ilkSayi*ikinciSayi;
	printf("\nGirdiginiz iki sayinin carpimi =%d",islem1);
	
	islem2 =ilkSayi/ikinciSayi;
	printf("\nGirdiginiz iki sayinin bolumu=%d",islem2);
	
	
	
			
	return 0;
}
		
	
	
	
		
