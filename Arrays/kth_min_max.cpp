#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::sort;

void kth_min_max(int *arr, int length, int k){ 
  if(k > length){
    cout << "Invalid kth value" << endl;
    return;
  }
  sort(arr, arr + length);
  cout << "The " << k << "-> smallest element is " << arr[k-1] << endl;
  cout << "The " << k << "-> largest element is " << arr[length-k] << endl;
}

int main(){
  int n, k;
  cout << "Enter the length for the array: ";
  cin >> n;
  cout << endl;

  int arr[n];

  cout << "Enter the elements for the array" << endl;
  for(int i = 0; i < n; i++) cin >> arr[i];

  cout << "Enter the value of k: ";
  cin >> k;
  cout << endl;

  kth_min_max(arr, n, k);

  return 0;
}
