#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=2,k = 2,n,b,v=0,a=1;
    do
    {
        printf("Please enter number for n:");
        scanf("%d",&n);
    }while(n<4 && n>1000);
    b = n - 2;
    while (b >= i)
    {
        k = 2;
        a = 1;
        while (a != 0 && k < i)
        {
            a = i % k;
            k = k + 1;
        }
        if (a != 0 || i == 2)
        {
            k = 2;
            a = 1;
            while (a != 0 && k < b)
            {
                a = b % k;
                k = k + 1;
            }
            if (a != 0)
                v++;
        }
        i++;
        b--;
    }
    printf("\nThe variants are:%d\n",v);
    return 0;


}
