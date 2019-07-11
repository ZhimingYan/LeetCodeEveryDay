/*
 * @lc app=leetcode.cn id=429 lang=cpp
 *
 * [429] N叉树的层序遍历
 */
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>>res;
        if(!root) return res;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        while(q.size()){
            auto t = q.front();
            auto node = t.first;
            auto level = t.second;
            q.pop();
            if(level == res.size()){
                res.push_back(vector<int>());
            }
            res[level].push_back(node->val);
            for(int i = 0;i < node->children.size();i++){
                if(node->children[i]){
                    q.push({node->children[i],level+1});
                }
            }
        }
        return res;
    }
};

