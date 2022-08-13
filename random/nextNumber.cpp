#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

Node * NextLargeNumber( Node * head)
{
    if(head==NULL)
    return head;

    if(head->next==NULL)
    {
        head->data+=1;
        return head;
    }

    if(head->next!=NULL)
    {   int carry=(NextLargeNumber(head->next)->data)/10;
        head->data+=carry;
        head->next->data=head->next->data-10*carry;
        return head;
    }
    
    return head;

}

Node* takeinput() {
    int data;
    cin >> data;
    Node* head = NULL, *tail = NULL;
    while(data != -1){
        Node *newNode = new Node(data);
        if(head == NULL)                  {
            head = newNode;
            tail = newNode;
        }
        else{
            tail -> next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}

void print(Node *head) {
    Node *temp = head;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main() {
    Node *head = takeinput();
    
    head = NextLargeNumber(head);
    print(head);
    return 0;
}