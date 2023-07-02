//sum is from rooot ot leaf;
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

bool isLeaf(TreeNode *root) {
    return (root !=NULL && root ->left == NULL && root ->right ==NULL);
}
int maxPathSum(TreeNode * root, int sum, int &maxSum){
  if(root==NULL){
    return ;
  }
  sum += root->val;
  if(isLeaf(root)){
    maxSum = max(maxSum, sum);
    return;
  } else {
    maxPathSum(root->left, sum, maxSum);
    maxathSum(root->right, sum, maxSum);
  }
}
int maxPath(TreeNode *root){
    int maxSum =0;
    maxPathSum(root, 0, maxSum);
    return maxSum;
}



int main(){

}