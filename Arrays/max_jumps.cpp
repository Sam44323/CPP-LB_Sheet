#include <iostream>
using std::endl;
using std::cin;
using std::cout;

int max_jump(int *arr, int length){}

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
