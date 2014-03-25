#include <stdio.h>
int isAnagram(char *str1, char *str2){
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if (len1 != len2) {
        printf("different lenght strings\n");
        return 0;
    }
    else {
          //assume it is ASCII character set, with 256 possible values.
          int array [256];
          int i=0;
          while (*str1 != '\0'){
            array[*str1]++;
            str1++;
          }
          while(*str2 != '\0'){
            if (--array[*str2] < 0){
                return 0;
            }
            else {
                str2++;
            }
          }
    }
    return 1;
}

int main(void){
  char *str1 = "analogy";
  char *str2 = "ygoanal";
  if (isAnagram(str1,str2)) {
    printf("%s and %s are Anagrams!\n", str1, str2);
  }
  else {
    printf("%s and %s are NOT Anagrams!\n", str1, str2);
  }
}
