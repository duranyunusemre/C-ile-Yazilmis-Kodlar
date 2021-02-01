#include<stdio.h>
#include<conio.h>
int main(){
	short a=0x0041;
	short maske=0x0020;
	printf("a=%d\n,a");
	a|=maske;
	printf("%d",a);
	getch();
	return 0;
}
