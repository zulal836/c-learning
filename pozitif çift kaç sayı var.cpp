#include <stdio.h>
int main(){
	int sayi, i, sayac;
	for(i=0 ; i<15 ; i++){
		printf("%d.say�y� giriniz=", i+1);
		scanf("%d", &sayi);
		if(sayi>0 && sayi%2==0){
			sayac=sayac+1;
		}
	}
	printf("%d say� s�f�rdan b�y�k ve �ifttir", sayac-1);
	return 0;
}
