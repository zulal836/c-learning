#include <conio.h>
#include <stdio.h>

int main()
{

int s1, s2, sonuc;
char ch;
printf("iþlemi seçiniz:\n");
scanf("%c",&ch);
printf("\n lütfen ilk sayýyý giriniz: ");
scanf("%d", &s1);
printf("\n lütfen ikinci sayýyý giriniz: ");
scanf("%d", &s2);

switch(ch)
{
case '+':
	sonuc=s1+s2;
	printf("sonuc=%d", sonuc);
	break;
	
	case '-':

		sonuc=s1-s2;
		printf("sonuc=%d", sonuc);
		break;
		
			default:
				printf("yanlýþ deðer girdiniz");
			
		

}
return 0;
}
