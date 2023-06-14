#include<bits/stdc++.h>
using namespace std;

#define int long long int 

const int mxn=2e5+1;

int node , edges;
vector<int> g[mxn];


void solve(){
    cin >> node >> edges;;
    for(int i = 0; i <edges; i++){
        int x , y; cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);

    }

    return;

}



signed main(){
    solve();
    return 0;
}