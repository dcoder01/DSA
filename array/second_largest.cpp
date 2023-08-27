int secondLargest(vector<int> &a, int n){
    int slargest=-1;
    int largest=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>largest){
            slargest=largest;
            largest=a[i];
        }
        else if(a[i]<largest&&slargest<a[i]){
            slargest=a[i];
        }
    }
    return slargest;
}
int secondSmallest(vector<int> &a, int n){
    int smallest=a[0];
    int ssmallest=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]<smallest){
            ssmallest=smallest;
             smallest=a[i];
        }
        else if(a[i]>smallest&&ssmallest>a[i]){
            ssmallest=a[i];
        }
    }
    return ssmallest;
}
vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int slargest=secondLargest(a,n);
    int ssmallest=secondSmallest(a,n);
    return {slargest,ssmallest};

}
