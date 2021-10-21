#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int dada;
    struct node* next;
}node;
typedef struct{
    node* top;
}head;

void init(head*);
void puch_node(head*,int);
void pop_node(head*,int*);
int main()
{
    int data;
    head h_1;
    init(&h_1);
    puch_node(&h_1,20);
    puch_node(&h_1,30);
    pop_node(&h_1,&data);
    pop_node(&h_1,&data);

    printf("%d",data);
    return 0;
}

void init(head* p)
{
    p->top=NULL;
}

void puch_node(head* p,int data)
{
    node* p_1=(node*)malloc(sizeof(node));// have address malloc()
    p_1->dada=data;
    p_1->next=p->top;
    p->top=p_1;
}
void pop_node(head* p,int* p_data)
{
    *p_data =p->top->dada;
    node* temp;
    temp=p->top;
    p->top=p->top->next;
    free(temp);
}

/*

        init(&head); way because top this i want access to top
        init(head* p)
        {
            p->top=NULL; //it is first address
        }

        puch_node(&head,52);
        push_node(head*p,int data)
        {
            node* p_1=(node*)mallpc(sizeof(node));
            p->data=data;
            p_1->next=p->top;
            p->top=p_1;
        }
        pop_node(&head


*/
