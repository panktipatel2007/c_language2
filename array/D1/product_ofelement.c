//Calculate the product of all the elements in the given array.
#include <stdio.h>
int main()
{
    int n;
    printf("enter a number of array element");
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++)
    {
        printf("enter a  element value");
        scanf("%d",&arr[i]);
    }
    int pro=1;
    for(int i=0;i<n;i++)
    {
        pro=pro*arr[i];
    }
    printf("the product of arrey is:%d",pro);
    return 0;

}