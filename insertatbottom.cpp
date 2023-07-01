#include<bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &S, int x){
  if(S.empty()){
    S.push(x);
  }else {
    int temp = S.top();
    S.pop();
    insertAtBottom(S,x);
    S.push(temp);
  }   
}
void reverse(stack<int> &S){
    if(S.empty()){
        return;
    }else {
        int temp =S.top();
        S.pop();
        reverse(S);
        insertAtBottom(S,temp);
    }
}
int main(){
  stack<int> S;
    
    // Push elements into the stack
    S.push(1);
    S.push(2);
    S.push(3);
    S.push(4);
    S.push(5);
    
    cout << "Original Stack: ";
    while (!S.empty()) {
        cout << S.top() << " ";
        S.pop();
    }
    
    cout << endl;
    
    // Reverse the stack
    reverse(S);
    
    cout << "Reversed Stack: ";
    while (!S.empty()) {
        cout << S.top() << " ";
        S.pop();
    }
    
    return 0;
}