#include <stdio.h>
#include <stdlib.h>
void main(){
    int n;
    scanf("%d",&n);
    int** a = (int**)malloc(sizeof(int*)*n);
    for (int i = 0; i < n; i++)
    {
        a[i] = (int*)malloc(n*sizeof(int)); 
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
            if (a[i][j] == 1)
            {
                count++;
            }
            
        }
    }
printf("Number of pairs of friends = %d\n",count/2);
int x,y;
scanf("%d%d",&x,&y);
for (int i = 0; i < n; i++)
{
    if (a[x][i] == 1 && i != y)
    {
        if (a[y][i] == 1)
        {
            printf("true");
            return;
        }
    }
}
printf("false");
return;
}