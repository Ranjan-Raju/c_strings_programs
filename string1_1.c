#include <stdio.h>
#include <conio.h>
#include <string.h>

int find_duplicate(char *input) {
if (input == NULL) {
    return 0;
}
else if (strlen(input) > 256) {
    return 0;
}
int array[256];
while (*input != '\0') {
    int value = *input;
    printf("the ascii value of char %c is %d\n", *input, value);
    if(array[value] == 1) {
            printf("Duplicate! the array[%d] is %d\n", value, array[value] );
        return 0;
    }
    else {
        array[value] = 1;
    printf("ADD: the array[%d] is %d\n", value, array[value] );
    }
    input++;
}
return 1;
}

int main() {
char *string = "abcdefghijklmnopqrstuvwxyzAa";
if (find_duplicate(string)) {
   printf("The string -> %s is unique!\n", string);
}
else {
   printf("The string -> %s is NOT unique!\n", string);
}


}
