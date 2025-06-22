class Solution {
public:
 bool isprime(int num){
    if(num==2) return true;
    if(num<2) return false;
    if(num%2==0) return false;
    for(int i=3;i*i<=num;i+=2){
        if(num%i==0) return false; 
    }
    return true;
 }



    bool checkPrimeFrequency(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto &it:mpp){
            if(isprime(it.second)){
                return true;
            }

        }
          return false;
    }
};