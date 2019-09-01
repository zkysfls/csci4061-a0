#ifndef LIST_H
#define LIST_H 1

typedef struct node{
    struct node* front;
    struct node* back;
    int num;
};

typedef struct list{
    struct node* first;
    int size;
};

int* sort(char* input);
void make_list_init(list* l);
int list_insert(list* l, int num);
int make_list(list* l, int* arr);
void clear_node(node* cur);
void clear_list(list* l);
void print_list(node* list);

#endif