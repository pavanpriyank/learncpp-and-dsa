#include<iostream>                    //ask
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }
};

void insertAtHead(Node* &head, int val){         //putting values at head

    Node* new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}

void insertAtTail(Node* &head, int val){       //putting values at tail

    Node* new_node = new Node(val);

    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }

    //temp has reached last node
    temp->next = new_node;

}

void insertAtPosition(Node* &head,int val, int pos){

    if(pos==0){
        insertAtHead(head,val);
        return;
    }

    Node* new_node = new Node(val);
    Node* temp = head;
    int current_pos = 0;
    while(current_pos!=pos-1){
        temp=temp->next;
        current_pos++;
    }
    //temp is pointing to node at pos -1
    new_node->next = temp->next;
    temp->next = new_node;

}
void display(Node* head){              // printing nod(linkedlist)

    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;

}
int main(){

    //Node* n = new Node(1);
    //cout<<n->val<<" "<<n->next<<endl;

    Node* head = NULL;
    insertAtHead(head,2);
    display(head);
    insertAtHead(head,5);
    display(head);
    insertAtTail(head,3);
    display(head);
    insertAtPosition(head,4,2);
    display(head);

    return 0;
}