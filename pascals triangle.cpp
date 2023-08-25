vector<int> generateRow(int n) {
  long long ans = 1;
  vector<int> row;
  row.push_back(1);
  for (int i = 1; i < n; i++) {
    ans = ans * (n - i);
    ans = ans / i;
    row.push_back(ans);
  }
  return row;
}
vector<vector<int>> pascalTriangle(int n) {
  vector<vector<int>> ans;
  for (int i = 1; i <= n; i++) {
    ans.push_back(generateRow(i));
  }
  return ans;
