#include <stddef.h> // For NULL
#include <stdlib.h>
#include <ctype.h>


/**
 * TODO: Describe what the function does
 */
char* capitalize(const char* s) {
    if(s == NULL){
        return NULL;
    }
    int i = 0;
    while(s[i] != '\0'){
        i++;
    }

    int arr_size = sizeof(char);
    char *capArr = malloc(++i*arr_size);
    int j = 0;
    while(s[j] != '\0'){
        capArr[j] = toupper(s[j]);
        j++;
    }
    capArr[j] = '\0';
    
    return capArr;
}

