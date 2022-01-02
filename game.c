#include <stdio.h>
int main()
{
    int i, sum = 0;
    while(sum!= 20)
    {
        printf("Enter number of matchsticks");
        scanf("%d", &i);
        while(i<1 || i>4)
        {
            printf("Invalid");
            break;
        }
        while(i>=1 && i<=4)
        {
            printf("number of matchsticks by c is %d", 5-i);
            
            printf("matchstick left are %d", 21 - sum);
            break;
        }
    }
    printf("The last matchstick left . So, you lost");
}