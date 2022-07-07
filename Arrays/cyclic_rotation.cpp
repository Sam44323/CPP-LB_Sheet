#include <iostream>
using std::endl;
using std::cout;
using std::cin;

void cycle_array(int *arr, int length){}

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
