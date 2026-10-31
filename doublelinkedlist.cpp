#include<iostream>
using namespace std;

class Node{

    public:
    int val;
    Node* prev;
    Node* next;

    Node(int data){
        val = data;
        prev = NULL;
        next = NULL;
    }
};

class Doublylinkedlist{

    public:
    Node* head;
    Node* tail;

    Doublylinkedlist(){

        head = NULL;
        tail = NULL;
    }

    void display(){

        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<"<->";
            temp=temp->next;
        }
        cout<<endl;
    }

    void insertatstart(int val){

        Node* new_node = new Node(val);
        if(head==NULL){
            head = new_node;
            tail = new_node;
            return;
        }

        new_node->next = head;
        head->prev = new_node;
        head = new_node;
        return;
    }

    void insertatend(int val){

        Node* new_node = new Node(val);
        if(tail==NULL){
            head = new_node;
            tail = new_node;
            return;
        }

        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
    }

    void inseratposition(int val , int k){

        //assuming k is less or equal to length of doubly linked list
        Node* temp = head;
        int count = 1;
        while(count<(k-1)){
            temp=temp->next;
            count++;
        }

        //temp will be pointing to the node at (k-1)th position
        Node* new_node = new Node(val);
        new_node->next = temp->next;
        temp->next = new_node;

        new_node->prev = temp;
        new_node->next->prev = new_node;
        return; 
    }


};


int main(){

    // Node* new_node = new Node(3);

    // Doublylinkedlist dll;
    // dll.head = new_node;
    // dll.tail = new_node;
    // cout<<dll.head->val<<endl;

    Doublylinkedlist dll;

    // dll.insertatstart(1);
    // dll.insertatstart(2);
    // dll.insertatstart(3);
    // dll.display();

    dll.insertatend(1);
    dll.display();
    dll.insertatend(2);
    dll.display();
    dll.insertatend(3);
    dll.display();

    dll.inseratposition(4,3);
    dll.display();


    return 0;
}