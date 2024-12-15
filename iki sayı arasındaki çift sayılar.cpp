#include <stdio.h>
int main(){
	int s1, s2, i, r;
	printf("hangi iki sayý arasýndaki çift sayýlarý bulmak istersiniz");
	scanf("\n%d", &s1);
	scanf("\n%d", &s2);
	if(s1<s2){
		for(i=s1 ; i<=s2 ; i++){
			if(i%2==0){
				printf("\n%d", i);
			}
		}
	}
    else(s2<s1){
		for(r=s2 ; r<=s1 ; r++){
			if(i%2==0){
				printf("\n%d", r);
			}
		}
	}
	return 0;
}
