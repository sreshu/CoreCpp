#include <iostream>
using namespace std;

template <typename T>

class Node {
    public :
        T data;
        Node<T> *next;

        Node(T data) {
            this -> data = data;
            next = NULL;
        }
};

template <typename T>

class Stack{
    Node<T> *head;
    int size; // no. of elem in stack

    public :

    Stack() {
        // work of constructor = initialize data members
        head = NULL;
        size = 0;
    }

    int getSize(){

        return size;

    }
    
    bool isEmpty() {
        return size == 0;

    }

    //push and pop the starting elem/head

    void push(T element){
        Node<T> *newNode = new Node<T>(element);
        newNode -> next = head;
        head = newNode;
        size++;

    }
    T top() {
        if(isEmpty()){
            return 0;
        }
        return head -> data;

    }
    T pop() {
        if(isEmpty()){
            return 0;
        }
        T ans = head -> data;
        Node<T> *temp = head;
        head = head -> next;
        delete temp;
        size --;
        return ans;

    }
};

int main(){
    Stack<char> s;
    s.push(100);
    s.push(102);
    s.push(103);
    s.push(104);
    s.push(105);


    cout << s.top() << endl;

    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;

    cout << s.getSize() << endl;

    cout << s.isEmpty() << endl;


}