#include <stdio.h>
int main(){
	int sayi, eb, ek, i, s1, s2;
	printf("10 adet sayý giriniz");
	scanf("%d", &s1);
	scanf("%d", &s2);
	if(s1<s2){
		ek=s1;
		eb=s2;
	}
	if(s2<s1){
	ek=s2;
	eb=s1;
}
for(i=1 ; i<9 ; i++){
	scanf("%d", &sayi);
	if(sayi>eb){
		eb=sayi;
	}
	if(sayi<ek){
		ek=sayi;
	}
}printf("en büyük sayý=%d en küçük sayý=%d", eb, ek);
return 0;
}
