#include <stdio.h>
#include <stdlib.h>

// Challenge 1 global variables
// a global double variable, only accessible inside this file
static double y = 15;

// a global float variable that is accessible with the entire program
float z = 15;

// a function that is only accessible with this file
static void my_function(void) {
	printf("This is a static function\n");
	printf("Defined in global scope y = %f\n", y);
	y = 20;
	printf("After changing y = %f\n", y);
}

// Challenge 2
int sum (int num) {
    static int z = 0;
    z += num;
    return z;
}

// Challenge 3
int count;
void display();

int main() {
	// Challenge 1
	// an int variable with block scope and temporary storage
    auto int x = 10;

    // a float local variable with permanent storage
    static float a = 10;

    // a register int variable
    register int b = 10;

	printf("auto int x = %d\n", x);
	printf("static float a = %f\n", a);
	printf("register int b = %d\n", b);

	my_function();

	// Challenge 2
	printf("%d ",sum(25));
	printf("%d ",sum(15));
	printf("%d ",sum(30));

	// Challenge 3
	for(count=0;count<5;count++)
     	display();

	return 0;
}