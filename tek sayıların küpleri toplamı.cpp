#include <stdio.h>
int main(){
	int sayi, toplam=0, i, adet=0;
	printf("20 adet sayi giriniz");
	for(i=0 ; i<20 ; i++){
		printf("\nsayi%d=", i+1);
		scanf("%d", &sayi);
		if(sayi%2==1){
		adet=adet+1;
		sayi=sayi*sayi*sayi;
			toplam=toplam+sayi;
	}	
	}
	printf("\ntek sayýlarýn küpleri toplamý=%d", toplam);
	return 0;
	}
