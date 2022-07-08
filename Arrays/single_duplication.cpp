#include <iostream>
#include "../common_imports.h"
using std::sort;

void duplication_count(int *arr, int length){
  int count = 0;
  sort(arr, arr + length);

  for(int i = 0; i < length - 1; i++){
    if(arr[i] == arr[i + 1]) count++;
  }

  cout << "The number of duplications is " << count << endl;
}

int main(){
  int n;
  cout << "Enter the length of the array: ";
  cin >> n;
  cout << endl;

  int arr[n];
  cout << "Enter the array: " << endl;
  for(int i = 0; i < n; i++) cin >> arr[i];

  duplication_count(arr, n);
  return 0;
}
