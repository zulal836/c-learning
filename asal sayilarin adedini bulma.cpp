#include <stdio.h>
#include <stdbool.h>
int main (){
	int i, sayi, asayi=10, r;
	printf("10 sayi girin");
	for(i=0 ; i<10 ; i++){
		printf("\n%d. sayiyi giriniz=", i+1);
		scanf("%d", &sayi);
		if(sayi<2){
			asayi=asayi;
	}
		for(r=2 ; r<sayi ; r++){
			if(sayi % r == 0){
				asayi=asayi-1;
			}break;
		}
		
	}
	printf("\n %d asal sayi vardir",asayi);
	return 0;
	}
