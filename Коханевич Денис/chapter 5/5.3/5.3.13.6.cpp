﻿#include <iostream>
using namespace std;
class Node
{
    public:
        Node(int val);
        ~Node();
        int value;
        Node* next;
};

Node::Node(int val) : value(val), next(nullptr)
{
    //cout << "+Node" << endl;
}
Node::~Node()
{
    //cout << "-Node" << endl;
}
class List
{
    public:
        List();
        void push_front(int value);
        bool pop_front(int &value);
        int size();
        void push_back(int value);
        bool pop_back(int &value);
        int at(int index);
        void insert_at(int index, int value);
        void remove_at(int index);
    private:
        Node* head;
        Node* tail;
};

List::List()
{
    head = tail =  nullptr;
}
int List::size(){
    int counter = 0;
    Node *curr = head;
    while(curr){
        curr = curr->next;
        counter++;
    }
    return counter;
}
void List::push_front(int value)
{
    Node* new_head = new Node(value);
    if(!head){
        head = tail = new_head;
        return;
    }
    new_head->next = head;
    head=new_head;
}
void List::push_back(int value)
{
    Node* new_tail = new Node(value);
    if(!head){
        head = tail = new_tail;
        return;
    }
    tail->next = new_tail;
    tail = new_tail;
}
bool List::pop_front(int &value)
{
    if(head!=nullptr){
        value = head->value;
        Node *newNode = head;
        head = newNode->next;
        delete newNode;
        return true;
    }
    //delete head;
// implement the pop
// don't forget to delete the popped node!
// and fix the return value
    return false;
}
bool List::pop_back(int &value){
    if(!head)
        return false;
    value = tail->value;
    if(head == tail){
        delete head;
        head = tail = nullptr;
        return true;
    }
    Node *prev_tail = head;
    while(prev_tail->next!=tail)
        prev_tail = prev_tail->next;
    delete tail;
    tail = prev_tail;
    return true;
}
int List::at(int index){
    if(index<0||index>=size())
        return -1;
    if(index == 0)
        return head->value;
    if(index == size() - 1)
        return tail->value;

    Node *n = head;
    while(index--)
        n=n->next;

    return n->value;
}

void List::insert_at(int index, int val){
    if(index == 0){
        push_front(val);
        return;
    }
    if(index == size()){
        push_back(val);
        return;
    }

    Node *new_node = new Node(val);
    Node *curr = head;
    --index;
    while(index--)
        curr = curr->next;

    new_node->next = curr->next;
    curr->next = new_node;
}

void List::remove_at(int index){
    if(index == 0){
        pop_front(index);
        return;
    }
    if(index == size()-1){
        pop_back(index);
        return;
    }
    if(index<0 || index>=size())
        return;
    --index;
    Node *curr = head;
    while(index--)
        curr = curr->next;
    Node *temp = curr->next->next;
    delete curr->next;
    curr->next = temp;
}
void printList(List list)
{
    for (int i = 0; i < list.size(); i++)
    {
        cout << "list[" << i << "] == " << list.at(i) << endl;
    }
}

int main()
{
  List list;
//
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    list.push_back(4);
    printList(list);
    cout << endl;
    list.remove_at(2);
    printList(list);
    cout << endl;
    list.insert_at(1, 6);
    printList(list);
    return 0;

}
