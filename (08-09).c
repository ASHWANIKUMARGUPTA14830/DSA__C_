//deletion at begining.
#include<iostream>

struct  node *p, *t;
p = head->prev;
t = head;
head = head-> next;

head->prev=p;
p->next=head;
free(t);
t = NULL;

//deletion at the end.

struct node *p, *t;
p = head;
while (p->next != NULL) {
    p = p->next;
}
t = p;
p = p->prev;
p->next = NULL;
free(t);
 
t = NULL;
