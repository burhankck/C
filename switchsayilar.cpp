// Kullanýcýdan iki sayý alýnsýn ve bu sayýlar asagýdaký toplama-cýkarma-carpma-bölme islemleri yapýlsýn.

#include <stdio.h>

int main () 
{
	
	int say1,say2,secim;
	printf("Birinci sayiyi giriniz :");
	scanf("%d",&say1);
	printf("Ikinci sayiyi giriniz :");
	scanf("%d",&say2);

    printf("Asagidakilerden birini seciniz :\n[1]-ToplamaIslemi\n,[2]-CikarmaIslemi\n,[3]-CarpmaIslemi\n,[4]-BolmeIslemi\n");
    printf("Lutfen Birini Seciniz :\n");
    scanf("%d",&secim);
		
	switch(secim)
    {
      case 1:printf("Birinci durumu sectiniz girdiginiz sayilarin toplami =%d\n",say1+say2);
	  break;
	  case 2:printf("Ikinci durumu sectiniz girdiginiz sayilarin cikarimi =%d\n",say1-say2);
	  break;
	  case 3:printf("Ucuncu durumu sectiniz girdiginiz sayilarin carpimi =%d\n",say1*say2);
	  break;
	  case 4:printf("Dorduncu durumu sectiniz girdiginiz sayilarin bolumu =%d\n",say1/say2);
	  break;
	  default:printf("Yanlýs Secim yaptiniz");
	  
	}     
    return 0;		
}
