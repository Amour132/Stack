//二叉树前序遍历非递归
class Solution {
public:
	vector<int> preorderTraversal(TreeNode* root) {
		vector<int>num;
		if (root == NULL)
		{
			return num;
		}
		TreeNode* cur = root;
		TreeNode* tmp;
		int i = 0;
		while (cur || s1.empty())
		{
			while (cur)
			{
				s1.push(cur);
				num.push_back(cur->val);
				cur = cur->left;
			}
			tmp = s1.top();
			s1.pop();
			cur = tmp->right;
		}
		return num;
	}
private:
	stack<TreeNode*>s1;
};



//二叉树中序遍历非递归
class Solution {
public:
	vector<int> inorderTraversal(TreeNode* root) {
		vector<int>num;
		if (root == NULL)
		{
			return num;
		}
		TreeNode* cur = root;
		TreeNode* tmp;
		while (cur || !s1.empty())
		{
			while (cur)
			{
				s1.push(cur);
				cur = cur->left;
			}
			tmp = s1.top();
			num.push_back(tmp->val);
			s1.pop();
			cur = tmp->right;
		}
		return num;
	}
private:
	stack<TreeNode*>s1;
};

//二叉树后序遍历非递归
class Solution {
public:
	vector<int> postorderTraversal(TreeNode* root) {
		vector<int>num;
		if (root == NULL)
			return num;
		TreeNode* cur = root;
		TreeNode* tmp;
		TreeNode* prev = NULL;
		while (cur || !s1.empty())
		{
			while (cur)
			{
				s1.push(cur);
				cur = cur->left;
			}
			tmp = s1.top();
			if (tmp->right == NULL || tmp->right == prev)
			{
				num.push_back(tmp->val);
				prev = tmp;
				s1.pop();
			}
			else
			{
				cur = tmp->right;
			}
		}
		return num;


	}
private:
	stack<TreeNode*>s1;
};

//最近公共祖先
class Solution {
public:
	TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
		if (!root || root == p || root == q)
			return root;
		TreeNode* left = lowestCommonAncestor(root->left, p, q);
		TreeNode* right = lowestCommonAncestor(root->right, p, q);
		if (left && right)
			return root;
		if (left == NULL)
			return right;
		if (right == NULL)
			return left;
	}
};

//二叉树镜像
class Solution {
public:
	void Mirror(TreeNode *pRoot) {
		if (pRoot == NULL)
		{
			return;
		}
		swap(pRoot->left, pRoot->right);
		Mirror(pRoot->left);
		Mirror(pRoot->right);
	}
};

//栈的压入弹出序列
class Solution {
public:
	bool IsPopOrder(vector<int> pushV, vector<int> popV) {
		if (pushV.size() != popV.size())
		{
			return false;
		}
		int index = 0;
		int outdex = 0;
		stack<int>s;
		while (index < pushV.size())
		{
			s.push(pushV[index]);
			index++;
			while (!s.empty() && s.top() == popV[outdex])
			{
				outdex++;
				s.pop();
			}
		}
		return s.empty();

	}
};
