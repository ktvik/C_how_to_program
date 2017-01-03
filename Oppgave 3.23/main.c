//
//  main.c
//  Oppgave 3.23
//
//  Created by Kai Tore Vik on 03/01/2017.
//  Copyright © 2017 Kai Tore Vik. All rights reserved.
//
/*
 Pseudo code
 
 Ask the user to input 10 numbers, one after the other
 Test if the new nubmer is the highest number
 
 */

#include <stdio.h>

int main(void)
{
 int counter=0, number, largest=0; // variable declarations
 
 while(++counter <= 10)
  {
  printf("%s%d%s", "Enter a positive number (", counter, "/10): ");
  scanf("%d", &number);
  
   if (number > largest )
    {
    largest = number;
    }
  else
   {
   continue;
   }
  } // End of while loop
 
 puts("");
 printf("%s%d\n", "The largest number is: ",largest);
 
 puts("Press any key to exit...");
 scanf("%*C");
 
 return 0;
} // End of main
