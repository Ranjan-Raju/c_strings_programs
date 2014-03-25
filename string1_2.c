#include <stdio.h>
#include <conio.h>
#define DEBUG 0
void reverse (char *ptr) {
    if (ptr == NULL) {
        printf("Null pointer no action to perform\n");
    }
    char *start = ptr;
    char *end = NULL;
    while(*ptr != '\0') {
      ++ptr;
    }
    char temp;
    end = ptr-1;
    if (DEBUG){
        printf("start is %d\n",start);
        printf("end is %d\n",end);
    }
    while (start < end){
        temp = *start;
        *start = *(end);
        *(end) = temp;
        start++;
        (end)--;
    }
}
int main(){
 char my_array [] = "Indigo";
 printf("Before reverse, string is %s\n", my_array);
 reverse(my_array);
 printf("After reverse, string is %s\n", my_array);
}
