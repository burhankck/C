#include  <stdio.h>

int main () {
	
	
	
	// 2x^2+2y+3
	int sayiX;
	int sayiY;
	int denklem;
	
printf("Lutfen x  degerleri giriniz :");
scanf("%d",&sayiX);

printf("\nLutfen y degerleri giriniz :");
scanf("%d",&sayiY);

denklem = 2*(sayiX * sayiX) + 2*(sayiY) +3;
printf("\nDenklemin sonucu=%d",denklem);

return 0;

	
}

