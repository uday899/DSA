class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n=candyType.size();
        unordered_set<int>uniqueset(candyType.begin(),candyType.end());
        return min(n/2,(int)uniqueset.size());
    }
};