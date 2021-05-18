#include <stdio.h>
#define mc 100
int isSubstring(char a[],char b[])
{int flag = -1;
    for (int i = 0; a[i] != '\n'; i++)
    {
        for (int j = 0;b[j] != '\n'; j++)
        {
            if (a[i+j] == '\n')
            {
                return -1;
            }
            
            if (a[i+j] >= 'A' && a[i+j] <='z')
            {
                if (b[j] >= 'A' && b[j] <='z')
                {
                    if (a[i+j] == b[j])
                    {
                        flag = i;
                    }
                    else if (a[i+j] > b[j] && a[i+j] == b[j] +'a' - 'A')
                    {
                        flag = i;
                    }
                    else if (a[i+j] < b[j] && b[j] == a[i+j] +'a' - 'A')
                    {
                        flag = i;
                    }
                    else
                    {
                        flag = -1;
                        break;
                    }
                }
                else
                {
                    flag = -1;
                    break;
                } 
            }
            else
            {
            if (a[i+j] == b[j])
            {
            flag = i;
            }
            else
            {
            flag = -1;
            break;
            }
            }
        }
        if (flag != -1)
        {
            return flag;
        }
    }
    return -1;
}
void main(){
    char x[mc];
    char y[mc];
    int n = 0,m =0;
    scanf("%c",&x[n]);
    while (x[n] != '\n')
    {
        n++;
        scanf("%c",&x[n]);
    }
    x[n] = '\n';
     scanf("%c",&y[m]);
    while (y[m] != '\n')
    {
        m++;
        scanf("%c",&y[m]);
    }
    y[m] = '\n';
printf("%d",isSubstring(x,y));
}