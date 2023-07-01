#include<bits/stdc++.cpp>
using namespace std;
class TreeNode
{
public:
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(): val(0), left(nullptr), right(nullptr){}
  TreeNode(int x): val(x), left(nullptr), right(nullptr){}
  TreeNode(int x, TreeNode *left, TreeNode *right):val(x), left(left), right(right){}
};
void inorder(TreeNode *root, vector<int> &result){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    result.push_back(root->val);
    inorder(root->right);
}
vector<int> inorder(TreeNode *root){
    vector<int> result;
    inorder(root,result);
    return result;
}
int main(){
   TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    // Perform inorder traversal
    vector<int> result = inorder(root);

    // Print the result
    cout << "Inorder traversal result: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}