#include <stdio.h>
int main(){
	char metin[4][20] = {"merhaba"
	                     "_"
						"dünya"
						"!!!"};
	for (int i=3 ; i>=0 ; i--)
	{
		printf("%s\n", metin[i]);
	}
}
