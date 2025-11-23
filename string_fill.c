#include <stddef.h> // For NULL
#include <ctype.h>

/**
 * This function checks if the dedstination array has any space and if so continues, then goes through the array indeces adding c to all but the last of them
 * It then adds the terminator character to the last index and the code is done
 */
void string_fill(char dest[], int dest_cap, char c) {
    if(dest_cap > 0){
        int i = 0;
        while(i < dest_cap-1){
            dest[i] = c;
            i++;
        }
    
        dest[i] = '\0';
    }
}
