//Implement Sum of digits of a given number using Recursion.
#include <stdio.h>
int sumdigit(int x)
{
    if (x/10==0)
    {
       return 0;
    }
    
    int a;
    a=x%10;
    return a+sumdigit(x/10);

}
int main()
{
    printf("%d",sumdigit(321));
    return 0;
}