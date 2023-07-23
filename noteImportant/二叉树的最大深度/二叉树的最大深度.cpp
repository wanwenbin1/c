#include <iostream> 
#include <algorithm>
#include <stack>
#include <string>
using namespace std;

string h;
struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}

};

class Solution1 {
public:
	int maxDepth(TreeNode* root) {
		if (root==NULL)
		{
			return 0;
		}
		return 1 + max(maxDepth(root->left) ,maxDepth(root->right));
	}
};

class Solution {
public:
	int maxDepth(TreeNode* root) {
		if (root == NULL)
		{
			return 0;
		}
		
	}
};

int main()
{

}