#include <iostream>
#include <cstdlib>
using std::endl;
using std::cin;
using std::cout;
using std::sort;

int  height_diff_towers(int *arr, int length, int k){
  sort(arr, arr + length);
  if(arr[0] > k || arr[0] == k) arr[0] = arr[0] - k;
  else arr[0] = arr[0] + k;
  int min = arr[0], max = arr[0];

  cout << "Arr: " << arr[0] << endl;

  for(int i = 1; i < length; i++){
    if(arr[i] > k || arr[i] == k) arr[i] = arr[i] - k;
    if(arr[i] < k) arr[i] = arr[i] + k;

    cout << "Arr: " << arr[i] << endl;

    if(arr[i] < min) min = arr[i];
    else if(arr[i] > max) max = arr[i];
  }
  
  return abs(max - min);

}

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
