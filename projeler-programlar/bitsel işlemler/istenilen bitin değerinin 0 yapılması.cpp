#include<stdio.h>
#include<conio.h>
int main(){
	int k;
	short a=0x0061;
	short maske=~0x0020;
	printf("a=%d\n,a");
	a&=~(1<<k);
	printf("%d",a);
	getch();
	return 0;
}
