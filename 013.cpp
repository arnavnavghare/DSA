// Problem: Detect a Cycle in a Linked List
// Approach: Floyd's Tortoise and Hare Algorithm (Two Pointers)

#include <iostream>
using namespace std;

struct listNode {
    int Val;
    listNode* next;
    listNode(int val) : Val(val), next(NULL) {}
};

// Function to detect cycle using Floyd's Tortoise and Hare algorithm
bool hasCycle(listNode* head) {
    listNode* slow = head;
    listNode* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;            // move one step
        fast = fast->next->next;      // move two steps

        if (slow == fast) return true;  // cycle detected
    }

    return false;  // no cycle
}

// Utility function to print the list (only safe when no cycle)
void print(listNode* node) {
    while (node != NULL) {
        cout << node->Val << ',';
        node = node->next;
    }
    cout << endl;
}

int main() {
    listNode* list = new listNode(0);
    list->next = new listNode(1);
    list->next->next = new listNode(2);
    list->next->next->next = new listNode(3);
    list->next->next->next->next = new listNode(4);
    list->next->next->next->next->next = new listNode(5);

    // Uncomment the next line to create a cycle for testing:
    // list->next->next->next->next->next->next = list->next->next; // cycle: 5 -> 2

    if (hasCycle(list)) {
        cout << "Cycle detected in the linked list!" << endl;
    } else {
        cout << "No cycle in the linked list." << endl;
        print(list);
    }

    return 0;
}
