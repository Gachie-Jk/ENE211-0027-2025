#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a;
    double b;
    double sum;
    double difference;
    double multiplication;
    double quotient;
    double answer;
    int choice;
    printf("Calculator\n");
    printf("choose an operation\n");
    printf("1.sum\n");
    printf("2.difference\n");
    printf("3.multiplacation\n");
    printf("4.quotient\n");
    scanf("%d",&choice);
    printf("Enter value of a\n");
    scanf("%lf",&a);
    printf("Enter value of b\n");
    scanf("%lf",&b);
    switch (choice){
   case 1:
    answer=a+b;
    printf("The answer is %.2lf",answer);
    break;
   case 2:
    answer=a-b;
    printf("The answer is %.2lf",answer);
    break;
   case 3:
    answer=a*b;
    printf("The answer is %.2lf",answer);
    break;
   case 4:
    answer=a/b;
    printf("The answer is %.2lf",answer);
    break;
   default:
    printf("invalid choice\n");
    break;
    }
    return 0;
}
