#include <stdio.h>

int main (void){

int choice; 
double balance = 1000.00;
double deposit;
int billEntered; 

  
// prints menu of choices for the user to pick from 
printf("WELCOME! Please Select an Option: \n");
printf("1. Check Account Balance\n");
printf("2. Deposit Money in your Account\n");
printf("3. Withdraw Money from your Account\n");
printf("4. Exit");
scanf ("%d", &choice);

if (choice == 1){
  printf("Your balance is: %lf\n", balance);

} else if (choice == 2){
  printf("Please enter your canadian bills (5, 10, 20, 50 or 100) and enter X when your'e done: ")
  scanf("%d\n", &billEntered);
  while (billEntered != 'X' || billEntered != 'x'){
    
   }
      
  
  
}

