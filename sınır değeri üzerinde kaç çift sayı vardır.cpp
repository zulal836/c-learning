#include <stdio.h>
int main(){
	int sayi[12];
	int sd, adet=0, i;
	printf("12 adet say� giriniz\n");
	for(i=1 ; i<=12 ; i++){
		scanf("%d", &sayi[i]);
	}
	printf("s�n�r de�eri giriniz");
	scanf("%d", &sd);
	for(i=1 ; i<=12 ; i++){
		if(sayi[i]>sd && sayi[i]%2==0){
		adet=adet+1;
	}
	}
	printf("s�n�r de�eri �zerinde %d adet �ift say� vard�r\n", adet);
}
