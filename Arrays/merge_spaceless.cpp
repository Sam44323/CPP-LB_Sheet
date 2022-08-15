#include "../common_imports.h"
#include <cstdlib>
using std::sort;

void merge_spaceless(int arr1[], int arr2[], int l1, int l2) {
  int i = 0, j= 0, swap = 0;
  for(int i = l2 - 1; i >= 0; i--){
    for(int j = l1 - 1; j >= 0; j--){
      if(arr1[j] > arr2[i]){
        swap = arr1[j];
        arr1[j] = arr2[i];
        arr2[i] = swap;
      }
    } 
  }

  sort(arr1, arr1 + l1);
  sort(arr2, arr2 + l2);

  for(int i = 0; i < l1; i++){
    cout << arr1[i] << " ";
  }

  for(int i = 0; i < l2; i++){
    cout << arr2[i] << " ";
  }
}

int main()
{
  int n1, n2, i = 0;
  cout << "Enter the length of the first-array! " << endl;
  cin >> n1;
  int arr1[n1];

  cout << "Enter the elements for the array! " << endl;
  for (i = 0; i < n1; i++)
    cin >> arr1[i];

  cout << "Enter the length of the second-array! " << endl;
  cin >> n2;
  int arr2[n2];

  cout << "Enter the elements for the array! " << endl;

  for (i = 0; i < n2; i++)
    cin >> arr2[i];

  sort(arr1, arr1 + n1);
  sort(arr2, arr2 + n2);

  merge_spaceless(arr1, arr2, n1, n2);
  return 0;
}
