#include<bits/stdc++.h>

using namespace std;

int main(){
  int n, m, check;
  int max = 0, prevNum = 0;
  cin >> n >> m;
  int maxInd = n+m;
  vector<pair<int, int>> moeda(maxInd);

  for(int i = 0; i<n; i++){
    moeda[i].first = i+1; // categoria de moeda
    moeda[i].second = 0;  // total de dinheiro da moedaa
  }

  for(int i = 0; i<m; i++){
    cin >> check;
    moeda[check].second += check;
    /* cout << "no caso " << i << " o acumulado é " << moeda[check].second << " no moeda[ " << moeda[check].first << "] " << endl;  */
  }

  for(int i = 1; i<=n; i++){
    if(moeda[i].second >= max){
      prevNum = moeda[i-1].first;
      max = moeda[i].second;
      /* cout << "o max atual é " << max << endl; */
    }
  }

  printf("%d %d\n", max, prevNum);

  return 0;
}
