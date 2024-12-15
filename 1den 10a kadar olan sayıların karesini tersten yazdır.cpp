#include <stdio.h>
int main () {
	int sayik[10] , i;
	for(i=0 ; i<10 ; i++){
		sayik[i]=(i+1)*(i+1);
	}
	for(i=9 ; i>=0 ; i--){
		printf("\n%d", sayik[i]);
	}
}
