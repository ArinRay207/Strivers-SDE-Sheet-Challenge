#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.
    int l = n - 2, h = n - 1;
    while (l >= 0 && permutation[l] >= permutation[l + 1]) {
        l--;
    }
    if (l != -1) {
        while (l <= h && permutation[l] >= permutation[h]) {
            h--;
        }
        int temp = permutation[l];
        permutation[l] = permutation[h];
        permutation[h] = temp; 
    }
    reverse(permutation.begin() + l + 1, permutation.end());
    return permutation;
}
