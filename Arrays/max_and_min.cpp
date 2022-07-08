#include <iostream>
#include "../common_imports.h"

void max_and_min(int *arr, int length){
  int max=arr[0], min = arr[0];

  for(int i = 0; i< length; i++){
    if(arr[i] > max) max = arr[i];
    else if (arr[i] < min) min = arr[i];
  }

  cout << "Max: " << max << endl;
  cout << "Min: " << min << endl;
}

int main(){
  int n;
  cout << "Enter the size for the array: ";
  cin >> n;
  cout << endl;

  int arr[n];
  cout << "Enter the elements of the array: " << endl;
  for(int i =0; i<n; i++) cin >> arr[i];

  max_and_min(arr, n);
  return 0;
}
