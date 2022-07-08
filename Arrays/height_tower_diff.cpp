#include <iostream>
using std::endl;
using std::cin;
using std::cout;

int  height_diff_towers(int *arr, int length, int k){}

int main(){
  int n, k;
  cout << "Enter the length of the array: ";
  cin >> n;
  cout << endl;

  int arr[n];
  cout << "Enter the elements of the array: " << endl;
  for(int i = 0; i < n; i++) cin >> arr[i];

  cout << "Enter the value difference: ";
  cin >> k;
  cout << endl;

  cout << "The height difference of the towers is: " << height_diff_towers(arr, n, k) << endl;
  return 0;
}
