
#include <stdio.h>
#include <stdlib.h>
/*
* Programmer Name: Colden Jeanmonod
* Class and Semester: CIS 1057 Section 004 Fall 2023
* Date: Wednesday, September 6, 2023
* Assignment: Lab 1
* Name: Temperature Conversion
* Description: Prompt for input, convert Fahrenheit to
* Celsius, display output.
*/
#define CELSIUS_ADJUSTMENT 0.5555555
int main()
{
double celsius, fahrenheit;
// print a banner telling the interactive user about us
puts( "TEMPERATURE CONVERSION" );
puts( "This program will convert a Fahrenheit temperature to Celsius." );
// prompt for INPUT from the user
printf( "Enter a temperature in fahrenheit: " );
scanf ( "%lf", & fahrenheit );
// perform the CALCULATION to convert temperature
celsius = ( fahrenheit - 32.0 ) * CELSIUS_ADJUSTMENT;
// OUTPUT the results to the screen
printf( "%0.3lf degrees fahrenheit is %0.3lf in celsius.\n",
fahrenheit, celsius );
printf( " %lfF = %lfC.\n", fahrenheit, celsius );
return EXIT_SUCCESS;
}
