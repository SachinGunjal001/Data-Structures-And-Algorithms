#include<iostream>
#include<stdlib.h>
using namespace std;

struct stack{
    int size;
    int top;
    int * arr;
} ;

int isEmpty(struct stack* ptr){
    if(ptr->top == -1)
    {
        return 1;
    }else{
        return 0;
    }
}

int isFull(struct stack* ptr)
{
    if(ptr->top == ptr->size - 1)
    {
        return 1;
    }else
    {
        return 0;
    }
}

void push(struct stack* ptr, int val)
{

    if(isFull(ptr)){

        cout<<"Stack OverFlow!!!";
    }else{
    ptr->top++;
    ptr->arr[ptr->top] = val;
    }
}

int pop(struct stack* ptr){
    if(isEmpty(ptr)){
        cout<<"Stack UnderFlow";
        return -1;
    }else{
    int val = ptr->arr[ptr->top];
    ptr->top--;
    return val;
    }
}
int main()
{

    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    cout<<"Stack has been created successfully\n";
    cout<<"Before pushing, Full:\n" + isFull(sp);
    cout<<"Before pushing, Empty:\n" + isEmpty(sp);
    push(sp,1);
    push(sp,3);
    push(sp,5);
    push(sp,7);
    push(sp,9);
    push(sp,12);
    push(sp,16);
    push(sp,19);
    push(sp,21);

    cout<<"After pushing, Full:\n",isFull(sp);
    cout<<"After pushing, Empty:\n", isEmpty(sp);

    cout<<"popped element from stack is "+pop(sp);
        cout<<"popped element from stack is "+pop(sp);
    cout<<"popped element from stack is "+pop(sp);
return 0;


}
