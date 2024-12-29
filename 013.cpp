// Problem: Detect a Cycle in a Linked List
// Approach: Floyd's Tortoise and Hare Algorithm (Two Pointers)

#include <iostream>
using namespace std;

struct listNode
{
    int Val;
    listNode* next;
    listNode(int val):Val(val),next(NULL){};
};

void print(listNode* listNode){
    while(listNode!=NULL){
        cout<<listNode->Val<<',';
        listNode=listNode->next;
    }
}

int main()
{
    listNode* list = new listNode(0);
    list->next = new listNode(1);
    list->next->next = new listNode(2);
    list->next->next->next = new listNode(3);
    list->next->next->next->next = new listNode(4);
    list->next->next->next->next->next = new listNode(5);
    print(list);
    return 0;
}