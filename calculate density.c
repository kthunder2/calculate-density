#include <stdio.h>
#include <math.h>

int main()
{
    float m, v, d;

    printf("Enter mass:");
    scanf("%f", &m);
    printf("Enter volume:");
    scanf("%f", &v);

    d = (m/v);

    printf("Density is %.2f", d);

    if(d>2)
    {
        printf("\nYour substance is solid!");
    }
    else if (d>=1)
    {
        printf("\nYour substance is liquid!");
    }
    else
    {
        printf("\nYour substance is gas!");
    }

    return 0;
}
