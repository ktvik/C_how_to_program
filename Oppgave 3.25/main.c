//
//  main.c
//  Oppgave 3.25
//
//  Created by Kai Tore Vik on 03/01/2017.
//  Copyright © 2017 Kai Tore Vik. All rights reserved.
//
/*
 Pseudo code
 
 Print a table for values of A, A+3, A+6 and A+9 with A=7 to 35
*/

#include <stdio.h>

int main(void)
{
 int A=7;
 
 // Print heading
 printf("%s\t%s\t%s\t%s\n","A","A+3","A+6","A+9");
 puts("");
 
 while (A <= 35)
  {
  printf("%d\t%d\t%d\t%d\n",A,A+3,A+6,A*9);
  
  A += 7; // increase A
  } // End of loop
 
 puts("");
 puts("Press enter to exit...");
 scanf("%*C");
 
 return 0;
} // End of main
