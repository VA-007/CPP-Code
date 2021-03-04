#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

#define ll long long

using namespace std;

main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int arr1[5]{2, 30, 5, 0, 1};
  int arr2[6]{20, 30, 15, 10, 1, 4};
  int arr3[11];

  for (int i = 0; i < 5; i++)
  {
    arr3[i] = arr1[i];
  }
  
  int k = 5;
  for (int i = 0; i < 6; i++)
  {
    if (!(binary_search(arr1, arr1 + 5, arr2[i])))
    {
      arr3[k++] = arr2[i];
    }
  }

  for (int i = 0; i < k; i++)
  {
    cout << arr3[i] << " ";
  }

  return 0;
}
