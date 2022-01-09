/*https://www.codechef.com/problems/ANDORUNI*/

#include <bits/stdc++.h>
 
//#include <iostream>
//#include <cmath>
//#include <string>
 
using namespace std;
 
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ll long long
 
int main()
{
 fast_cin();
 ll t;
 cin >> t;
 while(t--){
     ll n;
     cin >> n;
     ll arr[n];
     for (int i = 0; i < n;i++){
         cin >> arr[i];
     }
    ll count=0,res=0;
    for (ll i = 0; i < 32;i++){
        count = 0;
        for (ll j = 0; j < n;j++){
            if(count>=2) {
                //res += 1LL<<i;
                break;
            }
            if(arr[j]&(1LL<<i)){
                count++;
            }
        }
        
         if(count>=2) {
                res += 1LL<<i;
                //break;
            }
    }
    cout << res << endl;
 }
 return 0;
}