#include "bits/stdc++.h"
using namespace std;
//Time compexity log*max(a,b)
// __GCD does the same thin in c++
int gcd(int a, int b){
    if(a==0){
        return b;
    }
    return gcd(b%a, a);
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << gcd(a,b);
}