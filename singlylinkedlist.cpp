#include <iostream>
using namespace std;
template<class T>
class Node{
    public:
    T data;
    Node* next;

    Node (T data){
        this -> data = data;
        this -> next = NULL;
    }
};
template<class T>
void insertAtHead(Node<T>* &head, T d){
    Node<T>* temp = new Node<T>(d);
    temp -> next = head;
    head = temp;
    }

template<class T>
void deletionAtHead(Node<T>* &head){
    Node<T>* temp = head;
    head = head -> next;
    delete temp;
}

template<class T>
void print(Node<T>* &head){
    Node<T>* temp = head;
    while(temp!=NULL){
        cout << temp ->data << " ";
        temp = temp -> next;
    }
}
template<class T>
Node<T>* reverseList(Node<T>* head, Node<T>* prev = NULL) {
    if (head == NULL) {
        return prev;
    }

    Node<T>* temp = head->next;
    head->next = prev;

    return reverseList(temp, head);
}
template<class T>
int len(Node<T>* head){
    if (head == nullptr) {
        return 0; 
    } else {
        return 1 + len(head->next);
    }
}
template<class T>
Node<T>* merge(Node<T>* node1, Node<T>* node2) {
    if (node1 == nullptr) {
        return node2;
    }

    Node<T>* temp = node1;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    temp->next = node2;

    return node1;
}



int main() {
    Node<float>* node1 = new Node<float>(1.8);
    Node<float>* head = node1;
    Node<float>* tail = node1;

    insertAtHead<float>(head,1.4);
    insertAtHead<float>(head,2.6);
    insertAtHead<float>(head,3.6);
    insertAtHead<float>(head,1.9);
    insertAtHead<float>(head,5.6);
    cout<<"node1: ";
    print(head);
    cout<<endl;
    deletionAtHead(head);
    cout<<"node1 after deletion: "; print(head);
    cout<<endl;
    Node<float>* reversed = reverseList(head);
    cout << "Reversed List: ";
    print(reversed);
    cout<<endl;

    cout << "length of node1 is: " << len(node1) << endl;
    Node<float>* node2 = new Node<float>(1.8);
    Node<float>* head1 = node2;
    Node<float>* tail1 = node2;

    insertAtHead<float>(head1,1.4);
    insertAtHead<float>(head1,2.6);
    insertAtHead<float>(head1,3.6);
    insertAtHead<float>(head1,1.9);
    insertAtHead<float>(head1,5.6);
    cout << "node2: "; print(head1);
    cout<<endl;
    Node<float>* node3 = merge(node1, node2);
    cout << "Merged node: "; print(node3);
    cout<< endl;
    return 0;
}