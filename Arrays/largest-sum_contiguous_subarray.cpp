#include <iostream>
using std::endl;
using std::cin;
using std::cout;

void Largest_Sum_Contiguous_Subarray(int *arr, int length){
  int max_sum = 0;
  int curr_sum = 0;
  for(int i = 0; i < length; i++){
    curr_sum += arr[i];
    if(curr_sum > max_sum) max_sum = curr_sum;
    if(curr_sum < 0) curr_sum = 0;
  }
  cout << "The largest sum of contiguous subarray is: " << max_sum << endl;
}

int main(){
  int n;
  cout << "Enter the lenght of the array: ";
  cin >> n;

  int arr[n];

  cout << "Enter the elements of the array: " << endl;
  for(int i = 0; i < n; i++)cin >> arr[i];

  Largest_Sum_Contiguous_Subarray(arr, n);
  return 0;
}
