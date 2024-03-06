
#include <iostream>
#define MAX 100
using namespace std;

class Stack{
    int top;
public:
    int a[MAX];
    
    Stack(){
        top=-1;
    }
    bool push(int x);
    int pop();
    int peep();
    bool isEmpty();
};
bool Stack::push(int x){
    if(top>=(MAX-1)){
        cout<<"Stack Overflow";
        return false;
    }
    else{
        a[++top]=x;
        cout<<x<<" pushed into stack\n";
        return true;
    }
}
int Stack::pop(){
    if(top<0){
        cout<<"Stack Underflow\n";
        return 0;
    }
    else{
        int x=a[top--];
        return x;
    }
}
int Stack::peep(){
    if(top<0){
        cout<<"Stack is Empty";
        return 0;
    }
    else{
        int x = a[top];
        return x;
    }
}
bool Stack::isEmpty(){
    return (top<0);
}

int main(){
    class Stack s;
    int choice, value;
    do{
        cout<<"\n1.Push\n2.Pop\n3.Peep\n4.Exit\nEnter your choice: ";cin>>choice;
        switch(choice){
            case 1: cout<<"Enter the value to be pushed: ";
                cin>>value;
                s.push(value);
                break;
            case 2: cout<<"Popped Value: "<<s.pop()<<"\n";
                break;
            case 3: cout<<"Top value: "<<s.peep()<<"\n";
                break;
            case 4: exit(0);
            default: cout<<"Invalid Choice\n";
        }
    }while(choice!=4);
    return 0;
}
