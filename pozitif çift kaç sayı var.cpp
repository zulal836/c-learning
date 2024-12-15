#include <stdio.h>
int main(){
	int sayi, i, sayac;
	for(i=0 ; i<15 ; i++){
		printf("%d.sayıyı giriniz=", i+1);
		scanf("%d", &sayi);
		if(sayi>0 && sayi%2==0){
			sayac=sayac+1;
		}
	}
	printf("%d sayı sıfırdan büyük ve çifttir", sayac-1);
	return 0;
}
