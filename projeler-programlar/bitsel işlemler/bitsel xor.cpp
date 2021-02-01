#include<stdio.h>
#include<conio.h>
int main(){
	unsigned short x=0x1BC5;
	unsigned short y=0x3A0D;
	unsigned short z;
	z=x^y;
	z=z^y;
	printf("x=%u,y=%uz=%x,%u",x,y,z,z);
	getch();
	return 0;
	}
