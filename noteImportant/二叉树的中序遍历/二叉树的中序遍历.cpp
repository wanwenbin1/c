#include <iostream>
#include <vector>
using namespace std;


  struct TreeNode {
      int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>temp;
        inorder(root, temp);
        return temp;    
    }
    void inorder(TreeNode* root,vector<int>&temp)
    {
        if (root==NULL)
        {
            return;
        }
        inorder(root->left, temp);//递归:  一直往左走
        temp.push_back(root->val);//1:root->left==null 时,打印节点
        inorder(root->right, temp);//有右节点时,其实右节点的根节点已经打印,
    }
};


int main()
{


	return 0;
}