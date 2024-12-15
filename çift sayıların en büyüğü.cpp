#include <stdio.h>
int main(){
	int eb=0, sayi, i;
	for (i=0 ; i<8 ; i++) {
		printf("\n%d.sayýyý giriniz=", i+1);
		scanf("%d", &sayi);
		if(sayi%2==0){
			if(sayi>eb){
			eb=sayi;
		}
		}
	}
	printf("en büyük çift sayi=%d", eb);
	return 0;
}
