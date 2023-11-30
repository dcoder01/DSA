class Solution {
private:
    int findIndex(vector<vector<int>>& mat, int mid){
        int index=-1, maxi=INT_MIN,n=mat.size();
        for(int i=0; i<n; i++){
            if(mat[i][mid]>maxi){
                maxi=mat[i][mid];
                index=i;
            }
        }
        return index;
    }
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n=mat.size(),m=mat[0].size();
        int low=0, high=m-1;
        while(low<=high){
            int mid=(low+high)/2;
            int row=findIndex(mat,mid);
            int left= mid-1>=0? mat[row][mid-1]: -1;
            int right= mid+1<m ? mat[row][mid+1]: -1;
            if(mat[row][mid]>left && mat[row][mid]>right) return {row, mid};
            else if(mat[row][mid]<left) high=mid-1;
            else low=mid+1;

        }
        return {-1,-1};
    }
};
