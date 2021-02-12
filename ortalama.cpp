// Girilen 3 sayýnýn Aritmetik ortalamasýný bul 


#include<stdio.h>

int main()  {
	
int say1;
int say2;
int say3;

printf("Lutfen uc adet sayi giriniz:\n ");

scanf("%d %d %d",&say1,&say2,&say3);

int ortalama=(say1+say2+say3)/3;

printf("\nGirdiginiz sayi sudur:%d %d %d\nBu sayilarin ortalamasi sudur:%d",say1,say2,say3,ortalama);

return 0;
}


