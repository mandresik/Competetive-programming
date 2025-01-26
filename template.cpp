#include <bits/stdc++.h>
using namespace std;
 
#define ff first 
#define ss second
#define pii pair<int, int>
#define pci pair<char, int>
#define int long long
#define ull unsigned long long
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define nl '\n'
 
#define mat(type, name, r, c) vector<vector<type>> name(r, vector<type>(c))
 
void prt(bool yes) { cout << (yes ? "YES\n" : "NO\n"); }
template <typename T> void in(vector<T> &a) { for(int &x: a) cin >> x; }
template <typename T, typename U> void in(vector<pair<T, U>> &a) { for(pair<T, U> &p : a) cin >> p.first >> p.second; }
template <typename T> void in(vector<vector<T>> &a) { for(vector<T> &v : a) for(T &x : v) cin >> x; }
template <typename T> void out(vector<T> a) { for(T x : a) cout << x << ' '; cout << '\n'; }
template <typename T, typename U> void out(vector<pair<T, U>> a) { for(pair<T, U> p : a) cout << p.first << ' ' << p.second << '\n'; }
template <typename T> void out(vector<vector<T>> a) { for(vector<T> v : a) { for(T x : v) cout << x << ' '; cout << '\n'; } }
template <typename T> void out(set<T> s) { for(T x : s) cout << x << ' '; cout << '\n'; }
int gcd(int a, int b){ if (b == 0) return a; return gcd(b, a % b); }
int lcm(int a, int b){ return (a / gcd(a, b)) * b; }
int min_divisor(int n) { for(int x = 2; x <= ceill(sqrtl(n)); ++x) if(n % x == 0) return x; return n; }
int range_sum(int s, int e) { return ((e * (e + 1) - s * (s - 1)) / 2); }
 
 
 
void solve(){
    
}
 
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    // cout.precision(10); cout.setf(ios::fixed); 
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}