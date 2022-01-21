#include "bits/stdc++.h"
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> prime(n+1, 1);
    prime[1] =0;

    // O(n log(log(n))) ->very fast -> almost liner
   for(int i =2; i <=n; i++){
       if(!prime[i])continue;
        // do not iterate 2i, 3i, 4i
       for(int j =i *i; j<=n; j+=1){
           prime[j]=0;
       }
   }

   //prime[x] stores if x is prime or not
   
}