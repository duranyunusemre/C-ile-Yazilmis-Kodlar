#include<stdio.h>
#include<conio.h>
int main()
{
int x,sum=0,i;
printf("Say� Giriniz : ");
scanf("%d",&x);
while(x>0)
{
sum=sum+(x%10);
x=x/10;
}
printf("\n Basamak De�erleri Toplam�: %d \n",sum);
return 0;
}
