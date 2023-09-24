#include<bits/stdc++.h>
int subarraysWithSumK(vector < int > a, int b) {
    // Write your code here
    int tc=0;
    int xr=0;
    map<int,int>mp;
    mp[0]++;
    int n=a.size();
    for(int i=0; i<n; i++){
        xr= xr^ a[i];
        int x=xr^b;
        if(mp.find(x)!=mp.end()){
            tc+=mp[x];
        }
        mp[xr]++;

    }
     return tc;
}
