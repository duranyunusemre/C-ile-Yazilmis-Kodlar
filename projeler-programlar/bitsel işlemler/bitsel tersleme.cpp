#include<stdio.h>
#include<conio.h>
int main(){
	unsigned short x =0x1AC3;
	unsigned short y;
	y=~x;
	printf("y=%x\n",x);
	printf("y=%x,%u\n",y,y);
/*	printf("%d",sizeof(short));*/
	getch();
	return 0;
}
