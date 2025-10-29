/** Find the difference between the sum of elements
 at even indices to the sum of elements at odd indices.**/

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
    int odd=0,even=0;
     for(int i=0;i<n;i++)
     {
        if(i%2==0)
        {
            even+=arr[i];
        }
        else{
            odd+=arr[i];
        }
     }
    printf("sum of even index number is: %d\n",even);
    printf("sum of odd index number is: %d\n",odd);
    printf("sum of odd and sum of even subtraction is: %d",even-odd);

    return 0;
 }