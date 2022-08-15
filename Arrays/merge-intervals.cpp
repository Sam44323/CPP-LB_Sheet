#include "../common_imports.h"

struct Interval{
  int a, b;
};

bool custom_comparsion(Interval i1, Interval i2){
  return i1.a < i2.a;
}

void merge_intervals(Interval arr[], int len) {
  sort(arr, arr + len, custom_comparsion);

  int index = 0;
  for(int i = 1; i < len ; i ++){
     if(arr[index].b >= arr[i].a){
        arr[index].b = max(arr[index].b, arr[i].b);
      } else {
        index ++;
        arr[index] = arr[i];
      }
    }

    cout << "Array with merged-intervals " << endl;

    for(int i = 0; i <= index; i ++){
      cout << arr[i].a << " " << arr[i].b << endl;
    }
}

int main(){
  int n;
  cout << "Enter the length of the array: ";
  cin >> n;

  Interval arr[n];

  cout << "Enter the structs for the intervals: " << endl;
  for(int i = 0; i < n; i++){
    cout << "Enter the start-value for struct: " << endl;
    cin >> arr[i].a;
    cout << "Enter the end-value for struct: " << endl;
    cin >> arr[i].b;
  }

  merge_intervals(arr, n);
  return 0;
}
