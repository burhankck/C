#include <stdio.h>

// Kullan�c� bir say� girsin ve bunu tek mi cift mi diye �grenilsin
// % i�areti b�l�m�nden kalan demektir.......

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
	
