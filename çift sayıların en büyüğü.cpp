#include <stdio.h>
int main(){
	int eb=0, sayi, i;
	for (i=0 ; i<8 ; i++) {
		printf("\n%d.say�y� giriniz=", i+1);
		scanf("%d", &sayi);
		if(sayi%2==0){
			if(sayi>eb){
			eb=sayi;
		}
		}
	}
	printf("en b�y�k �ift sayi=%d", eb);
	return 0;
}
