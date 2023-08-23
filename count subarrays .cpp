class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        map<int, int>mp;
        int sum=0;
        int count=0;
        mp[0]=1;
        for(int i=0; i<n; i++){
            sum+=nums[i];
            int diff=sum-k;
            if(mp.find(diff)!=mp.end()){
            count +=mp[diff];
            }
            mp[sum]++;
        }
        return count;
    }
};
