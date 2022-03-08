#include<bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  char pedra[n];
  int dif = 0;

  for (int i = 0; i<n; i++){
    cin >> pedra[i];
  }

  for (int i = 1; i<n; i++){
    if(pedra[i] == pedra[i-1])
      dif++;
  }

  cout << dif << "\n";

  return 0;
}

/*
GCD(6, 4) + LCM(6, 4) = 2+12=14
gcd(a, b) + lcm(a, b) = x

gcd(10, 4) + lcm(10, 4) = 2 + 20 = 22
*/


/* #include<bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  char pedra[n];

  for (int i = 0; i<n; i++){
    cin >> pedra[i];
  }

  int r = 0;
  int g = 0;
  int b = 0;

  for (int i = 0; i<n; i++){
    if(pedra[i] == 'R'){
      r++;
    }else if(pedra[i] == 'G'){
      g++;
    }else if(pedra[i] == 'B'){
      b++;  
    }
  }

  cout << "r é " << r << " g é " << g << " e b é " << b << "\n";

  int biggest = max(max(r, g), max(g, b));
  int twosum = 0;

  if(biggest == r){
    twosum == g+b;
  }else if(biggest == g){
    twosum == r+b;
  }else if(biggest == b){
    twosum = r+g;
  }
  cout << "twosum é " << twosum << " e biggest é " << biggest << "\n";

  if(twosum+1 >= biggest){
    cout << "0\n";
  }else{
    cout << abs(twosum+1 - biggest)  << "\n";
  }

  return 0;
}

/*
GCD(6, 4) + LCM(6, 4) = 2+12=14
gcd(a, b) + lcm(a, b) = x

gcd(10, 4) + lcm(10, 4) = 2 + 20 = 22


7r
3b
3v

R B R V R B R V R B R V R
*/
