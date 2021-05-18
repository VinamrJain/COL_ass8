#include <stdio.h>
void encrypt(char z[],int k){
int n = 0;
while (z[n] != '\n')
{
    if (z[n]>='a' && z[n]<='z') 
    {
        z[n] = (z[n]-'a'+k)%26 +'a';
    }
    else if (z[n]>='A' && z[n]<='Z')
    {
        z[n] = (z[n]-'A'+k)%26 +'A';
    }
    n++;
}
return;
}
void decrypt(char z[],int k){
int n = 0;
while (z[n] != '\n')
{
    if (z[n]>='a' && z[n]<='z') 
    {
        z[n] = ((z[n]-'a'-k)%26>=0)?(z[n]-'a'-k)%26+'a':(z[n]-'a'-k)%26+26+'a';
    }
    else if (z[n]>='A' && z[n]<='Z')
    {
         z[n] = ((z[n]-'A'-k)%26>=0)?(z[n]-'A'-k)%26+'A':(z[n]-'A'-k)%26+26+'A';
    }
    n++;
}
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
    int k;
    scanf("%d",&k);
    encrypt(a,k);
    int i=0;
    while (a[i] != '\n')
    {
       printf("%c",a[i]);
       i++;
    }
    printf("\n");
   decrypt(a,k);
    i=0;
    while (a[i] != '\n')
    {
       printf("%c",a[i]);
       i++;
    }
}