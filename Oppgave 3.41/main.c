//
//  main.c
//  Oppgave 3.41
//
//  Created by Kai Tore Vik on 03/01/2017.
//  Copyright © 2017 Kai Tore Vik. All rights reserved.
//
/*
 Pseudo code
 
 Ask user for radius of a circle
 Print out diameter, circumference and area of the circle
 
*/

#include <stdio.h>

int main(void)
{
 float pi=3.14159, radius, diameter, circumference, area;
 
 printf("%s", "Enter radius of circle: ");
 scanf("%f", &radius);
 
 // Calculate
 diameter = radius * 2;
 circumference = 2 * pi * radius;
 area = pi * radius * radius;
 
 puts("dia.\tcirc.\tarea");
 printf("%.3f\t%.3f\t%.3f\n", diameter, circumference, area);
 
 
 return 0;
}
