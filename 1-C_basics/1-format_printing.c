#include <stdio.h>
/**
 *main - prints the age and height
 *\n: shifts the the cursor to a new line
 *\t: shifts the cursor to a couple of spaces to the right.
 *\a: beep sound to indicate execution of the program
 *\r: positions cursor to the beginning of the current line
 *\\: displaying backslash character
 *\v: vertical tab
 *\b: backspace
 */
int main()
{
	int age = 10;
	int height = 72;

	printf("\aI am %d years old. \n\v", age);
	printf("\t %d is my age\n", age);
	printf("\r\bI am %d inches tall\\ \n", height);
}
