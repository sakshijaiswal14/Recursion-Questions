/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int len=q.size();
            vector<int> lev;
            for(int i=0;i<len;i++){
                Node* node=q.front();
                q.pop();
                lev.push_back(node->val);
                for (int i = 0; i < node->children.size(); i++){
                    q.push(node->children[i]);
                }
            }
            ans.push_back(lev);
        }
        return ans;
    }
};