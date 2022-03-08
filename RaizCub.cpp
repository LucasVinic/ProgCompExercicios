//imcompleta
#include<bits/stdc++.h>

using namespace std;

int main(){
  long long int n, res = 0;
  cin >> n;

  res = cbrt(n);
  if(res*res*res == n){
    cout << res << endl;
  }else{
    cout << "-1" << endl;
  }


  return 0;
}
