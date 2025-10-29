#include <stdio.h>
int main()
{
    int arr[100],arr2[100],m[200],i,j,a,b,temp;
    printf("enter a numbers for array 1  ");
    scanf("%d",&a);
    printf("enter a numbers for array 2  ");
    scanf("%d",&b);
  

    for(i=0;i<a;i++)
    {
        printf("enter a numbers for acending order 1  ");
        scanf("%d",&arr[i]);
    }
      for(j=0;j<b;j++)
    {
        printf("enter a numbers for acending order 2  ");
        scanf("%d",&arr2[j]);
    }
    //marge two array
    for(i=0;i<a;i++)
    {
        m[i]=arr[i];
    }
    for(j=0;j<b;j++)
    {
        m[a+j]=arr2[j];
    }
    //sorting
    for(i=0;i<a+b-1;i++)
    {
        for(j=i+1;j<a+b;j++)
        {
            if(m[i]>m[j])
            {
                temp=m[i];
                m[i]=m[j];
                m[j]=temp;
            }
        }
    }
     for(int in=0;in<a+b;in++)
    { 
        printf("%d  ",m[in]);
    }


    return 0;
}