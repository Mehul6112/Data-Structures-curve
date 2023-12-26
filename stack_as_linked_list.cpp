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
void push(Node<T>* &top, T d){
    Node<T>* temp = new Node<T>(d);
    temp -> next = top;
    top = temp;
    }

template<class T>
void pop(Node<T>* &top){
    Node<T>* temp = top;
    top = top -> next;
    delete temp;
}

template<class T>
void print(Node<T>* &top){
    Node<T>* temp = top;
    while(temp!=NULL){
        cout << temp ->data << " ";
        temp = temp -> next;
    }
}
;
int main() {
    Node<float>* node1 = new Node<float>(1.8);
    Node<float>* top = node1;
    push<float>(top,5.4);
    push<float>(top,1.9);
    push<float>(top,9.4);
    push<float>(top,9.4);

    print(top);
    cout<<endl;
    pop(top);
    print(top);
    cout<<top-> data;
    return 0;
}