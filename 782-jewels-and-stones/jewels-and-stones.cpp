class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char>jewelsset(jewels.begin(),jewels.end());
        int count=0;
        for(char stone:stones){
            if(jewelsset.count(stone)){
                count++;
            }
        }
        return count;
    }
};