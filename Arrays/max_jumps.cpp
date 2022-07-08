#include <iostream>
#include "../common_imports.h"

int max_jump(int *arr, int length){
  int jumps = 0;
  for(int i = 0; i < length ; i++){
     if(arr[i] < length - 1){
      i += arr[i];
      jumps++;
    }   
  }

  return jumps;
}

int main(){
  int n;
  cout << "Enter the length of the array: ";
  cin >> n;

  int arr[n];
  cout << "Enter the array: " << endl;
  for(int i = 0; i < n; i++) cin >> arr[i];

  cout << "The maximum number of jumps is " << max_jump(arr, n) << endl;
  return 0;
}
