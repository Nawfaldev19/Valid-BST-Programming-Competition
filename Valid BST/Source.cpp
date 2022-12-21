#include<iostream>
#include<algorithm>
#include<stack>

using namespace std;

void Accumulate(TreeNode* root,vector<int>&vect)
    {
        if(root==nullptr)
        {
            return;
        }
        Accumulate(root->left,vect);
        vect.push_back(root->val);
        Accumulate(root->right,vect);
    }

    bool isValidBST(TreeNode* root) {
        vector<int> vect;
        Accumulate(root,vect);
        for(int i=0;i<vect.size()-1;i++)
        {
            if(vect[i]>=vect[i+1])
            {
                return false;
            }
        }
        return true;
    }


int main()
{

//solved in Leetcode-Nawfal Imran-> nawfal.imran.dev0@gmail.com

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

}