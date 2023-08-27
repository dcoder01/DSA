
#include <bits/stdc++.h> 
#include <iostream>
using namespace std;
void rotate(int arr[], int n){
    int d;
    cin>>d;
    d=d%n;;
    reverse(arr,arr+d);
    reverse(arr+d, arr+n);
    reverse(arr,arr+n);
}
int main() {
    //Write your code here
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];

    }
    rotate(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";

    }

    return 0;
}
