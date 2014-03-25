#include <stdio.h>
#include <conio.h>
int main() {
char string_name [] = "cold_play";
char *ptr = string_name;
while(ptr != EOF) {
    printf("still priting %c\n", *ptr++);
}

printf("reached the end of line\n");
}
