class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        vector<int>ans;
        int mi=cost[0];
        ans.push_back(mi);
        for(int i=1;i<cost.size();i++){
            mi=min(cost[i],mi);
            ans.push_back(mi);
        }
        return ans;
    }
};