#include <stdio.h>
 
int main()
{
    int a[50],i,n;  
 
     printf("Enter size of array: ");
    scanf("%d",&n);

     printf("Enter %d elements in the array : ", n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }

    printf("The elements are ....\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }

    

    return 0;
}