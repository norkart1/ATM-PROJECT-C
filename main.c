#include <stdio.h>

int main(void) {
  int balance = 1000;
  int choice, amount;

  for(;;) {
    printf("WELCOME TO OUR ATM SERVICE\n");
    printf("ATM Menu\n");
    printf("1. Check Balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");

    scanf("%d", &choice);

    switch(choice) {
      case 1:
        printf("Your balance is: %d\n", balance);
        break;
      case 2:
        printf("Enter the amount to deposit: ");
        scanf("%d", &amount);
        balance += amount;
        printf("Deposit of %d successful. Your new balance is %d\n", amount, balance);
        break;
      case 3:
        printf("Enter the amount to withdraw: "); 
        scanf("%d", &amount);
        if(amount <= balance) {
          balance -= amount;
          printf("Withdrawal of %d successful. Your new balance is %d\n", amount, balance); 
        } else {
          printf("Insufficient funds. Withdrawal failed.\n");
        }
        break;
      case 4:
        printf("Thank you for using our ATM service. Goodbye!\n"); 
        return 0;
      default:
        printf("Invalid choice. Please try again.\n");
    }
  }

  return 0;
}
