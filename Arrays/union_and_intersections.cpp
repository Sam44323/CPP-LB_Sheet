#include <set>
#include "../common_imports.h"
using std::set;

void union_find(int *arrA, int *arrB, int lenA, int lenB){
  set<int> unionized;

  for(int i = 0; i < lenA; i++){
    unionized.insert(arrA[i]);
  }

  for(int i = 0; i < lenB; i++){
    unionized.insert(arrB[i]);
  }

  cout << "Unionized value length is : " << unionized.size() << endl;
}

void intersection_find(int *arrA, int *arrB, int lenA, int lenB){
  set<int> intersected;

  for(int i = 0; i < lenA; i++){
    for(int j = 0; j < lenB; j++){
      if(arrA[i] == arrB[j]){
        intersected.insert(arrA[i]);
      }
    }
  }

  cout << "Intersected value length is : " << intersected.size() << endl;
}

int main(){
  int n, m;
  cout << "Enter the size for first array: ";
  cin >> n;
  cout << endl;

  cout << "Enter the size for second array: ";
  cin >> m;
  cout << endl;

  int arrA[n], arrB[m];

  cout << "Enter the elements for first array: ";
  for(int i = 0; i < n; i++){
    cin >> arrA[i];
  }

  cout << endl;

  cout << "Enter the elements for second array: ";
  for(int i = 0; i < m; i++){
    cin >> arrB[i];
  }

  cout << endl;

  union_find(arrA, arrB, n, m);
  intersection_find(arrA, arrB, n, m);
  return 0;
}
