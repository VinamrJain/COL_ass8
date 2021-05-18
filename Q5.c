#include <stdio.h>
void isPangram(char b[]){
int x[26];
int n = 0;
 while (b[n] != '\n')
    {
        n++;
        if (b[n]>='a' && b[n]<= 'z')
        {
            x[b[n]-'a']++;
        }
    }
 for (int i = 0; i < 26; i++)
 {
    if (x[i] == 0)
    {
        printf("false");
        return;
    }
 }
 printf("true");
 return;
 
}
void main(){
    char a[100];
    int n = 0;
    scanf("%c",&a[n]);
    while (a[n] != '\n')
    {
        n++;
        scanf("%c",&a[n]);
    }
    a[n] = '\n';
    isPangram(a);
}