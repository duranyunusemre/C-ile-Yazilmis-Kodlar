#include<stdio.h>
#include<time.h>
#include<stdlib.h>



int main()
{
	srand(time(NULL));
	int i,sayi;
	FILE *dosya;
	dosya=fopen("sayilar1.txt","w");
	for(i=0;i<100;i++)
	{
		sayi=rand()%1000;
		printf("%d\n",sayi);
		fprintf(dosya,"%d\n",sayi);
	}
	
	fclose(dosya);
	
	return 0;
}




