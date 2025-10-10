#include <stddef.h> // For NULL
#include <stdlib.h>

/**
 * TODO: Describe what the function does
 */
int* array_create_evens(int begin, int end) {
    if(begin >= end){
        return NULL;
    }
    int num_nums = (end-begin+1)/2;
    if(end%2 == 0 && begin%2 == 0){
        num_nums++;
    }
    int arr_size = sizeof(int);
    int *arr = malloc(num_nums*arr_size);

    int n = begin + begin%2;
    int i = 0;
    while(i < num_nums){
        arr[i] = n;
        i++;
        n+=2;
    }

    return arr;
}
