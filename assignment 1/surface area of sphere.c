#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r;
    float area;

    printf("Enter radius of sphere\n");
    scanf("%f",&r);
    area=4*22/7*r*r;
    printf("%f",area);
    return 0;
}
