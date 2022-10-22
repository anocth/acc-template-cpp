#include <bits/stdc++.h>
using namespace std;

/* Boost C++ Library
#include <boost/format.hpp>
using boost::format;
//*/

// cin cout の結びつけ解除, stdioと同期しない(入出力非同期化)
// cとstdの入出力を混在させるとバグるので注意
struct Fast {Fast() {std::cin.tie(0); ios::sync_with_stdio(false);}} fast;

/* typedef */
using ui = unsigned int;
using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;
using vll = vector<ll>;
using vvll = vector<vll>;
using vvvll = vector<vvll>;
using vb = vector<bool>;
using vvb = vector<vb>;
using vs = vector<string>;
using pii = pair<int, int>;
using pcc = pair<char, char>;
using pic = pair<int, char>;
using pci = pair<char, int>;

/* short hand */
#define PB push_back
#define MP make_pair
#define FST first
#define SEC second

/* loop */
#define REPS(i, a, b) for(ll i=(a), i##_len=(b); i<i##_len; ++i)
#define REP(i, n) REPS(i, 0, (n))
#define REP1(i, n) REPS(i, 1, (n)+1)
#define DEPS(i, a, b) for(ll i=(a), i##_len=(b); i>i##_len; --i)
#define DEP(i, n) DEPS(i, (n)-1, -1)
#define DEP1(i, n) DEPS(i, (n), 0)
#define EACH(i, n) for(auto&& i : (n))

/* macro func */
#define ALL(a) (a).begin(),(a).end()
#define LLA(a) (a).rbegin(),(a).rend()
#define SZ(x) ((ll)(x).size())
#define UNIQUE(v) (v).erase(unique(ALL(v)),(v).end())

/* func */
template <typename T> inline void print(const vector<T>& v, string s = " ")
    { const ll sz = v.size(); REP(i, sz) cout << v[i] << (i != sz - 1 ? s : "\n"); }
template <typename T, typename S> inline void print(const pair<T, S>& p) { cout << p.FST << ' ' << p.SEC << endl; }
template <typename T> inline void print(const T& x) { cout << x << '\n'; }
template <typename T, typename S> inline void print(const vector<pair<T, S>>& v) { EACH(p, v) print(p); }
template <typename T, typename S> inline void print(const map<T, S>& m) { EACH(p, m) print(p); }
template <typename T> inline bool chmin(T& a, const T& b) { bool cmp = a > b; if (a > b) a = b; return cmp; }
template <typename T> inline bool chmax(T& a, const T& b) { bool cmp = a < b; if (a < b) a = b; return cmp; }

int main() {
    ll N;
    cin >> N;
}
