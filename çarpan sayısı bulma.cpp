#include <stdio.h>
int main(){
	int sayi, adet=0, i;
	printf("çarpanlarýný görmek istediðiniz sayýyý giriniz\n");
	scanf("\n%d", &sayi);
	for(i=1 ; i<=sayi ; i++){
		if(sayi%i==0){
			printf("%d\n", i);
			adet=adet+1;
		}
	}printf("%d sayýsýnýn %d adet çarpaný vardýr", sayi, adet);
}
