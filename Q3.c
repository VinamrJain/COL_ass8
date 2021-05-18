#include <stdio.h>
void main(){
    char a[100];
    int n = 0;
    scanf("%c",&a[n]);
    while (a[n] != '\n')
    {
        n++;
        scanf("%c",&a[n]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i]>='A' && a[i] <='Z')
        {
            a[i] = a[i] +'a'-'A';
        }
        printf("%c",a[i]);
    }
}