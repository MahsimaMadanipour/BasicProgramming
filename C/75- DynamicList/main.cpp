#include <stdio.h>
#include <malloc.h>

struct intList
{
    int *elements;
    int size;
    int cap;
};

void initList(struct intList *l);
int isFullList(struct intList *l);
int doubleListSize(struct intList *l);
int insertElement(struct intList *l, int e);
void printList(struct intList *l);
void freeList(struct intList *l);

int main()
{
    struct intList list;
    initList(&list);
    insertElement(&list, 6);
    printList(&list);
    insertElement(&list, 3);
    printList(&list);
    insertElement(&list, 1);
    printList(&list);
    insertElement(&list, 7);
    printList(&list);
    insertElement(&list, 2);
    printList(&list);
    insertElement(&list, 9);
    printList(&list);
    insertElement(&list, 4);
    printList(&list);
    insertElement(&list, 0);
    printList(&list);
    insertElement(&list, 8);
    printList(&list);

    freeList(&list);
    return 0;
}

void initList(struct intList *l)
{
    l->elements = (int *) malloc(sizeof(int));
    l->cap = 1;
    l->size = 0;
}

int isFullList(struct intList *l)
{
    if(l->cap == l->size)
        return 1;
    return 0;
    //return l->cap == l->size;
}

int doubleListSize(struct intList *l)
{
    int *newList = (int *) malloc(2 * l->cap * sizeof(int));
    if(newList == NULL)
        return 0;
    for(int i = 0; i < l->size; i++)
        newList[i] = l->elements[i];
    free(l->elements);
    l->elements = newList;
    l->cap *= 2;
    return 1;
}

int insertElement(struct intList *l, int e)
{
    if(isFullList(l))
        doubleListSize(l);
    l->elements[l->size] = e;
    l->size++;
}

void printList(struct intList *l)
{
    printf("List cap  = %d\n", l->cap);
    printf("List size = %d\n", l->size);
    for(int i = 0; i < l->size; i++)
        printf("%d, ", l->elements[i]);
    printf("\n");
}

void freeList(struct intList *l)
{
    free(l->elements);
}
