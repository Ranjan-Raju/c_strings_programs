#include <stdio.h>

int main(){
char strings [] = "my length is 15";
int lenght;
char *ptr_str;
char line[100];


printf("the string is: %s\n", strings);

for (ptr_str = strings; *ptr_str != '\0'; ptr_str++ )
    ;

printf("strings is %d \n", strings);
printf("ptr_str is %d \n", ptr_str);
lenght = ptr_str - strings;
printf("the lenght of string is: %d\n", lenght);

printf("you entered %s\n", line);
return 0;
}



