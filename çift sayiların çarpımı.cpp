#include <stdio.h>
int main (){
	int i, sayi, carpim=1;
	for(i=0 ; i<8 ; i++){
		printf("%d.sayiyi giriniz=", i+1);
		scanf("%d", &sayi);
		if(sayi % 2 == 0){
			carpim=carpim*sayi;
		}
	}
	if(carpim!=1){
	printf("�ift sayilarin �arpimi=%d", carpim);
}
	if (carpim==1){
		printf("hi� �ift sayi girmediniz");
	}
	return 0;
}
