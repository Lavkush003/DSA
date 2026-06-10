
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;

    }
};
class List{
    Node* head;
    Node* tail;
    public:
    List(){
        head=NULL;
        tail=NULL;

    }


void push_front(int val){
    Node* newNode=new Node(val);
    if(head==NULL){
        head=tail=newNode;

    }else{
        newNode->next=head;
        head=newNode;

    }
}

void push_back(int val){
    Node* newNode=new Node(val);
    if(head==NULL){
        head=tail=newNode;

    }else{
        tail->next=newNode;
        tail=newNode;

    }
}

void printList(){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL "<<endl;
}

//reverse LL

void reverse(){
    Node* curr=head;
    Node* prev=NULL;
    while(curr!=NULL){
        Node* next=curr->next;
        curr->next=prev;

        //updating for next itr
        prev=curr;
        curr=next;

    }
    head=prev;
}
int getSize(){
    int sz=0;
    Node* temp=head;

    while(temp!=NULL){
        temp=temp->next;
        sz++;
    }
    return sz;
}

// Find and Remove Nth node from End of LinkedList

void removeNth(int n){
    int size=getSize();
    Node* prev=head;
    for(int i=1;i<(size-n);i++){
        prev=prev->next;

    }
    Node* toDel=prev->next;
    cout<<"going to delete : "<<toDel->data<<endl;

    prev->next=prev->next->next;
}

};

int main(){
List ll;
ll.push_front(3);
ll.push_front(2);
ll.push_front(1);
ll.printList(); //1->2->3

ll.push_back(4);
ll.push_back(5);
ll.printList(); //1->2->3->4->5

//ll.reverse();
//ll.printList(); //5->4->3->2->1

ll.removeNth(2);
ll.printList();

    return 0;
}
