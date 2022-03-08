#include<bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  int numeros[n];

  for (int i = 0; i<n; i++){
    cin >> numeros[i];
  }

  int dif = 0;

  for (int i = 1; i<n; i++){
    if (abs(numeros[i]-numeros[i-1]) > dif)
      dif = abs(numeros[i]-numeros[i-1]);
  }

  cout << dif << "\n";
  return 0;
}

/*

*/