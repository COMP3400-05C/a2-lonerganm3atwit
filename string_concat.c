#include <stddef.h> // For NULL
#include <ctype.h>

/**
 * The function checks if the inputs are not null, and if so, goes to the end of src1, and then adds characters from src2 to src1
 * until one less than the index of src1_cap. After that, the terminator character is added to the end of src1
 */
void string_concat(char* src1, int src1_cap, const char* src2) {
    if(src1 != NULL && src2 != NULL){
        int i = 0;
        int j = 0;
        while(src1[i] != '\0'){
            i++;
        }
        while(i < src1_cap-1 && src2[j] != '\0'){
            src1[i++] = src2[j++];
        }
        src1[i] = '\0';
    }
}

