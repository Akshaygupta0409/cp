#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using db = double;
using str = string;

using pi = pair<int, int>;
using pl = pair<ll, ll>;
using pd = pair<db, db>;

using vi = vector<int>;
using vb = vector<bool>;
using vl = vector<ll>;
using vd = vector<db>;
using vs = vector<str>;
using vpi = vector<pi>;
using vpl = vector<pl>;
using vpd = vector<pd>;

#define tcT template <class T
#define tcTU tcT, class U
tcT > using V = vector<T>;
tcT, size_t SZ > using AR = array<T, SZ>;
tcT > using PR = pair<T, T>;
// pairs
// #define mp make_pair
#define f first
#define s second
#define int long long int

// vectors
// size(x), rbegin(x), rend(x) need C++17
#define sz(x) int((x).size())
#define bg(x) begin(x)
#define all(x) bg(x), end(x)
#define rall(x) x.rbegin(), x.rend()
#define sor(x) sort(all(x))
#define rsz resize
#define ins insert
#define ft front()
#define bk back()
#define pb push_back
#define eb emplace_back
#define pf push_front
#define rtn return

#define lb lower_bound
#define ub upper_bound
#define nl cout << "\n"
/* Some Codes Skipped */

// loops
#define FOR(i, a, b) for (int(i) = (a); (i) < (b); ++(i))
#define REP(i, a) FOR(i, 0, a)
#define ROF(i, a, b) for (int(i) = (b)-1; (i) >= (a); --(i))
#define PER(i, a) ROF(i, 0, a)
#define rep(a) REP(_, a)
#define each(a, x) for (auto &a : x)

const int MOD = 1e9 + 7;
const int MX = 2e5 + 5;
const ll INF = 1e18;
const db PI = acos((db)-1);
const int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1}; // for every grid problem
tcT > bool ckmin(T &a, const T &b)
{
    return b < a ? a = b, 1 : 0;
} // set a = min(a,b)
tcT > bool ckmax(T &a, const T &b)
{
    return a < b ? a = b, 1 : 0;
}
tcT > void remDup(vector<T> &v)
{ // sort and remove duplicates
    sort(all(v));
    v.erase(unique(all(v)), end(v));
}
// Some Codes Skipped

void setIO()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int n, m;

vector<vector<int>> g;
vector<int> c;
vector<int> component;

bool is_present = false;

void dfs(int node)
{
    c[node] = 1;
    for (auto child : g[node])
    {
        if (is_present)
            return;

        else if (c[child] == 0)
        {
            dfs(child);
        }
        else
        {

            if (c[child] == 1)
            {
                is_present = true;
            }
        }
    }
    c[child] = 2;
    return;
}

void solve()
{
    cin >> n >> m;
    g.resize(n + 1);
    c.assign(n + 1, 0);
    component.resize(n + 1);
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        g[y].push_back(x);
        //g[x].push_back(y);
    }
    for (int i = 1; i <= n; i++)
    {
        if (c[i] == 0)
        {
            dfs(i);
        }
    }
   if(is_present){
        cout << "YES" << endl;
   }else{
       cout << "NO" << endl;
   }

    return;
}

signed main()
{
    setIO();
     int t; cin >> t;
  while(t--){
    solve();
       
  }
    return 0;
}