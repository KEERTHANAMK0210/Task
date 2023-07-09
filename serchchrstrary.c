#include <stdio.h>
#include <string.h>

int main() {
   char string[]="I am keerthana",ch[10];
   int i;
   printf("Enter the search character:");
   scanf("%s",ch);
   
   printf("%s Character postion :",ch);
   for(i=0;i<strlen(string);i++)
   {
       if(ch[0] == string[i])
       {
           printf("%d ",i);
       }
   }
   
    return 0;
}