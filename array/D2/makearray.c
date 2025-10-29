#include<stdio.h>
int main()
{
    int n,m,i,j;
    printf("enter a size of array(raw-colum):");
    scanf("%d %d",&n,&m);
    int arr[n][m];

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {

            printf("enter a value of element at[%d][%d]",i,j);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }

    printf("enter array is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}