#include<bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  int list[n];
  
  for(int i=0; i<n; i++){
    cin >> list[i];
  }

  sort(list, list+n);

  int biggest = list[n-1];
  int sum = 0;

  for(int i=0; i<n; i++){
    sum += biggest-list[i];
  }

  cout << sum << "\n";
  
  return 0;
}
