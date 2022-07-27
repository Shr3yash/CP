class Solution{
    public:
    vector<int> viewBottom(Node* root){
        vector<int> res;
        if(!root) return res;

        queue<pair<Node*, int>> q;
        map<int, int> mp;

        q.push({root, 0});

        while(!q.empty()){
            Node* node = q.front().first;
            int col = q.front().second;
            mp[col]=node->val;
            q.pop();

            if(node->left) q.push({node->left, col-1});
            if(node->right) q.push({node->right, col+1});
        }

        for(auto i: mp){
            res.push_back(i.second);
        }
        return res;
    }
};
