# include <iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
};
int main() {
    Node* first= new Node();
    Node* second= new Node();
    Node* third= new Node();
    Node* fourth= new Node();
    first->data=10;
    second->data=20;
    third->data=30;
    fourth->data=40;
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=NULL;
    Node* temp=first;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}
