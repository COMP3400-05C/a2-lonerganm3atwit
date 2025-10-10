#include <stddef.h> // For NULL
#include <stdbool.h> // For true/false
#include <ctype.h>

/**
 * The function checks if the input is null, returning false immediately if it is. If not, it loops through the input, checking for upper and lowercase letters
 * and incrementing the respective variables. If a character that is not a letter or digit is detected, it flags the password as invalid immediaately
 * After the whole string is checked, the function checks if any of the length, number or uppercase letters, or number of lowercase letters is invalid.
 * If any are, the password is flagged as false. After all of that, the validdity is returned
 */
bool valid_password(const char* s) {
    if(s == NULL){
        return false;
    }
    int numUpper = 0;
    int numLower = 0;
    int length = 0;
    bool valid = true;

    while(s[length] != '\0'){
        if(isupper(s[length])){
            numUpper++;
        }
        else if(islower(s[length])){
            numLower++;
        }
        else if(isdigit(s[length]));
        else{
            valid = false;
        }
        length++;
    }

    if(length > 10 || length < 6 || numUpper < 2 || numLower < 2){
        valid = false;
    }

    return valid;
}
