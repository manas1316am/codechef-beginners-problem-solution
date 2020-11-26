#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define vi vector<int>
#define scnarr(n) for(int i=0; i<n; i++)


int main(){
    fast
    ll t;
    cin >> t;
    while(t--){
        ll x,y;
        cin >> x >> y;
        
        ll moves = 0;
        if (x>y){
            ll diff = x-y;
            if(diff % 2 == 0){
                moves = 1;
            } else{
                moves = 2;
            }
        }

        else if(x < y){
            ll diff = y-x;
            if(diff%2)
                moves = 1;
            else if(diff%2==0 && (diff/2)%2)
                moves = 2;
            else
                moves = 3;
        }
        cout << moves << endl;
    }
    return 0;
}
