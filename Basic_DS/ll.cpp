#include<bits/stdc++.h> 
using namespace std; 

//implement insert, delete, reverse// A simple CPP program to introduce 
// a linked list 
#include <bits/stdc++.h> 
using namespace std; 
  
class Node { 
public: 
    int data; 
    Node* next; 
}; 

void printLinkedList(Node* head)
{
    Node* root = head;
    while(root!=NULL)
    {
        cout<<root->data<<" ";
        root=root->next;
    }
    cout<<endl;
}
void insert(Node* head, int val)
{
    Node* root = head;
    while(root->next!=NULL)
    {
        root=root->next;
    }
    
    Node* newNode = new Node();
    newNode->next = NULL;
    newNode->data = val;
    root->next = newNode;
}

void deleteNthNode(Node* &head, int n)
{
        
        Node* prev = head;

        if(n == 0){

             
            
            head = head->next;
            delete prev;
            return;

        }

    int i;
    for(i=0;i<n-1;i++){
        prev = prev->next;
    }

        Node* current = prev->next;
        prev->next = current->next;
        delete(current);
    }

void reverse(Node** head)
{
	Node* result = NULL;
	Node* current = *head;

	while (current != NULL)
	{
		Node* next = current->next;

		current->next = result;
		result = current;
		current = next;
	}

	// fix head pointer
	*head = result;
}
  
int main() 
{ 
    Node* head = NULL; 
    Node* second = NULL; 
    Node* third = NULL;
    Node* fourth = NULL;

   
    head = new Node(); 
    second = new Node(); 
    third = new Node(); 
    fourth = new Node();

    head->data = 1;  
    head->next = second; 
    second->data = 2; 
  
    second->next = third; 

    third->data = 3;  
    third->next = fourth;
    fourth -> data = 5;
    fourth->next = NULL; 
    //insert(head,4);
    printLinkedList(head);
    deleteNthNode(head,0);
    printLinkedList(head);
    //cout<<"Reversed Linked List:"<<endl;
    //reverse(&head);
    //printLinkedList(head);
    return 0; 
} 