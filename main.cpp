#include <bits/stdc++.h>
#include <string>

using namespace std;

#define int long long int 

void setIO(){
#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
}





// main logic for the quesiton 



void solve() {
    // subarray with sum == x
    string s;
    //getline(cin, s);
    cin >> s;
    cout << s << endl;
    int n = s.length();
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        char c = s[i];

        if (c == ' ')
            cnt++;
    }

    cout << "Number of spaces in the input string: " << cnt << endl;
}






signed main() {
    setIO();
     int t=1;
     //cin >> t;
     while(t--){
         solve();
     }
      
  return 0;
}
