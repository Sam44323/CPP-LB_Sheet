#include "../common_imports.h"
#include <cstdlib>
using std::sort;

void merge_spaceless(int arr1[], int arr2[], int l1, int l2) {}

int main()
{
  int n1, n2, i = 0;
  cout << "Enter the length of the first-array! " << endl;
  cin >> n1;
  int arr1[n1];
  for (i = 0; i < n1; i++)
    cin >> arr1[i];

  cout << "Enter the length of the second-array! " << endl;
  cin >> n2;
  int arr2[n2];

  for (i = 0; i < n2; i++)
    cin >> arr2[i];

  sort(arr1, arr1 + n1);
  sort(arr2, arr2 + n2);

  merge_spaceless(arr1, arr2, n1, n2);
  return 0;
}
