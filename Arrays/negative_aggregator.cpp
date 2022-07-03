#include <iostream>
using std::endl;
using std::cin;
using std::cout;

void negative_aggregator(int *arr, int lenght){}

int main(){
  int n;
  cout << "Enter the length of the array: ";
  cin >> n;
  cout << endl;

  int arr[n];

  cout << "Enter the elements of the array" << endl;
  for(int i = 0; i < n; i++) cin >> arr[i];

  negative_aggregator(arr, n);

  return 0;
}
