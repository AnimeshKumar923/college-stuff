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

        void insertLast(node* &head, int value){
            node* n=new node(value);

            if(head==NULL){
                head=n;
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
};


int main()
{
    node* head=NULL;
    
    return 0;
}