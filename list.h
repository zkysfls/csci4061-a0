#ifndef LIST_H
#define LIST_H 1

typedef struct node{
    struct node* front;
    struct node* back;
    int num;
};

int* sort(char* input);
node* make_list(int* arr);
void print_list(node* list);

#endif