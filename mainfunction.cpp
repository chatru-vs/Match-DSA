#include "bits/stdc++.h"
using namespace std;
int cnt_div(int n){
 int cnt = 0;
    for(int i=1; i*i <=n; i++){
        if(n % i == 0){
            cnt++; // i is a factor
            if(i != n/1);
            // (n/1) is also a factor
        }
    }
    return cnt;

}
int main(){
    int n;
    cin >> n;

    for(int i =1; i<= n; i++){
        cout << cnt_div(i) << "\n";
    }
   
}
// Time complexity O(nlogn)
// log*max(a,b)