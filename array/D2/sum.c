#include<stdio.h>
int main()
{
    int n,m,i,j;
    printf("enter a size of array(raw-colum):");
    scanf("%d %d",&n,&m);
    int arr1[n][m];
    //first array
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {

            printf("enter a value of element at[%d][%d]",i,j);
            scanf("%d",&arr1[i][j]);
        }
        printf("\n");
    }

    printf("enter array is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }

    //second array
    printf("second matrix:\n");
    int arr2[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {

            printf("enter a value of element at[%d][%d]",i,j);
            scanf("%d",&arr2[i][j]);
        }
        printf("\n");
    }

    printf("enter array is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }

    //print sum of that two
    printf("sum of two matrix is :");
   
     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",arr1[i][j]+arr2[i][j]);
        }
        printf("\n");
    }

    return 0;
}