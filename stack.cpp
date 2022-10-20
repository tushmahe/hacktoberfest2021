#include <bits/stdc++.h>
using namespace std;

#define n 100

class Stack{
    int* arr;
    int top;

    public:

    Stack(){
        arr = new int[n];
        top=-1;
    }

    void push(int k){
        if(top==n-1){
            cout << "Stack is full" << endl;
            return;
        }
        top++;
        arr[top]=k;
    }

    void pop(){
        if(top==-1){
            cout << "Stack is empty" << endl;
            return;
        }
        top--;
    }

    int Top(){
        if(top==-1){
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[top];
    }

    bool empty(){
        return top==-1;
    }

    void print(){
         if(top==-1){
            cout << "Stack is empty" << endl;
            return;
        }
        for(int i=0;i<=top;i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Stack st;
    st.pop();
    st.push(4);
    st.push(9);
    st.push(100);
    st.print();
    st.pop();
    st.pop();
    cout << st.empty() << endl;;
    cout << st.Top() << endl;;
    st.print();
    st.pop();
    st.empty();

}
