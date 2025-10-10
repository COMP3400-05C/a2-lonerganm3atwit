#include <stddef.h> // For NULL
#include <stdio.h>

/**
 * The function creates a variable to track how many numbers have been added to the array and determines the distance between the start and end numbers
 * After that the array becomes populated with numbers until either the end number is reached or the array is full
 * The function ends by returning the number of numbers added to the array
 */
int array_fill(int* array, int array_len, int begin, int end) {
    int i;
    int distance = end - begin;
    for(i = 0; i < array_len && i <= distance; i++){
        array[i] = begin++;
    }
    /*printf("{%d", array[0]);
    for(int j = 1; j < i; j++){
        printf(", %d",array[j]);
    }
    printf("}\n");*/

    return i;
}
