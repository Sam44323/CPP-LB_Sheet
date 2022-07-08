#include <iostream>
#include "../common_imports.h"

void cycle_array(int *arr, int length){
  int lastValue = arr[length - 1], newArr[length];
  for(int i = 0; i < length - 1 ; i++) newArr[i + 1] = arr[i];

  newArr[0] = lastValue;

  cout << "Cycled Array: " << endl;
  
  for(int i = 0; i < length; i++) cout << newArr[i] << " ";
}

int main(){
  int n;
  cout << "Enter the length of the array: ";
  cin >> n;

  int arr[n];

  cout << "Enter the elements of the array: " << endl;
  for(int i = 0; i < n; i ++) cin >> arr[i];

  cycle_array(arr, n);
  return 0;
}
