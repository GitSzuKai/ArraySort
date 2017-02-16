#include <assert.h> /* ADDED */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/* Function prototypes */
void bubble_sort(int [], int);
void selection_sort(int [], int);
void insertion_sort(int [], int);
int is_sorted(int [], int); /* ADDED */


/* There is a possibility of stack overflow if we use local array;
 * thus making this array `global'.
 */
int global_array[50000];

int main() {
	int i, j, k;
	int i = 0;
	double start, end; /* CHANGED: from clock_t to double */

	/*
	 * ADDED: Verifying your implementation of is_sorted().
	 *
	 * ==== DO NOT TAMPER THIS VERIFICATION PART ====
	 */
	global_array[0] = 19;
	global_array[1] = 90;
	global_array[2] = 12;
	global_array[3] = 5;
	assert(0 == is_sorted(global_array, 4));
	global_array[0] = 5;
	global_array[1] = 12;
	global_array[2] = 19;
	global_array[3] = 90;
	assert(1 == is_sorted(global_array, 4));
	/*
	 * ==== YOU MAY NOW EDIT THE REST OF THE CODE ====
	 */

	/* Seeding the RNG.
	 * Normally, it is better to re-seed regularly for
	 * more entropy, but let's not think about that for
	 * now.
	 */
	srand((unsigned int)time(NULL));

	/* Bubble sort */
	for(i = 10; i <= 10000; i *= 10) {
		/* 10, 100, 1000, 10000 */
		k = 1 * i;
		for(j = 0; j < k; ++j) {
			global_array[j] = /* Your code here */;
			/* REMOVED:
			printf("%d,", global_array[j]); */
		}
		/* REMOVED:
		printf("\n"); */
		start = /* Your code here */;
		/* Your code here */
		end = /* Your code here */;
		printf("bubble(%d): %f\n", k /* CHANGED */
			/* Your code here */);
		/* REMOVED:
		for(j = 0; j < k; ++j) {
			printf("%d,", global_array[j]);
		}
		printf("\n\n--\n\n"); */
		assert(1 == is_sorted(global_array, k)); /* ADDED */

		/* 20, 200, 2000, 20000 */
		k = 2 * i;
		for(j = 0; j < k; ++j) {
			global_array[j] = /* Your code here */;
			/* REMOVED:
			printf("%d,", global_array[j]); */
		}
		/* REMOVED:
		printf("\n"); */
		start = /* Your code here */;
		/* Your code here */
		end = /* Your code here */;
		printf("bubble(%d): %f\n", k /* CHANGED */
			/* Your code here */);
		/* REMOVED:
		for(j = 0; j < k; ++j) {
			printf("%d,", global_array[j]);
		}
		printf("\n\n--\n\n"); */
		assert(1 == is_sorted(global_array, k)); /* ADDED */

		/* 50, 500, 5000, 50000 */
		k = 5 * i;
		for(j = 0; j < k; ++j) {
			global_array[j] = /* Your code here */;
			/* REMOVED:
			printf("%d,", global_array[j]); */
		}
		/* REMOVED:
		printf("\n"); */
		start = /* Your code here */;
		/* Your code here */
		end = /* Your code here */;
		printf("bubble(%d): %f\n", k /* CHANGED */
			/* Your code here */);
		/* REMOVED:
		for(j = 0; j < k; ++j) {
			printf("%d,", global_array[j]);
		}
		printf("\n\n--\n\n"); */
		assert(1 == is_sorted(global_array, k)); /* ADDED */
	}

	/* Selection sort */
	for(i = 10; i <= 10000; i *= 10) {
		/* 10, 100, 1000, 10000 */
		k = 1 * i;
		for(j = 0; j < k; ++j) {
			global_array[j] = /* Your code here */;
			/* REMOVED:
			printf("%d,", global_array[j]); */
		}
		/* REMOVED:
		printf("\n"); */
		start = /* Your code here */;
		/* Your code here */
		end = /* Your code here */;
		printf("selection(%d): %f\n", k /* CHANGED */
			/* Your code here */);
		/* REMOVED:
		for(j = 0; j < k; ++j) {
			printf("%d,", global_array[j]);
		}
		printf("\n\n--\n\n"); */
		assert(1 == is_sorted(global_array, k)); /* ADDED */

		/* 20, 200, 2000, 20000 */
		k = 2 * i;
		for(j = 0; j < k; ++j) {
			global_array[j] = /* Your code here */;
			/* REMOVED:
			printf("%d,", global_array[j]); */
		}
		/* REMOVED:
		printf("\n"); */
		start = /* Your code here */;
		/* Your code here */
		end = /* Your code here */;
		printf("selection(%d): %f\n", k /* CHANGED */
			/* Your code here */);
		/* REMOVED:
		for(j = 0; j < k; ++j) {
			printf("%d,", global_array[j]);
		}
		printf("\n\n--\n\n"); */
		assert(1 == is_sorted(global_array, k)); /* ADDED */

		/* 50, 500, 5000, 50000 */
		k = 5 * i;
		for(j = 0; j < k; ++j) {
			global_array[j] = /* Your code here */;
			/* REMOVED:
			printf("%d,", global_array[j]); */
		}
		/* REMOVED:
		printf("\n"); */
		start = /* Your code here */;
		/* Your code here */
		end = /* Your code here */;
		printf("selection(%d): %f\n", k /* CHANGED */
			/* Your code here */);
		/* REMOVED:
		for(j = 0; j < k; ++j) {
			printf("%d,", global_array[j]);
		}
		printf("\n\n--\n\n"); */
		assert(1 == is_sorted(global_array, k)); /* ADDED */
	}

	/* Insertion sort */
	for(i = 10; i <= 10000; i *= 10) {
		/* 10, 100, 1000, 10000 */
		k = 1 * i;
		for(j = 0; j < k; ++j) {
			global_array[j] = /* Your code here */;
			/* REMOVED:
			printf("%d,", global_array[j]); */
		}
		/* REMOVED:
		printf("\n"); */
		start = /* Your code here */;
		/* Your code here */
		end = /* Your code here */;
		printf("insertion(%d): %f\n", k /* CHANGED */
			/* Your code here */);
		/* REMOVED:
		for(j = 0; j < k; ++j) {
			printf("%d,", global_array[j]);
		}
		printf("\n\n--\n\n"); */
		assert(1 == is_sorted(global_array, k)); /* ADDED */

		/* 20, 200, 2000, 20000 */
		k = 2 * i;
		for(j = 0; j < k; ++j) {
			global_array[j] = /* Your code here */;
			/* REMOVED:
			printf("%d,", global_array[j]); */
		}
		/* REMOVED:
		printf("\n"); */
		start = /* Your code here */;
		/* Your code here */
		end = /* Your code here */;
		printf("insertion(%d): %f\n", k /* CHANGED */
			/* Your code here */);
		/* REMOVED:
		for(j = 0; j < k; ++j) {
			printf("%d,", global_array[j]);
		}
		printf("\n\n--\n\n"); */
		assert(1 == is_sorted(global_array, k)); /* ADDED */

		/* 50, 500, 5000, 50000 */
		k = 5 * i;
		for(j = 0; j < k; ++j) {
			global_array[j] = /* Your code here */;
			/* REMOVED:
			printf("%d,", global_array[j]); */
		}
		/* REMOVED:
		printf("\n"); */
		start = /* Your code here */;
		/* Your code here */
		end = /* Your code here */;
		printf("insertion(%d): %f\n", k /* CHANGED */
			/* Your code here */);
		/* REMOVED:
		for(j = 0; j < k; ++j) {
			printf("%d,", global_array[j]);
		}
		printf("\n\n--\n\n"); */
		assert(1 == is_sorted(global_array, k)); /* ADDED */
	}

	return 0;
}

void bubble_sort(int arr[], int n) {
	/* Your code here */
}

void selection_sort(int arr[], int n) {
	/* Your code here */
}

void insertion_sort(int arr[], int n) {
	/* Your code here */
}

/* This function will check whether given array `arr' is sorted
 * or not.
 *
 * Returns: 0, if arr is NOT in ascending order. Else, 1.

 */
int is_sorted(int arr[], int n) {
	/* Your code here */
}
