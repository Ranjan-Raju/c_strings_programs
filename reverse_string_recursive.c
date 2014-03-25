#include<stdio.h>
#include<conio.h>

void reverse_recursive(char *input){
    printf("1. input is %c\n",*input);
    if (*input == '\0'){
        return;

    reverse_recursive(++end);
        }
    char temp;
    char *end = input;
    printf("2. before --, end is %c\n",*end);
    --end; //point it back to a valid character;
    printf("3. after --, end is %c\n",*end);
    printf("4. input is %c\n",*input);
    if (input > end) {
       temp = *input;
       *input = *end;
       *end = temp;
       input++;
    }
}

int main(){
   char *input = "Indigo";
   printf("before reverse string is %s\n", input);
   reverse_recursive(input);
   printf("after reverse string is %s\n", input);

}
