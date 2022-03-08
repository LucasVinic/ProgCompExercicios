#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void check(long int entra1, long int sai1, long int entra2, long int sai2){
  sai1    = sai1*entra2;
  sai2    = sai2*entra1;
  if(sai1 > sai2){
    printf("Promocao\n");
  }else{
    printf("Enganacao\n");
  }
}

int main(){
  long int entra1, sai1;
  long int entra2, sai2;

  cin >> entra1 >> sai1;
  cin >> entra2 >> sai2;

  check(entra1, sai1, entra2, sai2);
  return 0;
}


/*
1 4   -> 3 12
3 10  -> 3 10

2 3   -> 6 9
3 5   -> 6 10
*/