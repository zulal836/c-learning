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
	printf("çift sayilarin çarpimi=%d", carpim);
}
	if (carpim==1){
		printf("hiç çift sayi girmediniz");
	}
	return 0;
}
