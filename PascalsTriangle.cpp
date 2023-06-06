#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  if (n == 1) {
    return {{1}};
  }  
  vector<vector<long long int>> v = printPascal(n - 1);
  vector<long long int> cur;
  for (int i = 0; i < n; i++) {
    if (i == 0 || i == n - 1) {
      cur.push_back(1);
    } else {
      cur.push_back(v[v.size() - 1][i - 1] + v[v.size() - 1][i]);
    } 
  }
  v.push_back(cur);
  return v;
}
