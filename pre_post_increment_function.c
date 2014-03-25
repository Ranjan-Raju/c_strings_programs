#include<stdio.h>
#include<conio.h>
void printArray (int num){
printf("the num is %d\n",num);
}
int main(){
int array[] = {1,2,3,4,5,6,7,8};
int i = 0;
int size = sizeof(array);
int size_cell = sizeof(array[0]);
int length_of_array = size / size_cell;
printf("memory in bytes is %d, memory in bytes for a cell is %d, lenght of array is %d\n",size,size_cell,length_of_array);
{
    printArray(array[i]);
    i++;

}
}
