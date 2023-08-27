class Solution {
public:
    vector<int> majorityElement(vector<int>& v) {
          vector<int> ans;
  int ct1 = 0, ct2 = 0;
  int el1,el2;
  int n = v.size();

  for (int i = 0; i < n; i++) {
    if (ct1 == 0&& v[i]!=el2) {
      ct1 = 1;
      el1 = v[i];

    } else if (ct2 == 0 && v[i]!=el1) {
      ct2 = 1;
      el2 = v[i];

    } else if (el1 == v[i])
      ct1++;
    else if (el2 == v[i])
      ct2++;
    else 
      ct1--,
      ct2--;
    
  }
	// ans.push_back(el1);
	// ans.push_back(el2);
  ct1=0,ct2=0;
  for(int i=0; i<n; i++){
	  if(el1==v[i]) ct1++;
	  if(el2==v[i] ) ct2++;
	
  }
  int comp=n/3+1;
  if(ct1>=comp) ans.push_back(el1);
  if(ct2>=comp) ans.push_back(el2);
  return ans;
    }
};
