#include <iostream>
#include <vector>
using namespace std;

class StackX{
    private: 
    int maxSize;
    vector<double> stackVect;
    int top;

    public: 
    StackX(int s): maxSize(s), top(-1){
        stackVect.reserve(maxSize);
    }

    void push( double j){
        stackVect[++top] = j;
    }

    double pop(){
        return stackVect[top--];
    }

    double peek(){
        return stackVect[top];
    }
     bool isEmpty(){
         return (top == -1);
     }
};


int main(){
    StackX newStack = StackX(10);
    newStack.push(56.0);
    cout << newStack.peek() << endl;
    if(!newStack.isEmpty()){
        newStack.push(49);
        newStack.push(4);
        newStack.push(4099);
        newStack.push(35679);
    }
    newStack.peek();
    newStack.pop();
}