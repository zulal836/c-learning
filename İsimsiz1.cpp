#include <stdio.h>
int main(){
	char metin[4][20] = {"merhaba"
	                     "_"
						"d�nya"
						"!!!"};
	for (int i=3 ; i>=0 ; i--)
	{
		printf("%s\n", metin[i]);
	}
}
