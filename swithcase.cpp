#include <conio.h>
#include <stdio.h>

int main()
{

int s1, s2, sonuc;
char ch;
printf("i�lemi se�iniz:\n");
scanf("%c",&ch);
printf("\n l�tfen ilk say�y� giriniz: ");
scanf("%d", &s1);
printf("\n l�tfen ikinci say�y� giriniz: ");
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
				printf("yanl�� de�er girdiniz");
			
		

}
return 0;
}
