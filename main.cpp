#include <stdio.h>

using namespace std;

int main()
{
    int n, i;
    double s;
    printf("Please enter positive integer N: ");
    scanf("%d", &n);
    if (n>0)
    {
        printf("The sum is S = 1", n);
        if (n>1)
        {
            for(i=2, s=1; i<=n; ++i)
            {


                    s+= 1.0/i;
                    printf(" + 1/%d", i);
            }


            printf(" = %lf", s);
        }
    }
    else
    {
        printf("Accept positive number only!");
    }
    return 0;
}
