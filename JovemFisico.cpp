#include<bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  int numeros[n][3];

  for (int i = 0; i<n; i++){
    cin >> numeros[i][0] >> numeros[i][1] >> numeros[i][2];
  }

  int x = 0;
  int y = 0;
  int z = 0;

  for (int i = 0; i<n; i++){
    x += numeros[i][0];
    y += numeros[i][1];
    z += numeros[i][2];
  }

  if (x == 0 && y == 0 && z == 0){
    cout << "YES" << "\n";
  }else{
    cout << "NO" << "\n";
  }

  return 0;
}

/*

*/