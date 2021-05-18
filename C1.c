#include <stdio.h>
#include <stdlib.h>
void main(){
    int n;
    scanf("%d",&n);
    int* a = (int*)calloc(n,sizeof(int));
    int** b = (int**)calloc(n,sizeof(int*));
    for (int i = 0; i < n; i++)
    {
        b[i] = (int*)calloc(2,sizeof(int)); 
    }
    int p = 0;
    for (int i = 0; i < n; i++)
    {int flag = 0;
        scanf("%d",&a[i]);
        for (int j = 0; j < p ; j++)
        {
            if (a[i] == b[j][0])
            {
                b[j][1]++;
                flag = 1;
            }
        }
        if (flag == 0)
        {
            b[p][0] = a[i];
            p++;
        }
    }
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < p; j++)
        {
            if (b[i][1] == b[j][1] && i !=j)
            {
                printf("false");
                return;
            }
        }
    }
    printf("true");
    return;
    
}