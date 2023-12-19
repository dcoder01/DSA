class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>>ans;
        map<int,map<int,multiset<int>>>mp;
        queue<pair<TreeNode* ,pair<int,int>>>q;
        q.push({root,{0,0}});
        while(!q.empty()){
            auto it=q.front();
            q.pop();
            TreeNode * node=it.first;
            int vertical=it.second.first;
            int level=it.second.second;
            mp[vertical][level].insert(node->val);
            if(node->left) {
                q.push({node->left,{vertical-1,level+1}});

            }
            if(node->right) {
                q.push({node->right,{vertical+1,level+1}});
                
            }          

        }
        for(auto it: mp){
            vector<int>list;
            for(auto x: it.second){
                list.insert(list.end(),x.second.begin(),x.second.end());
            }
            ans.push_back(list);

        }
        return ans;
        

    }
};
