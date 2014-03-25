#include <stdio.h>
#include <conio.h>


void recursive_exercise (char *ptr){
  if (*ptr == '\0') {
   printf("null return!\n");
   return;
  }

  recursive_exercise(++ptr);
  //printf("first character is %c \n", *ptr);
  if (*ptr != '\0')
  printf("next characters are %c \n", *ptr);

}
int main(){
  char *ptr = "Indigo";
  recursive_exercise(ptr);
}
