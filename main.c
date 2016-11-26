#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.c"

int main(){
    char* first = (char*)malloc(40 * sizeof(char));
    char* second = (char*)malloc(40 * sizeof(char));
    int* first1 = (int*)malloc(40 * sizeof(int));
    int* second1 = (int*)malloc(40 * sizeof(int));
    printf("Enter the first line: ");
    fgets(first, 40, stdin);
    printf("Enter the second line: ");
    fgets(second, 40, stdin);
    convert(first,first1);
    convert(second,second1);
    encryptOne(first,first1,1);
    encryptTwo(second,second1,1);
    decrypt(first,second,first1,second1);
    free(first);
    free(second);
    free(first1);
    free(second1);
    return 0;
}
