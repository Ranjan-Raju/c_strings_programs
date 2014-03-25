#include<stdio.h>
#include<conio.h>
/*
    This program is to print the ascii values of characters.
    To check if the null terminating character '\0' is actually integer zero.
    */
int main(){
char array_name [] = "abczABCZ\0";
char *ptr_char = array_name;

printf("the strlen is %d\n",strlen(array_name));
while(*ptr_char){
    printf("the character %c has ascii value %d\n",*ptr_char,*ptr_char);
    ptr_char++;
}
}
