#include <stdio.h>
int main(){
	int sayi, i, adet=0, toplam;
	double ort;
	printf(" 10 sayý giriniz ");
	for(i=0 ; i<10 ; i++){
		printf("\nsayi%d=", i+1);
		scanf("%d", &sayi);
		if(sayi % 2 == 0){
			toplam=toplam+sayi;
		adet=adet+1;
		}
	}
	ort=(double)toplam/adet;
	printf("%d", toplam);
	printf("cift sayilarin ortalamasi=%.2f",ort);
	return 0;
}
