// /*
//  * @lc app=leetcode.cn id=100 lang=cpp
//  *
//  * [100] 相同的树
//  */

// // @lc code=start
// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */

// struct TreeNode
// {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// };

// class Solution
// {
// public:
//     bool isSameTree(TreeNode *p, TreeNode *q)
//     {
//         if ((p == nullptr && q != nullptr) || (p != nullptr && q == nullptr))
//         {
//             return false;
//         }

//         if (p == nullptr && q == nullptr)
//         {
//             return true;
//         }

//         TreeNode* pp = p;
//         TreeNode* qp = q;

//         if (pp->val !=  qp->val){
//             return false;
//         }

//         return isSameTree(pp->left,qp->left) && isSameTree(pp->right,qp->right);
//     }
// };
// // @lc code=end
