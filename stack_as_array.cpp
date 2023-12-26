#include <iostream>
using namespace std;
class Stack{
    public:
    int size;
    int top;
    int *arr;
    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int d){
        if(size- top > 1){
            top++;
            arr[top] = d;
        }
        else{
            cout<<"bohot hai"<<endl;
        }
    }
    void pop(){
        if(top<0){
            cout<<"stack is empty"<<endl;

        }
        else{
            top--;
        }
    }
    void peek(){
        cout<<arr[top];
        cout<<endl;
    }
    void IsEmpty(){
        if(top<0){
            cout<<"empty hai"<<endl;
        }
        else{
            cout<<"empty nahi hai"<<endl;
        }
    }
};


int main(){
    Stack s1(5);
    s1.push(6);
    s1.push(7);
    s1.push(8);
    s1.push(10);
    s1.pop();
    s1.pop();
    s1.peek();
    s1.IsEmpty();

}