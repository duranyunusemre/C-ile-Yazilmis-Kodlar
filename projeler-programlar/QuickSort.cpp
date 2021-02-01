#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void quicksort(int dizi[],int,int);


int main(){
   int i, size, dizi[100];

   size=100;

   srand(time(NULL));
   printf("-------------0-100 Arasi Rasgele Sayilar(100 Adet)-----------------\n\n");
   for(i=0;i<100;i++)
	{
		dizi[i]=rand()%100;
		printf("%d-",dizi[i]);
	}

   quicksort(dizi,0,size/2-1);

   printf("\n\n---------Quick Sort Ilk 50 Eleman Kucukten Buyuge:-------\n ");
   for(i=0;i<size/2;i++)
      printf(" %d",dizi[i]);
      
      quicksort(dizi,size/2,size-1);
      printf("\n\n---------Quick Sort Son 50 Eleman Buyukten Kucuge:-------\n ");
   for(i=size-1;i>size/2-1;i--)
      printf(" %d",dizi[i]);

   return 0;
}

void quicksort(int dizi[100],int ilk,int son){
   int i, j, pivot, temp;

   if(ilk<son){
      pivot=ilk;
      i=ilk;
      j=son;

      while(i<j){
         while(dizi[i]<=dizi[pivot]&&i<son)
            i++;
         while(dizi[j]>dizi[pivot])
            j--;
         if(i<j){
            temp=dizi[i];
            dizi[i]=dizi[j];
            dizi[j]=temp;
         }
      }

      temp=dizi[pivot];
      dizi[pivot]=dizi[j];
      dizi[j]=temp;
      quicksort(dizi,ilk,j-1);
      quicksort(dizi,j+1,son);

   }
}
