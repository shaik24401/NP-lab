#include<stdio.h>
#include<string.h>

void main()
{
    int i,j,k,count=0,n;
    char str[100];
    printf("enter the bit string:");
    scanf("%s",&str);
    for(i=0;i<strlen(str);i++)
    {
    count=0;
    for(j=i;j<=(i+5);j++)
    {
    if(str[j]=='1')
    {
        count++;
    }
    }
    if(count==6)
    {
        n=strlen(str)+2;
        for(k=n;k>=(i+5);k--)
        {
            str[k]=str[k-1];
        }
        str[i+5]='0';
        i=i+5;
        }
    }
    printf("After bit stuffing the frame is:");
    printf(str);
    }

