//incompleto

#include<bits/stdc++.h>

using namespace std;

int main(){
  string c;
  stack<char> seq;
  vector< int> totalForm;
  int formNum = 0, maxFom = 0, isAnyR = 0;
  cin >> c;

/*   for(char i : c){
    if(i == 'r'){
      seq.push(i);
      totalForm.push_back(isAnyR);
      isAnyR++;
      formNum = 0;
    }else if(i == '.' && isAnyR > 0){
      formNum++;
      totalForm[isAnyR] = formNum;
      seq.push(i);
    }else if(i == 's' && isAnyR > 0){
      isAnyR--;
      totalForm[isAnyR] = 0;
      seq.pop();
      formNum = 0;
    }
     cout << "atual é " << i << " isany é " << isAnyR << " formnum é " << formNum  << " e totalform[isany] é " << totalForm[isAnyR]  << " e is any é " << isAnyR << endl;
  } */

/*   for(int i = 0; i < totalForm.size(); i++){
    cout << "valor do " << i << " é " << totalForm[i] << endl;
    maxFom += totalForm[i];
  } */

  for(char i : c){
    seq.push(i);
  }

  int s = seq.size();

  for (int i = 0; i < s; i++){
    char c = seq.top();
    cout << c;
    if(c == 's'){
      while(seq.top() != 'r' || seq.size() == 0){
        seq.pop();
      };
    }else if( c == 'r'){
      seq.pop();
      cout << "entrou";
      while(seq.top() != '.'){
        formNum++;
        seq.pop();
      };
    }
  }

  cout << formNum << "\n";
  return 0;
}

// erro: sr.sr