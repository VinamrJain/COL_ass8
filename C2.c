#include <stdio.h>
#include <stdlib.h>
void canPlaceFlowers(int f[],int n,int k){
    if (n == 0)
    {
        printf("false");
        return;
    }
    int b[n];
    int j = -1;
    int p = 0;
for (int i = 0; i < n; i++)
{
    if (f[i] == 1)
    {
        b[p] = i - j - 1;
        j = i;
        p++;
    }
}
b[p] = n - j - 1;
p++;
int count = 0;
if (p == 1)
{
    count += b[0]/2+1; 
}
else
{
    for (int i = 0; i < p; i++)
    {
        if (i == 0 || i == p-1)
        {
            count += b[i]/2;
        }
        else
        {
            count += (b[i]-1)/2;
        }
    }
}
if (k <= count)
{
    printf("true");
}
else
{
    printf("false");
}
return;
}
void main(){
    int n;
    printf("n = ");
    scanf("%d",&n);
    printf("flowerbed = ");
    int* a = (int*)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int k;
    printf("k = ");
    scanf("%d",&k);
    canPlaceFlowers(a,n,k);
}

/*
int b[n];
int p = 0;
for (int i = 0; i < n; i++)
{
    if (f[i] == 0)
    {
        if (i-1>=0)
        {
           if (i+1<n)
           {
               if (f[i+1] !=1 && f[i-1] !=1)
               {
                   b[i]=1;
                   p++;
               }
           }
           else
           {
               if (f[i-1] !=1)
               {
                   b[i]=1;
                   p++;
               }
           }
        }
        else
        {
            if (i+1<n)
            {
                if (f[i+1] != 1)
                {
                    b[i]=1;
                    p++;
                }
            }
        }
    }  
}
int m = 0;
for (int i = 0; i < n; i++)
{
    if (b[i]==1)
{
    int x[n];
    for (int j = 0; j < n; j++)
    {
        x[j] = f[j];
    }
    x[i] = 1;
    
}
}int b[n];
int p = 0;
for (int i = 0; i < n; i++)
{
    if (f[i] == 0)
    {
        if (i-1>=0)
        {
           if (i+1<n)
           {
               if (f[i+1] !=1 && f[i-1] !=1)
               {
                   b[i]=1;
                   p++;
               }
           }
           else
           {
               if (f[i-1] !=1)
               {
                   b[i]=1;
                   p++;
               }
           }
        }
        else
        {
            if (i+1<n)
            {
                if (f[i+1] != 1)
                {
                    b[i]=1;
                    p++;
                }
            }
        }
    }  
}
int m = 0;
for (int i = 0; i < n; i++)
{
    if (b[i]==1)
{
    int x[n];
    for (int j = 0; j < n; j++)
    {
        x[j] = f[j];
    }
    x[i] = 1;
    
}
}
*/