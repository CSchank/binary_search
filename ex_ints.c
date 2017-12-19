/*
 * C library for general binary search. 
 * You must supply a compare() function using void pointers.
 *
 * Author: Christopher W. Schankula
 * Last updated: December 19th, 2017
 * Code is licensed under the CC BY 4.0 license.
 *
 * THE CODE PROVIDED HEREIN IS PROVIDED "AS-IS"
 * THE AUTHOR ASSUMES NO RESPONSBILITY OR WARRANTY
 * FOR USE OF THE CODE PROVIDED HEREIN
 * EXTENSIVE TESTING OF THIS CODE IS REQUIRED
 * TO ENSURE ITS CORRECTNESS AS PART OF THE INTENDED
 * APPLICATION THEREOF
 */

#include <stdio.h>
#include "binary_search.h"

#define N 1000000

int compareInt(void *a, void *b){
	int n1 = *(int *)a;
	int n2 = *(int *)b;
	return n1 - n2;
}

int main(){
	int A[N];

	for(int i = 0; i < N; i++){
		A[i] = 3*i;
	}

	for (int n = 0; n < 1000; n++){	
		int ind = binary_search(A, &n, sizeof(int), 0, N, compareInt);
	
		if (ind == -1)
			printf("Element %d does not exist in array.\n", n);
		else
			printf("Found element %d at position %d.\n", n, ind);
	}

	return 0;
}