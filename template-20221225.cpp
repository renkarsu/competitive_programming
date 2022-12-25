/*
左はコンパイルオプションの場合，右はマクロで指定する場合
-D_FORTIFY_SOURCE=2 or #define _FORTIFY_SOURCE 2
-D_GLIBCXX_DEBUG or #define _GLIBCXX_DEBUG
*/

#include <bits/stdc++.h>
using namespace std;

/* #pragma */
// #pragma GCC optimize("Ofast")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

// $ g++ -std=c++14 -D_DEBUG -o a a.cpp
// のように_DEBUGマクロをコンパイル時に定義するが，オンラインジャッジでは定義されないので
// デバッグ時マクロとなる．
// debug methods
// usage: debug(x,y);
#define CHOOSE(a) CHOOSE2 a
#define CHOOSE2(a0, a1, a2, a3, a4, x, ...) x
#define debug_1(x1) cout << #x1 << ": " << x1 << endl
#define debug_2(x1, x2) \
  cout << #x1 << ": " << x1 << ", " #x2 << ": " << x2 << endl
#define debug_3(x1, x2, x3)                                               \
  cout << #x1 << ": " << x1 << ", " #x2 << ": " << x2 << ", " #x3 << ": " \
       << x3 << endl
#define debug_4(x1, x2, x3, x4)                                           \
  cout << #x1 << ": " << x1 << ", " #x2 << ": " << x2 << ", " #x3 << ": " \
       << x3 << ", " #x4 << ": " << x4 << endl
#define debug_5(x1, x2, x3, x4, x5)                                       \
  cout << #x1 << ": " << x1 << ", " #x2 << ": " << x2 << ", " #x3 << ": " \
       << x3 << ", " #x4 << ": " << x4 << ", " #x5 << ": " << x5 << endl
#ifdef _DEBUG
#define debug(...)                                                      \
  CHOOSE((__VA_ARGS__, debug_5, debug_4, debug_3, debug_2, debug_1, ~)) \
  (__VA_ARGS__)
#else
#define debug(...)
#endif

/* REPmacro */
// #define REP(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
// #define REPR(i, n) for (int i = ((int)(n)-1); i >= 0; --i)
// #define FOR(i, m, n) for (int i = (int)(m); i < (int)(n); ++i)

/*alias*/
// #define ALL(x) (x).begin(), (x).end()
// #define SZ(x) ((size_type)(x).size())
// #define PB push_back
// #define EB emplace_back
// #define MP make_pair

#define F first
#define S second

#define y0 y3487465
#define y1 y8687969
#define j0 j1347829
#define j1 j234892
#define next asdnext
#define prev asdprev
#define itn int
// #define endl '\n'

/*using*/
// using ll = long long;
// using ull = unsigned long long;
// using unsi = unsigned;
// using vi = vector<int>;
// using vvi = vector<vi>;
// using vvvi = vector<vvi>;
// using pii = pair<int, int>;
// using db = double;
// using plex = complex<double>;
// using vs = vector<string>;

/*struct*/
struct InitCppIo {
  InitCppIo() noexcept {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(20);
  };
} initCppIo;

/*template*/
template <class T>
constexpr bool amax(T &a, const T &b) {
  if (a < b) {
    a = b;
    return 1;
  }
  return 0;
}
template <class T>
constexpr bool amin(T &a, const T &b) {
  if (b < a) {
    a = b;
    return 1;
  }
  return 0;
}

/* func */
constexpr int32_t GCD(int32_t a, int32_t b) { return b ? GCD(b, a % b) : a; }
constexpr int64_t GCD(int64_t a, int64_t b) { return b ? GCD(b, a % b) : a; }
constexpr int32_t LCM(int32_t a, int32_t b) { return a / GCD(a, b) * b; }
constexpr int64_t LCM(int64_t a, int64_t b) { return a / GCD(a, b) * b; }

/* const */
// GCDとかLCMみたいに明示的にint32_tなのかが大事な時に今の型で大丈夫なのか確認する
constexpr int32_t INF = 1001001001;
constexpr int64_t LINF = 1001001001001001001ll;
constexpr int32_t MOD = 1e9 + 7;
constexpr double EPS = 1e-9;
constexpr int32_t dx[] = {1, 1, 0, -1, -1, -1, 0, 1},
                  dy[] = {0, 1, 1, 1, 0, -1, -1, -1};
// constexpr int32_t dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};
// Counterclockwise from the 6o'clock direction
// Take the x-axis downward and the y-axis right

// g++ -std=c++14 -Wall --pedantic-errors -o template template.cpp
// g++ -std=c++14 -Wall --pedantic-errors template.cpp
// chcp 65001

// #define int int64_t

/*global*/

signed main() {
  string s; cin >> s;
  for(int i = 0; i < s.size(); ++i){
    if(s.size()/2 == i || s.size() == 1){
      cout << s.at(i);
    }
  }

  return EXIT_SUCCESS;
}
