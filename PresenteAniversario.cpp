//INCOMPLETE

#include<bits/stdc++.h>

using namespace std;

int main(){
  int t, num, listNum, res = 0;
  cin >> t;
  vector<pair<vector<int >, int>> presente(t);

  for(int i=0; i<t; i++){
    cin >> num;
    presente[i].second = num;
    for(int j=0; j<num; j++){
      cin >> listNum;
      presente[i].first.push_back(listNum);
      for(int k=j; k>0; k--){
        /* if(k>0 && (presente[i].first & presente[i-1].first >= presente[i].first ^ presente[i-1].first)){
          res++;
        } */
        if(k>0)
          cout << "o presente.first é " << presente[i].first[j] << " e o anterior é " <<  presente[i].first[k] << endl;
      } 
    }
  }

  for(int i=0; i<t; i++){
    cout << presente[i].second << endl;
    for(int j=0; j<presente[i].second; j++){
      cout << presente[i].first[j] << " ";
    }
    cout << "\n";
  }

  return 0;
}
