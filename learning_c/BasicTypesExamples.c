#include <stdio.h>

// int main(){
//     int variableName = 6;
//     // printf(char(variableName));
//     return 0;
// }


// int main (){
//     char singleCharacter = 'a' ;
//     int noDecimals = -123;
//     float yesDecimals = 19.99;
//     // printf(const singleCharacter);
//     return 0;
// }


// int main (){
//     int notPredefined;
//     notPredefined = 15;
//     return 0;
//     // printf(notPredefined);//doesnt print
// }

int main (){
    char singleCharacter = 'a' ;
    int noDecimals = -123;
    float yesDecimals = 19.99;
    printf("%c", singleCharacter);
    printf("%i", noDecimals, 'or',"%d", noDecimals);
    printf("%f", yesDecimals);
    return 0;
}