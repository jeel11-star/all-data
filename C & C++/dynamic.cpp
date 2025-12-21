#include <iostream>
#include<vector>
using namespace std;



class Node {
    public:
    int data;
    Node* next;
};

void insertAtBeginning(Node*& head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}


void deleteNode(Node*& head, int value) {
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }


    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* current = head;
    while (current->next != NULL && current->next->data != value) {
        current = current->next;
    }

    if (current->next == NULL) {
        cout << "Value not found\n";
        return;
    }

    Node* temp = current->next;
    current->next = temp->next;
    delete temp;
}


void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}


int main() {
    Node* head = NULL;
    


    

    insertAtBeginning(head, 10);
    insertAtBeginning(head, 20);
    insertAtBeginning(head, 30);
    insertAtBeginning(head, 40);


    cout << "Linked List: "<<endl;
    display(head);



    deleteNode(head,10);
    deleteNode(head, 20);
    cout << "After deleting 10 and 20 : "<<endl;
    display(head);

    return 0;
}

 