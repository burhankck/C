#include <stdio.h>

// Kullanýcý bir sayý girsin ve bunu tek mi cift mi diye ögrenilsin
// % iþareti bölümünden kalan demektir.......

int main() {
	
	int sayi;
	printf("Bir sayi giriniz :");
	scanf("%d",&sayi);
	
	if(sayi%2==0){
		printf("Bu sayi cifttir");
		
	
    }
	else
	{
		
		printf("Bu sayi tektir");
		
	}	

	
	return 0;
	
	
	
	}
	
