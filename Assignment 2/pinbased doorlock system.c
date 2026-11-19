#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int PIN=4091;
    int choice;
    int chance=1;
    int attempt=2;
    int i;
    int enteredpin;

    while(chance<=3){
    printf("Enter PIN\n");
    scanf("%d",&enteredpin);
    if(enteredpin< 1000){
        printf("PIN too short\n");
    }else if(enteredpin>9999){
        printf("PIN too long\n");
    }else{
    printf("PIN is Perfect length\n");
    }
    if(enteredpin==PIN){
        printf("Enter choice\n");
        printf("1.Open door\n");
        printf("2.Change Username\n");
        printf("3.Change Pin\n");
        printf("4.Exit\n");

        scanf("%d",&choice);

    switch(choice){
      case 1:
          printf("Access Granted\n");
          break;
      case 2:
        printf("Change username feature coming soon\n");
        break;
      case 3:
        printf("Change pin feature coming soon\n");
        break;
      case 4:
        printf("Exiting system\n");
        break;
    }
    break;
    }else{
       printf("Wrong password\n");
       printf("Try again\n");
       printf("You have %d attempt remaining\n",attempt);
       }
       chance++;
       attempt--;
    }
    if(chance>3 && enteredpin!=PIN){
            printf("System locked!Wait for 5 seconds...");
        for(i=5;i>0;i--){
            printf("%d\n",i);
            fflush(stdout);
            Sleep(1000);
        }
        printf("You can try again now");
    }

    return 0;
}
