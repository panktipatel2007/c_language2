#include <stdio.h>
int main() {
    char ch;
        printf("\nMenu:\n");
        printf("1. Multiply Array Elements\n");
        printf("2. Fibonacci Series\n");
        printf("3. Series with Star Pattern\n");
        printf("4. Find Greatest Number (Nested if-else)\n");
        
        scanf(" %c", &ch);  

        switch (ch) {
            case '1':{
                int n, i, product = 1;
                printf("Enter number of elements: ");
                scanf("%d", &n);
                int arr[n];
                printf("Enter %d elements:\n", n);
                for (i = 0; i < n; i++) {
                   scanf("%d", &arr[i]);
                   product *= arr[i];
                  }
                 printf("Product of array elements: %d\n", product);
                break;
                }
            case '2':{
                 int n, a = 0, b = 1, next, i;
                 printf("Enter number of terms: ");
                 scanf("%d", &n);
                printf("Fibonacci Series: ");
                for (i = 0; i < n; i++) {
                printf("%d ", a);
                   next = a + b;
                   a = b;
                  b = next;
                   }
                 printf("\n");
                break;
            }    
            case '3':{
                 int i;
                 printf("Series with star pattern:\n");
                for (i = 1; i <= 20; i += 4) {
                      printf("%d ", i);
                    for (int j = 0; j < i / 5 + 1; j++) {
                           printf("*");
                    }
                     printf("\n");
                 }
                break;
            }
            case '4':{
                int a, b, c, d, e;
                 printf("Enter five numbers:\n");
                scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

                 int greatest;

                if (a > b) {
                   if (a > c) {
                        if (a > d) {
                           if (a > e)
                                greatest = a;
                            else
                                greatest = e;
                        } else {
                            if (d > e)
                                greatest = d;
                            else
                                greatest = e;
                        }
                    } else {
                        if (c > d) {
                           if (c > e)
                                greatest = c;
                            else
                                greatest = e;
                        } else {
                           if (d > e)
                                greatest = d;
                           else
                                greatest = e;
                        }
                    }
                } else {
                    if (b > c) {
                       if (b > d) {
                            if (b > e)
                               greatest = b;
                            else
                                greatest = e;
                        } else {
                            if (d > e)
                                greatest = d;
                            else
                                greatest = e;
                        }
                   } else {
                       if (c > d) {
                           if (c > e)
                               greatest = c;
                            else
                                greatest = e;
                        } else {
                            if (d > e)
                                greatest = d;
                            else
                                greatest = e;
                       }
                    }
                }

               printf("Greatest number is: %d\n", greatest);
            break;
            }
            default:
                printf("Invalid choice. Please enter 1, 2, 3, 4 or Q to quit.\n");
        }
   

    return 0;
}
