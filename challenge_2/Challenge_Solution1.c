#include <stdio.h>

int challenge_1() {
	int i, sum=0, size = 0;
	printf("Enter size of the array: \n");
	scanf("%d", &size);
    
	int arr[size];   

	printf("Enter %d elements in the array.\n", size);
  
	for(i=0; i<size; i++) {
      scanf("%d", &arr[i]);
	}

	for(i=0; i<size; i++)    {
		sum = sum + arr[i];
	}

	printf("Sum of all elements of array = %d\n", sum);

    return 0;
}