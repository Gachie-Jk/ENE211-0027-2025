#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[50];
    printf("Enter your name\n");
    scanf("%s",name);
    int length =strlen(name);
    printf("Your name is %s\n",name);
    printf("The length of your name %d\n",length);
    return 0;
}
