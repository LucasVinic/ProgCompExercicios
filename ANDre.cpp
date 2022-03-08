#include<bits/stdc++.h>

using namespace std;

int main(){
  int t;
  cin >> t;
  vector<pair<int, int>> andre(t);

  for(int i=0; i<t; i++){
    cin >> andre[i].first;
    
    int logCheck = log2(andre[i].first);
    //cout << "logCheck é " << logCheck << endl;
    andre[i].second = pow(2, logCheck)-1;
    //cout << "o second é " << andre[i].second << endl;
  }

  for(int i=0; i<t; i++){
    cout << andre[i].second << "\n";
  }

  return 0;
}
