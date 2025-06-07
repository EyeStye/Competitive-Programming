#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pi = pair<int,int>;
using pl = pair<ll,ll>;
using vi = vector<int>;
using vl = vector<ll>;
//Credits: maspy, https://trap.jp/post/1224/
#define FOR1(a) for (ll _ = 0; _ < ll(a); ++_)
#define FOR2(i, a) for (ll i = 0; i < ll(a); ++i)
#define FOR3(i, a, b) for (ll i = a; i < ll(b); ++i)
#define FOR4(i, a, b, c) for (ll i = a; i < ll(b); i += (c))
#define overload4(a, b, c, d, e, ...) e
#define rep(...) overload4(__VA_ARGS__, FOR4, FOR3, FOR2, FOR1)(__VA_ARGS__)
template<class... T>
void input(T&... a){
    (cin >> ... >> a);
}
#define INT(...) int __VA_ARGS__; input(__VA_ARGS__)
#define LL(...) ll __VA_ARGS__; input(__VA_ARGS__)
#define CHAR(...) char __VA_ARGS__; input(__VA_ARGS__)
#define STR(...) string __VA_ARGS__; input(__VA_ARGS__)

#define eb emplace_back
#define len(x) (ll)(x.size())
#define all(x) (x).begin(), (x).end()
#define MIN(v) *min_element(all(v))
#define MAX(v) *max_element(all(v))
#define UNIQUE(x) sort(all(x)), x.erase(unique(all(x)), x.end()), x.shrink_to_fit()

void YES(bool t = 1) { cout<<(t ? "YES" : "NO")<<'\n'; }
void NO(bool t = 1) { YES(!t); }
void Yes(bool t = 1) { cout<<(t ? "Yes" : "No")<<'\n'; }
void No(bool t = 1) { Yes(!t); }
void yes(bool t = 1) { cout<<(t ? "yes" : "no")<<'\n'; }
void no(bool t = 1) { yes(!t); }
#define VEC(type, name, size)          \
    vector<type> name(size);           \
    for (int i = 0; i < size; ++i) {   \
        cin >> name[i];                \
    }
template <typename T>
void print_(T value) {
    cout << value << " ";
}
template <typename T>
void print_(const vector<T>& vec) {
    for (const auto& el : vec) {
        cout << el << " ";
    }
}
void print_() {
    cout << '\n';
}
template <typename T, typename... Args>
void print_(T value, Args... args) {
    cout << value << " ";
    print_(args...);
}
template <typename... Args>
void print(Args... args) {
    print_(args...); 
    cout << '\n';  
}
template <typename T>
T floor(T a, T b) {
  return a / b - (a % b && (a ^ b) < 0);
}
template <typename T>
T ceil(T x, T y) {
  return floor(x + y - 1, y);
}
template <class T, class S>
inline bool chmax(T &a, const S &b) {
  return (a < b ? a = b, 1 : 0);
}
template <class T, class S>
inline bool chmin(T &a, const S &b) {
  return (a > b ? a = b, 1 : 0);
}
template <typename T, typename U>
vector<T> cumsum(vector<U> &A, int off = 1) {
  int N = A.size();
  vector<T> B(N + 1);
  rep(i, N) { B[i + 1] = B[i] + A[i]; }
  if (off == 0) B.erase(B.begin());
  return B;
}

void solve(){
  INT(n);
  int d[4] = {6,8,4,2};
  print(n ? d[n%4] : 1);
}
int main(){
  // INT(t);
  int t = 1;
  rep(t) solve();
  return 0;
}