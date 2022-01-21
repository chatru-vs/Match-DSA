#include "bits/stdc++.h"
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> div(n+1);
    for(int i =1; i<= n; i++){
        for(int j =i; j<=n; j+=i){
            div[j]++; //i is a divisor of j
        }
       
    }
    for(int i=1; i<=n; i++){
        cout << div[i] << "\n";
    }
   
}