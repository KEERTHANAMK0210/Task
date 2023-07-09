#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], sum[3][3];
 
    
    printf("Enter elements of 1st matrix\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
 
    
    printf("Enter elements of 2nd matrix\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
 
    
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
        {
         sum[i][j] = a[i][j] + b[i][j];
        }
 
    
    printf("Sum Of Matrix:\n");
 
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}