#include<bits/stdc++.h>
using namespace std;

class ListNode{
    public:
    ListNode *next;
    ListNode(): val(0), next(nullptr){}
    ListNode(int x): val(x), next(nullptr){}
    ListNode(int x, ListNode *next): val(x),next(next){}
};

class Node{
    public:
    int val;
    Node *next, *random;
    ListNode(): val(0), next(nullptr){}
};

Node * copy(Node * head) {
    unordered_map<Node*, Node*> hash;
    Node * ptr = head;
    while(ptr!=NULL){
        copiedNode = new Node(ptr-> val);
        hash[ptr]=copiedNode;
        ptr=ptr->next;
    }
    ptr = head;
    while(ptr!=NULL){
        Node* copied = hash[ptr];
        copied->next = hash[ptr->next];
        copied->random=hash[ptr->random];
        ptr= ptr->next;
    }

    return hash[head];
}

Node* copy(Node * head){
    if(head == NULL){
        return NULL;
    }
    Node * ptr = head, *qtr = NULL;
    while(ptr!=NULL){
        qtr = ptr->next;
        Node * newNode = new Node(ptr->val);
        newNode->next= qtr;
        ptr->next = newNode;

        ptr = ptr->next;
    }
    ptr = head; qtr = head->next;
    while(ptr!=NULL && qtr!=NULL){
        qtr= ptr->next;
        if(ptr->random!=NULL){
            qtr=random = ptr->random->next;
        }
        else{
            qtr->random = NULL;
        }
        ptr = qtr->next;
    }
    Node *newHead = head->next;
    ptr = head;
    while(ptr!=NULL && ptr->next = NULL){
        qtr= ptr->next;
        ptr->next = qtr->next
        ptr = qtr;
    }
return newHead;
}
int main(){

}