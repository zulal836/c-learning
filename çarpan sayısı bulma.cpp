#include <stdio.h>
int main(){
	int sayi, adet=0, i;
	printf("�arpanlar�n� g�rmek istedi�iniz say�y� giriniz\n");
	scanf("\n%d", &sayi);
	for(i=1 ; i<=sayi ; i++){
		if(sayi%i==0){
			printf("%d\n", i);
			adet=adet+1;
		}
	}printf("%d say�s�n�n %d adet �arpan� vard�r", sayi, adet);
}
