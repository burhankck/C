#include <stdio.h>
#include <stdlib.h>
#include <time.h>



//kullanýcý bilgileri alýcaz sanslý cekilis uygulamasý kullanýcý bilgileri gösterilecek
int main() {
	
  char isim;
  char soyad;
  int secim;
  int sayi;
  
  printf("Sansli Cekilis Uygulamamiza Hosgeldiniz\n Lutfen Adinizi Giriniz :");
  scanf("%s",&isim);
  printf("Sansli Cekilis Uygulamamiza Hosgeldiniz\n Lutfen Soyadinizi Giriniz :");
  scanf("%s",&soyad);
  printf("\nAsagidaki islemlerden biri icin secim yapiniz :\n[1]-Sansli Cekilisi Dene\n[2]Kullanici bilgierinizi kontrol ediniz\n");
  printf("\nLutfen birini seciniz :");
  scanf("%d",&secim);
if(secim==1) {
  	
  	printf("Suanda sansli cekilis uygulamasindasiniz  lutfen 1 ile 10 arasinda bir sayi giriniz :\n");
  	scanf("%d",&sayi);
    
    int RandomSayi = 1+rand()%10;
    
    if(sayi==RandomSayi)
    {
    	printf("Girdiginiz sayi :%d\nCekilisteki sayi: %d\n",sayi,RandomSayi);
	    printf("\nKazandýnýz!!!");
	}
	else
	{
		printf("Girdiginiz sayi :%d\nCekilisteki sayi :%d",sayi,RandomSayi);
		printf("\nKazanamadiniz bir dahaki sefere...");
		
	}
 
    
}
   if(secim==2)
  {
  	printf("Kullanici adiniz :%s\nKullanici soyadiniz :%s",isim,soyad);
  }
  	
	return 0;	
}
  


