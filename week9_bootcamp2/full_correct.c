#include <stdio.h>
#include <stdlib.h>

 typedef struct list {
    int data;
    struct list* next_element;
} list;

list* freeList(list* head){
    if (head->next_element != NULL){
        printf("Freeing element: %p\n", head);
        free(freeList(head->next_element));
        return head;
    }
    else{
        printf("End reached. Returning %p\n", head);
        return head;
    }
}

int main()
{
    list* first_node = malloc(sizeof(list));

    first_node->data = 5;
    first_node->next_element = (list*) calloc(sizeof(struct list),1);

    printf("first_node data = %d \n", first_node->data);
   
    printf("first_node next_element address = %p \n", first_node->next_element);

    printf("next elemnent data = %d \n", first_node->next_element -> data);

    // alternate ways

    printf("next element data = %d \n", (*(first_node->next_element)).data);

    freeList(first_node);

}