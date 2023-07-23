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
        inorder(root->left, temp);//�ݹ�:  һֱ������
        temp.push_back(root->val);//1:root->left==null ʱ,��ӡ�ڵ�
        inorder(root->right, temp);//���ҽڵ�ʱ,��ʵ�ҽڵ�ĸ��ڵ��Ѿ���ӡ,
    }
};


int main()
{


	return 0;
}