class Solution {
private:
    int firstocc(vector<int> arr, int n, int x) {
    int low = 0, high = n - 1;
    int ans = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        // maybe an answer
        if (arr[mid] == x) {
            ans = mid;
            high = mid - 1;
        }
        else if(arr[mid]>x) {
            high =mid-1;
        }
        else low=mid+1;
    }
    return ans;
}
int lastocc(vector<int> arr, int n, int x) {
    int low = 0, high = n - 1;
    int ans = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
     
        if (arr[mid] == x) {
            ans = mid;     
            low=mid+1;
        }
        else if(arr[mid]>x) {
           high =mid-1;
        }
        else low=mid+1;
    }
    return ans;
}
public:

    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int lb=firstocc(nums,n,target);
        if(lb==-1) return {-1,-1};
        return {lb,lastocc(nums,n,target)};
    }
};
