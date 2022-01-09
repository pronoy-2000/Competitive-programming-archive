//https://www.codechef.com/problems/CHEFWM

#include <bits/stdc++.h>
 
//#include <iostream>
//#include <cmath>
//#include <string>
 
using namespace std;
 
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ll long long
 
ll primeFactors(ll n){
    ll cnt = 0;
    for (ll i = 2; i * i <= n;i++){
        if(n%i==0){
            cnt++;
            while(n%i==0)
            n /= i;
        }
    }
    if(n>1)
        cnt++;
        return cnt;
}

bool isPrime(ll n){
    for (ll i = 2; i * i <= n;i++){
        if(n%i==0)
            return false;
    }
    return true;
}

int main()
{
 fast_cin();
 ll t;
 cin >> t;
 while(t--){
     ll n, m,res=1;
     //bool flag = false;
     cin >> n >> m;
     if(m==1){
         cout << "0" << endl;
         continue;
     }
         else if(n==1 || isPrime(n) || isPrime(m)){
             cout << "1" << endl;
             continue;
         }else{
              ll cnt = primeFactors(m);
             for (ll i = 2; i <= cnt;i++){
                 if(n%i==0){
                     res = max(res,i);
                     //flag = true;
                 }
             }
         cout << res << endl;
         }
 }
 return 0;
}
