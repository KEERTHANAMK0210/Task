#include <stdio.h>
 
int main()
{
    int a[50],i,n,lg=0;  
 
     printf("Enter size of array: ");
    scanf("%d",&n);

     printf("Enter %d elements in the array : ", n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }

    lg=a[0];
    for(i=0;i<n;i++){
        if(a[i]>lg)
        lg=a[i];
    }

    
        printf("Largest elements present in given array:%d\n  ", lg);
    

    return 0;
}