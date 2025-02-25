#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;


  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int num = j + i * n + 1;
      if (num < 10)
        cout << '0' << num;
      else
        cout << num;
    }
    cout << '\n';
  }
    cout<<'\n';
    int num =1;
  for (int i = 0; i < n; i++) {
     for(int k =n-i-1;k>0;k--){
            cout<<"  ";
        }
    for (int j = n-i-1; j < n; j++) {
      if (num < 10)
        cout << '0' << num++;
      else
        cout << num++;
    }
    cout << '\n';
  }
}