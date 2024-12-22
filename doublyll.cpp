#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
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

int getlen(Node *&head) // Gives length of node
{
    int len = 0;
    Node *t = head;
    while (t != NULL)
    {
        len++;
        t = t->next;
    }
    return len;
}

void insertathead(Node *&head, int x)
{
    // if (head==NULL){
    //     Node *temp=new Node(x);
    //     head=temp;
    //     tail=temp;
    // }
    Node *temp = new Node(x);
    temp->next = head;
    head->prev = temp;
    head = temp;
}
void insertattail(Node *&tail, int x)
{
    Node *temp = new Node(x);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void inseratpos(Node *&head, Node *&tail, int pos, int d)
{
    // insert at start
    if (pos == 1)
    {
        insertathead(head, d);
        return;
    }

    Node *box = head;
    int cnt = 1;
    while (cnt < pos - 1)
    {
        box = box->next;
        cnt++;
    }

    // inserting at last
    if (box->next == NULL)
    {
        insertattail(tail, d);
        return;
    }

    Node *node2 = new Node(d);
    node2->next = box->next;
    box->next->prev = node2;
    box->next = node2;
    node2->prev = box;
}

void deleteat(int pos, Node *&head,Node *&tail)
{
    if (pos == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // deleting any node
        Node *curr = head;
        Node *pr = NULL;
        int cnt = 1;
        while (cnt < pos)
        {
            pr = curr;
            curr = curr->next;
            cnt++;
        }
        if (curr==tail){
            tail=pr;
        }
        curr->prev = NULL;
        pr->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void print(Node *&head)
{
    Node *t = head;
    while (t != NULL)
    {
        cout << t->data << " ";
        t = t->next;
    }
    cout << endl;
}

int main()
{
    Node *node1;
    node1 = new Node(10);

    Node *head = node1;
    Node *tail = node1;
    print(head);

    cout << "Length of node is: " << getlen(head) << endl;

    insertathead(head, 11);
    insertathead(head, 12);
    insertathead(head, 13);
    print(head);

    insertattail(tail, 20);
    insertattail(tail, 30);
    insertattail(tail, 40);
    print(head);

    cout << "Length of node is: " << getlen(head) << endl;

    inseratpos(head, tail, 8, 1000);
    inseratpos(head, tail, 4, 100);
    inseratpos(head, tail, 1, 1000);
    print(head);

    
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;

    deleteat(10, head,tail);
    deleteat(1, head,tail);
    print(head);

    
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;

    return 0;
}
