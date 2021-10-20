
// Online IDE - Code Editor, Compiler, Interpreter

#include<stdio.h>
#include<stdlib.h>

struct my_array{
    int max_size;
    int top;
    int * ptr;
};

void create_arr(struct my_array* a, int size)
{
    a->max_size = size;
    a->top = -1;
    a->ptr = (int *)malloc(size * sizeof(int));
}

void append(struct my_array *a, int n)
{
    (a->top)++;
    a->ptr[a->top] = n;
}

void insert(struct my_array *a, int n, int idx)
{
    if(a->top != a->max_size){
        a->top++;
        for(int i = a->top; i >= idx; i--)
        {
            a->ptr[i + 1] = a->ptr[i];
        }
        a->ptr[idx] = n;
    }
    
    else{
        printf("The array is full\n");
        
    }
}
void traverse(struct my_array *a)
{
    for(int i = 0; i <= a->top; i++){
        printf("%d ", a->ptr[i]);
    }
    printf("\n");
}

// the following function is under process
void bubble_sortarr(struct my_array *a){
    for(int i = 0; i <= a->top; i++){
        for(int j = 0; j < a->top-i; j++){
            if(a->ptr[j] > a->ptr[j+1]){
                swap(&(a->ptr[j]), &(a->ptr[j+1]));
            }
        }
    }
}
    
}
int main()
{
    struct my_array age;
    create_arr(&age, 10);
    append(&age, 5);
    append(&age, 6);
    traverse(&age);
    insert(&age, 7, 1);
    traverse(&age);
    append(&age, 12);
    append(&age, 10);
    append(&age, 9);
    sort_arr(&age);
    traverse(&age);
    
    return 0;
}
