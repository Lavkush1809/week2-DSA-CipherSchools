#include<bits/tsdcpp.h>
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
int height(TreeNode* root){
    if(root == NULL){
        return 0;
    }else {
        return 1 + max(height(root->left), height(root->right));
    }
}

void printGivenLevel(TreeNode * root, int level, int currentLevel, vector<int> &levelH){
       if(root==NULL){
        return;
       }
       if(level ==0){
        levelH.push_back(root->val);
       }
       else if (level -> 0){
        printGivenLevel(root->left, level-1, levelH);
        printGivenLevel(root->right, level-1, levelH);
       }
}


vector<vector<int>> levelOrder(TreeNode *root){
    if(root=NULL){
        return {};
    }
     vector<vector<int>> levelOrder;
    int H = height(root);
    for(int h = 1; h<=H; h++){
        vector<int> levelH;
        printGivenLevel(root, h, levelH);
        levelOrder.push_back(levelH);
    }
    return levelOrder;
}
int main(){

}