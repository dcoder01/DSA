#include <bits/stdc++.h>
string read(int n, vector<int> arr, int target) {
  // Write your code here.
  int left = 0, right = n - 1;
  sort(arr.begin(), arr.end());
  while (left < right) {
    int sum = arr[left] + arr[right];
    if (sum == target) {
      return "YES";
    } else if (sum < target)
      left++;
    else if (sum > target)
      right--;
  }
  return "NO";
}
