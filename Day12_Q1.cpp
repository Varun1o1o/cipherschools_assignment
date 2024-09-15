#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

void printLinkedList(Node* head) {
    Node* helper = head;
    while (helper != nullptr) {
        cout << helper->data << " ";
        helper = helper->next;
    }
    cout << endl;
}

int main() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;
    
    if (size <= 0) {
        cout << "List is empty" << endl;
        return 0;
    }
    
    Node* head = nullptr;
    Node* tail = nullptr;

    for (int i = 0; i < size; ++i) {
        int value;
        cout << "Enter element " << i + 1 << ": ";
        cin >> value;
        
        Node* newNode = new Node{value, nullptr};
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    
    printLinkedList(head);
    
    Node* current = head;
    Node* nextNode;
    while (current != nullptr) {
        nextNode = current->next;
        delete current;
        current = nextNode;
    }

    return 0;
}
