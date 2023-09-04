#include <iostream>
using namespace std;

class node  
{  
    public:
        int data;
        node* next;

        node(int value){
            data=value;
            next=NULL;
        }

        node(){
            data=0;
            next=NULL;
        }
};

void insertLast(node* &head, int value){
    node* n=new node(value);

    if(head==NULL){
        head=n;
        return;
    }

    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next=n;
}

void disp(node* head){
    node* temp=head;
    while (temp!=NULL)  
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    cout<<endl;
    
}


int main()
{
    node* head=NULL;
    insertLast(head,254);
    insertLast(head,125);
    insertLast(head,541);
    insertLast(head,6969);
    disp(head);

    return 0;
}