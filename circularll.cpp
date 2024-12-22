#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int p)
    {
        this->data = p;
        this->next = NULL;
    }

    // destructor
    ~Node()
    {
        int value = this->data;
        // memeory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memory is free for data " << value << endl;
    }
};

void insertnode(Node *&tail, int ele, int d)
{
    // assuming that elememnt is int list
    Node *temp = new Node(d);
    if (tail == NULL)
    {
        tail = temp;
        temp->next = temp;
    }
    else
    {
        // non-empty list
        Node *curr = tail;
        while (curr->data != ele)
        {
            curr = curr->next;
        }

        //  element forund
        temp->next = curr->next;
        curr->next = temp;
    }
}

void deleteat(Node *tail,int value){
    if (tail==NULL){
        cout<<"empty list"<<endl;
        return ;
    }
    else{
        Node *prev=tail;
        Node *curr=prev->next;
        while(curr->data!=value){
                prev=curr;
                curr=curr->next;
        }
        prev->next=curr->next;
        if (curr==tail){
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
    }
}

void print(Node *&tail) 
{
    Node *t = tail;
    do
    {
        cout << t->data << " ";
        t = t->next;
    } while (tail != t);
    cout << endl;
}

int main()
{
    Node *tail = NULL;
    insertnode(tail, 5, 3);
    insertnode(tail, 3, 5);
    insertnode(tail, 5, 7);
    insertnode(tail, 7, 9);
    insertnode(tail, 5, 70);
    print(tail);

    deleteat(tail,7);
    print(tail);
    deleteat(tail,3);//error
    print(tail);

    return 0;
}