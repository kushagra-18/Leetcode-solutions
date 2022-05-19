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
    int maxDepth(Node* root) {
                
        if(root == nullptr)
            return {};
        
        int hi = 0;
      
        queue<Node*> q;
        
        q.push(root);
        
        while(!q.empty()){
            
            vector<int> ans;
            
             hi++;
                     
            int n = q.size();
            
            for(int i = 0;i<n;i++){
                
                auto top = q.front();
                q.pop();
                
                ans.push_back(top->val);
                
                for(auto x:top->children)
                    q.push(x);
                
            }   
            
        }
        
        return hi;
        
        
    }
};