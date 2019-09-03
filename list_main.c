#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(int argc, char* argv[]){
    int *arr = sort(argc, argv);
    list l;
    make_list_init(&l);
    make_list(argc - 1, &l, arr);
    print_list(&l);
    clear_list(&l);
    free(arr);
}