#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node*& head, Node*& tail, int d) {
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;

    // Check if the list was empty
    if (tail == NULL) {
        tail = temp;
    }

    tail->next = head; // Update tail's next to maintain circularity
}

void deletionAtHead(Node*& head, Node*& tail) {
    if (head == NULL) {
        cout << "List is empty." << endl;
        return;
    }

    Node* temp = head;
    head = head->next;

    // Check if the list became empty
    if (head == NULL) {
        tail = NULL;
    } else {
        tail->next = head; // Update tail's next to maintain circularity
    }

    delete temp;
}
void print(Node*& head) {
    if (head == NULL) {
        return; // Empty list
    }

    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);

    cout << endl;
}

int main() {
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    insertAtHead(head, tail, 12);
    insertAtHead(head, tail, 13);
    insertAtHead(head, tail, 14);

    cout << "Original List: ";
    print(head);

    deletionAtHead(head, tail);
    cout << "List after deletion: ";
    print(head);

    

    return 0;
}
