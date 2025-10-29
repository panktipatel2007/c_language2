#include<stdio.h>
void name(int str[100][100],int n,int m)
{
    printf("enter a size of array(row,coloum): ");
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
          printf("enter a value of element: ");
          scanf("%d",&str[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int c[100][100];
   int str1[100][100],str2[100][100],p,q,m,n;
   name(str1[100][100],n,m);
   name(str2[100][100],p,q);
   for(int i=0;i<n;i++)
   {
     for(int j=0;j<q;j++)
     {
        c[i][j]=0;
        for(int k=0;k<m;k++)
        {
            c[i][j]+=str1[i][k]*str2[k][j];
        }
     }
   }
 for(int i=0;i<n;i++)
    {
        for(int j=0;j<q;j++)
        {
          printf("%d",&c[i][j]);
        }
        printf("\n");
    }
return 0;
}
     