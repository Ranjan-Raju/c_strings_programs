#include<stdio.h>
#include<conio.h>
//to-do, fix the code.
//regular looping method works, but recursive method fails because first call to recursion skips first character.
void reverse_recursive(char *input){
    printf("1. input is %c\n",*input);
    if (*input == '\0'){
        return;

    reverse_recursive(++end); // to-do fix this, you are already passing second character..
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
   printf("after reverse string is %s\n", input);//

}
