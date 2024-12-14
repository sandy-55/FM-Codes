//Program1

#include <stdio.h>

int main() 
{
    int num1, num2, num3;
    int cnt = 0, sum = 0;
    
    printf("Enter your 3 Numbers:\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    sum += num1 + num2 + num3;
    printf("Sum of 3 Numbers is: %d\n", sum);
    
    if(sum == 0)
    {
        printf("Sum is neither Even Nor Odd Number.\n");
    }
    else if(sum%2 == 0)
    {
        printf("Sum is Even Number.\n");
    }
    else
    printf("Sum is Odd Number.\n");


    if (sum == 0 || sum == 1)
    {
        printf("Sum is Neither Prime nor Composite.\n");
    }
    else 
    {
        for (int i = 1; i <= sum; i++) 
        {
            if (sum % i == 0)
            {
                cnt++;
            }
        }

        if (cnt > 2)
        {
            printf("Sum is NOT Prime.\n");
        }
        else
        {
            printf("Sum is Prime.\n");
        }
    }
    return 0;
}