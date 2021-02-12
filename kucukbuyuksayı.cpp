#include <stdio.h>

// Kullanıcıdan girilen 3 sayıyı büyükten kücüge sıralayınız

int main() {

   int sayi1,sayi2,sayi3;
	printf("Lutfen  uc sayi giriniz :\n\n");
	scanf("%d %d %d",&sayi1,&sayi2,&sayi3);
	
if(sayi1>sayi2&&sayi1>sayi3)
{
	if(sayi2>sayi3)
	{
		printf("%d>%d>%d",sayi1,sayi2,sayi3);
	}
	else 
	{
		printf("%d>%d>%d",sayi1,sayi3,sayi2);
	}
	
}
else if(sayi2>sayi1&&sayi2>sayi3)
{
	if(sayi1>sayi3)
	{
		printf("%d>%d>%d",sayi2,sayi1,sayi3);
	}
	else 
	{
		printf("%d>%d>%d,",sayi2,sayi3,sayi1);
	}
}
else {
	if(sayi1>sayi2)
	{
		printf("%d>%d>%d",sayi3,sayi1,sayi2);
		
	}
	else
	{
		printf("%d>%d>%d",sayi3,sayi2,sayi1);
	}
}


return 0;
}






	
	
	
