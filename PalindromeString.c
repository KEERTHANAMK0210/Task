#include <stdio.h>
#include <string.h>
void main()
{
    char str[20];
    int i,length;
    int flag=0;
    printf("enter a string");
    scanf("%s",str);
    length=strlen(str);
    for(i=0;i<length;i++)
    {
        if(str[i]!=str[length-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("%s is not palindrom",str)
        else
        printf("%s is palindrom",str)

    }
}
