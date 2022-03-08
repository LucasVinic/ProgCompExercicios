#include <bits/stdc++.h>
using namespace std;
 
vector<int> splitDigits(int n) {
    vector<int> res;
    if (n == 0)
        res.push_back(0);
 
    while (n > 0) {
        res.push_back(n % 10);
        n /= 10;
    }
    reverse(res.begin(), res.end());
    return res;
}
 
int main() {
 
    int a, b;
    cin >> a >> b;
 
    vector< pair<int,int>> numeros;
    for (int i = a; i <= b; i++) {
        vector<int> separado = splitDigits(i);
 
        int contador = 0;
        for (int j = 0; j < separado.size(); j++) {
            //printf("lendo digito %d\n", separado[j]);
            switch (separado[j]) {
                case 0:
                case 6:
                case 9:
                    contador += 1;
                    break;
                case 8:
                    contador += 2;
                    break;
                default:
                    break;
            }
        }
        //printf("%d tem %d numeros\n", i, contador);
        numeros.push_back(make_pair(contador, i));
    }
 
    int numMax = -1, maxi;
    for (int i = 0; i < numeros.size(); i++) {
        if (numeros[i].first > numMax) {
            numMax = numeros[i].first;
            maxi = numeros[i].second;
        }
    }
    printf("%d \n", maxi);
    
    return 0;
}