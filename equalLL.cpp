#include <iostream>                  //ask
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int data) {
        val = data;
        next = NULL;
    }
};

class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = NULL;
    }

    void insertAtHead(int val) {
        Node* new_node = new Node(val);
        new_node->next = head;
        head = new_node;
    }

    void display() {
        Node* temp = head;

        while (temp != NULL) {
            cout << temp->val << "->";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }
};

bool checkEqualLinkedList(Node* head1, Node* head2) {
    Node* ptr1 = head1;
    Node* ptr2 = head2;

    while (ptr1 != NULL && ptr2 != NULL) {
        if (ptr1->val != ptr2->val) {
            return false;
        }

        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    return (ptr1 == NULL && ptr2 == NULL);
}

int main() {
    LinkedList ll1;
    ll1.insertAtHead(1);
    ll1.insertAtHead(2);
    ll1.insertAtHead(3);

    LinkedList ll2;
    ll2.insertAtHead(1);
    ll2.insertAtHead(2);
    ll2.insertAtHead(3);

    ll1.display();
    ll2.display();

    cout << checkEqualLinkedList(ll1.head, ll2.head) << endl;

    return 0;
}