class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int tc=0, maxi=0;
        for(int i=0; i<n; i++){
            if(nums[i]==1) tc++;
            else {
                maxi=max(tc,maxi);
                tc=0;
                // break;
            }
             maxi=max(tc,maxi);
        }
        return maxi;
    }
};
