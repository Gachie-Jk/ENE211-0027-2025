#include <stdio.h>
#include <stdlib.h>


    int correct_pin=4091;
    int total_attempts=3;
    double initial_balance=1000;
    int pin;
    int attempt;
    int choice;
    double balance;
    double amount;


    double checkbalance(double initial_balance){
        printf("Your balance is: %.2f\n", initial_balance);
        return initial_balance;
    }
    int login(){
       for (attempt=1;attempt<=total_attempts;attempt++){
        printf("Enter pin\n");
        scanf("%d",&pin);

        if(pin<1000){
            printf("Pin too short.Try again\n");
        }
        else if(pin>9999){
           printf("Pin too long.Try again\n");
        }
        else if(pin==correct_pin){
         printf("Login successful");
         return 1;
         }
         else{
           printf("Wrong pin\n");
         }
         if (attempt<total_attempts){
            printf("Try again, attempts left:%d\n",total_attempts-attempt);
         }
         else{
            printf("Maximum attempts exceded.Access denied");
         }
       }
       return 0;
    }

    double deposit(double initial_balance, double amount)
{
    if (amount <= 0) {
        printf("Invalid amount. Must be positive.\n");
        return initial_balance;
    }
    balance = initial_balance + amount;
    printf("Deposit successful. New balance: %.2f\n", balance);
    return balance;
}

    double withdraw(double balance, double amount)
{
    if (amount <= 0) {
        printf("Invalid amount. Must be positive.\n");
        return balance;
    }
    if (amount > balance) {
        printf("Insufficient funds.\n");
        return balance;
    }
    balance = balance - amount;
    printf("Withdrawal successful. New balance: %.2f\n", balance);
    return balance;
}

int main()
{
    balance=initial_balance;
    if(!login()){
        return 1;
    }

    do {
    printf("\n========ATM MENU=========\n");
    printf("1. Balance Inquiry\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);

    switch (choice) {
            case 1:
               checkbalance(initial_balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%lf", &amount);
                balance = deposit(balance, amount);
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%lf", &amount);
                balance = withdraw(balance, amount);
                break;

            case 4:
                printf("Thank you. Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Enter 1 to 4.\n");
        }
    }

    while(choice!=4);







    return 0;

}
