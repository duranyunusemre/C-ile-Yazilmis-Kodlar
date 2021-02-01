#include <stdio.h> 
#include <conio.h> 
int main(){

 int i;
 double sayi,x;

 printf("sayiyi giriniz:");
 scanf("%lf",&sayi);
 
 x=1;

 for(i=0;i<1000;i++){
 x=0.5*(x+(sayi/x));

 }
 printf("\nsonuc:%f\n",x);
 return 0;

}
