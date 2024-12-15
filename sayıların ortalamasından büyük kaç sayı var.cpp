#include <stdio.h>
int main(){
	double ort=0;
	int sayi[10], toplam=0, adet=0, i;
	for(i=0 ; i<10 ; i++){
		printf("%d.sayýyý giriniz=", i+1);
		scanf("%d", &sayi[i]);
		toplam=toplam+sayi[i];
	}
	ort=(double)toplam/10;
	for(i=0 ; i<10; i++){
		if(sayi[i]>ort){
			adet=adet+1;
		}
	}
	printf("\nsayýlarýn ortalamasý=%.2f",ort);
	printf("\nsayýlarýn ortalamasýndan büyük %d sayý vardýr",adet);
	return 0;
	
	
}
