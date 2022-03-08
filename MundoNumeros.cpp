#include<bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  int middle = n/2;
  int numeros[n];

  for (int i = 0; i<n; i++){
    cin >> numeros[i];
  }

  sort(numeros, numeros+n);

  int xdist = 0;
  int ydist = 0;

  for (int i=0; i<n; i++){
    if(i >= middle){
      xdist += numeros[i];
    }else{
      ydist += numeros[i];
    }
  }

  if (n == 1){
    cout << numeros[0] << "\n";
  }else{
    cout << xdist*xdist + ydist*ydist << "\n";
  }
  return 0;
}

/*
 1   2   3   
[0] [1] [2] [4] [5]

 1   1   2   2
[0] [1] [2] [3]
*/