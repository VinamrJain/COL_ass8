#include <stdio.h>
#include <stdlib.h>
void main(){
    int n;
    scanf("%d",&n);
    int* a = (int*)calloc(n,sizeof(int));
    int* b = (int*)calloc(n+1,sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        b[a[i]]++;
    }
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (b[i] == 2)
        {
            printf("%d ",i);
            count++;
        }
    }
    if (count == 0)
    {
        printf("No duplicates exist!");
    }
    
    
}