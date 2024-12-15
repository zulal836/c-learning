#include <stdio.h>
int main(){
	double i;
	double fx;
	for(i=1 ; i<10; i += 0.1){
		fx=(i/5)*7+8;
		printf("\nf(%.1f)= %.2f", i, fx);
	}
	return 0;
}
