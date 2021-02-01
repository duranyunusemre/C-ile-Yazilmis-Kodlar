# include <stdio.h>



double fibo(int z);

int main()

{

double sonuc;

int sayi;

printf ("Fibonacci serisinin kacinci elemanini istiyorsunuz?");

scanf("%d",&sayi);

sonuc = fibo(sayi);

printf ("%2.lf",sonuc);

getchar();getchar();

return 0;

}



double fibo(int z)

{

double x , y;

if (z<=1)

return z;

else

{

x = fibo( (z-1) ) ;

y = fibo( (z-2) ) ;

return ( x + y);

}

}
