#include <bits/stdc++.h> 
using namespace std;
void sort012(int *arr, int n)
{
   //   Write your code here
   int l = 0, h = n - 1;
   while (l < n  && arr[l] == 0) l++;
   while (h >= 0 && arr[h] == 2) h--;
   for (int i = l; i <= h; i++) {
      if (arr[i] == 2) {
         int temp = arr[h];
         arr[h] = arr[i];
         arr[i] = temp;
         while (h >= 0 && arr[h] == 2) h--;
      }
      if (arr[i] == 0) {
         int temp = arr[l];
         arr[l] = arr[i];
         arr[i] = temp;
         l++;
      }
   }
}
