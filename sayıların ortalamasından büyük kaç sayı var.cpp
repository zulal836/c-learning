#include <stdio.h>
int main(){
	double ort=0;
	int sayi[10], toplam=0, adet=0, i;
	for(i=0 ; i<10 ; i++){
		printf("%d.say�y� giriniz=", i+1);
		scanf("%d", &sayi[i]);
		toplam=toplam+sayi[i];
	}
	ort=(double)toplam/10;
	for(i=0 ; i<10; i++){
		if(sayi[i]>ort){
			adet=adet+1;
		}
	}
	printf("\nsay�lar�n ortalamas�=%.2f",ort);
	printf("\nsay�lar�n ortalamas�ndan b�y�k %d say� vard�r",adet);
	return 0;
	
	
}
