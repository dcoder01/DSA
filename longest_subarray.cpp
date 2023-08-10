int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    int left=0,right=0,n=a.size();
    int maxlen=0;
    long long sum=a[0];
    while(right<n){
        while(left<=right && sum>k){
            sum-=a[left];
            left++;
        }
        if(sum==k)
        {
            maxlen=max(maxlen,right-left+1);
        }
        right++;
        if(right<n) sum+=a[right];

    }
    return maxlen;

    
}
