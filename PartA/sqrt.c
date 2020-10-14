/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int abs(int x) {
	return (x < 0)? (-1)*x:x;
}
// Main function
int main(int argc, char* argv[]) {
	
	if (argc != 2) {
		printf("Usage: sqrt input\n\n");
		exit(-1);
	}

	int input = atoi(argv[1]);
	printf("NEGSUPPORT: Program is staring...\nInput: %d\n",input);
	printf("NEGSUPPORT: Sqrt of %d is %f",input,sqrt(abs(input)));
	if(input < 0) printf("i");
	printf("\nExiting the program\nExiting...\n");
	return(0);

} // end main
