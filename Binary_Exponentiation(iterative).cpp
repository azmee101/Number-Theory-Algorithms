#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define NEED_FOR_SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

// time complexity O(log b)

int bin_pow(int a, int b, int m){

    int ans = 1;

    while(b > 0){

        if(b == 0) return ans;
        if(b % 2 == 1) ans = (ans * a) % m;
        a *= a;
        b/= 2;
    }
    return ans;
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
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}