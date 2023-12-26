#include <iostream>
using namespace std;
void f1(int n, int i = 1){
    if(i>n){
        return;
    }
    else{
        if(i % 2 == 0){
            cout << i*i;
        }
        else{
            f1(n, i+1);
        }
    }
}
void f2(int n, int i = 1) {
    if (i > n + 1) {
        return;  
    } 
    else {
        if (i % 2 == 0) {
            cout << i * i << " "; 
        } else {
            f2(n, i + 1);  
        }
    }
}


int main(){
    f1(5);
    f2(5);
}



