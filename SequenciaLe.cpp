#include<bits/stdc++.h>

using namespace std;

long long int checkString(long long int str, int n){
  string s = to_string(str);
  if(n == 2){
    return str;
  }
  cout << " tentativa n = " << n << endl;
  int counter = 1;
  string newString = "";

  for (int i = 1; i < s.size(); i++){ // 111 3 213211

    if(s[i] == s[i-1] && i < s.size()-1){ // o atual é igual ao anterior, mas não é o fim da string
      counter++;
    }else if(s[i] == s[i-1] && i == s.size()-1){ // o atual é igual ao anterior, e é o fim da string
      counter++;
      string concat = to_string(counter);
      newString = newString+concat+s[i-1];
    }else if(s[i] != s[i-1] && i < s.size()-1){ // o atual é diferente ao anterior, mas não é o fim da string
      string concat = to_string(counter);
      newString = newString+concat+s[i-1];
      counter = 1;      
    }else if(s[i] != s[i-1] && i == s.size()-1){ // o atual é diferente ao anterior, e é o fim da string
      string concat = to_string(counter);
      newString = newString+concat+s[i-1]+"1"+s[i];
    }
    cout << newString << endl;
  }
  long long int ret = stoi(newString);
  return (checkString(ret, n-1));
}

int main(){
  int n , res;
  cin >> n;

  if(n == 1){
    cout << "1" << "\n";
  }else if(n > 1){
    res = checkString(11, n);
    cout << res << "\n";
  }


  return 0;
}
