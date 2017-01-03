//
//  main.c
//  Oppgave 3.17
//
//  Created by Kai Tore Vik on 03/01/2017.
//  Copyright © 2017 Kai Tore Vik. All rights reserved.
//
/*
 Pseudo code
 
 Print program title
 Ask user for account number
 If account number is -1 terminate program, else store account number to variable
 Ask user for mortage amount and store to variable
 Ask user for mortage term and store to variable
 Ask user for interest rate and store to variable
 Calculate total interest payable and add to mortage
 Print required monthly payment rounded off to the nearest dollar
 
 */
#include <stdio.h>

int main(void)
{
 int accountNumber=0, mortgageAmount, mortgageTerm, monthlyPayableInterest;
 float interestRate;
 
 puts("------------------------------------------");
 puts("           Mortgage calculator            ");
 puts("------------------------------------------");
 
 while (1) // infinite loop
 {
 printf("%s", "Enter account number (-1 to end): ");
 scanf("%d", &accountNumber);
 
 // Check if sentinel value is entered
 if (accountNumber==-1)
  {
  break;
  }
 
 printf("%s", "Enter mortgage amount (in dollars): ");
 scanf("%d", &mortgageAmount);
 
 printf("%s", "Enter mortgage term (in years): ");
 scanf("%d", &mortgageTerm);
 
 printf("%s", "Enter interest rate (as a decimal): ");
 scanf("%f", &interestRate);
 
 // Calculate total payable interests and monthly payable interest,
 mortgageAmount += mortgageAmount * interestRate * mortgageTerm;
 monthlyPayableInterest = mortgageAmount / (mortgageTerm * 12);
 
 printf("%s%d\n\n","The monthly payable interest is: $", monthlyPayableInterest);
 
 } // End while of loop
 return 0;
 
} // End of main
