#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "list.h"

int* sort(int len, char** input){
    int length = len - 1;
    int* arr = malloc(sizeof(int) * length);
    for(int i = 0; i < length; i++){
        arr[i] = atoi(input[i + 1]);
        //printf("%d\n", arr[i]);
    }
    for(int m = 0; m < length; m++){
        for(int n = m + 1; n < length; n++){
            if(arr[m] < arr[n]){
                int temp = arr[n];
                arr[n] = arr[m];
                arr[m] = temp;
            }
        }
    }
    return arr;
}

void make_list_init(list* l){
    l->first = NULL;
    l->size = 0;
}

int list_insert(list* l, int num){
    node* insert = malloc(sizeof(node));
    insert->front = NULL;
    insert->back = NULL;
    insert->num = num;
    if(l->first == NULL){
        l->first = insert;
        l->size += 1;
        return 0;
    }
    else{
        node* current = l->first;
        while(current->back != NULL){
            current = current->back;
        }
        current->back = insert;
        insert->front = current;
        l->size += 1;
        return 1;
    }
}

int make_list(int len, list* l, int* arr){
    for(int i = 0; i < len; i++){
        int j = list_insert(l, arr[i]);
    }
    return 1;
}

void clear_node(node* cur){
    if(cur != NULL){
        clear_node(cur->back);
        free(cur);
    }
}

void clear_list(list* l){
    node* cur = l->first;
    clear_node(cur);
    l->first = NULL;
    l->size = 0;
}

void print_list(list* l){
    node* cur = l->first;
    while(cur != NULL){
        printf("%d ", cur->num);
        cur = cur->back;
    }
    printf("\n");
}