#include <stdio.h>
#include <string.h>
#include "list.h"

int* sort(char* input){
    int len = strlen(input);
    int arr[len];
    for(int i = 0; i < len; i++){
        arr[i] = atoi(input[i]);
    }
    return arr;
}

