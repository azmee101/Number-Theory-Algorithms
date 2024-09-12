#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define NEED_FOR_SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


// complexity of binary exponentioation is O(log b)

int bin_pow(int a, int b, int m){

    if(b == 0){
        return 1;
    }

    if(b%2 == 0){
        int t = bin_pow(a, b/2, m);
        return (1ll * t * t % m);
    }
    else{
        int t = bin_pow(a, (b-1)/2, m);
        return (1ll * t * t * a % m);
    }
}

void solve(){
    
    int a, b, m;
    
    cin >> a >> b >> m;

    cout << bin_pow(a, b, m) << '\n';
    
    return;
}

int32_t main()
{
    NEED_FOR_SPEED;
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}