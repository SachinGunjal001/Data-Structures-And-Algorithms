#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// Case 1 : delete the first element
struct Node * deleteFirst(struct Node * head){
    struct Node * ptr = head;

    head = head->next;
    free(ptr);
    return head;
}

// Case 2 : delete in element at given index
struct Node * deleteAtIndex(struct Node *head, int index){
    struct Node * p = head;
        struct Node * q = head->next;

    int i = 0;

for(i = 0; i < index-1;i++)    {
        p = p->next;
        q = q->next;

    }
    p->next = q->next;
    free(q);
    return head;
}

// Case 3: Deleting the last element
struct Node * deleteAtLast(struct Node * head){
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->next !=NULL)
    {
        p = p->next;
        q = q->next;
    }

    p->next = NULL;
    free(q);
    return head;
}
// Case 4 : delete in element with given value from linked list
struct Node * deleteAtGivenIndex(struct Node *head, int index, int value){
    struct Node * p = head;
        struct Node * q = head->next;


while(q->data!=value && q->next!=NULL){
            p = p->next;
        q = q->next;

    }
if(q->data == value){
    p->next = q->next;
    free(q);
}

    return head;
}


int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 17;
    head->next = second;

    // Link second and third nodes
    second->data = 11;
    second->next = third;

    // Link third and fourth nodes
    third->data = 44;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 26;
    fourth->next = NULL;

    printf("Linked list before insertion\n");
    linkedListTraversal(head);
    // head = deleteFirst(head); //delete first element
       // head = deleteFirst(head); //delete second element

     //head = deleteAtIndex(head, 2);
   // head = deleteAtLast(head);
    head = deleteAtGivenIndex(head,2,44);
    printf("\nLinked list after insertion\n");
    linkedListTraversal(head);


    return 0;
}

