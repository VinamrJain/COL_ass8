#include <stdio.h>
#include <stdlib.h>
void isSorted(int A[], int n){
for (int i = 0; i < n-1; i++)
{ int flag;
    if (A[i]==A[i+1])
    {
        continue;
    }
    if (A[i]>A[i+1])
    {
       for (int j = i; j < n-1 ; j++)
       {
           if (A[j]<A[j+1])
           {
               printf("false");
               return;
           }
       }
       break;
    }
    else
    {
       for (int j = i; j < n-1 ; j++)
       {
           if (A[j]>A[j+1])
           {
               printf("false");
               return;
           }
       }
       break;
    }
}
printf("true");
return;
}
void main(){
    int n;
    scanf("%d",&n);
    int* a = (int*)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    isSorted(a,n);
}