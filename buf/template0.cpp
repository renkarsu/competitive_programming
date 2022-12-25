#include <bits/stdc++.h>
using namespace std;

/* #pragma */
/*
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
*/

/* REPmacro */
#define REP(i,n) for(int i=0,i##_len=(n);i<i##_len;++i)
#define REPR(i,n) for(int i=((int)(n)-1);i>=0;--i)
#define FOR(i,m,n) for(int i=(int)(m);i<(int)(n);++i)

/*alias*/
#define ALL(x) (x).begin(),(x).end()
#define SZ(x) ((size_type)(x).size())
#define F first
#define S second
#define PB push_back
#define EB emplace_back
#define MP make_pair 

#define y0 y3487465
#define y1 y8687969
#define j0 j1347829
#define j1 j234892
#define next asdnext
#define prev asdprev
#define itn int

/*using*/
using ll = long long;
using ull = unsigned long long;
using unsi = unsigned;
using vi = vector<int>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;
using pii = pair<int, int>;
using db = double;
using plex = complex<double>;
using vs = vector<string>;

/*template*/
template<class T>inline bool amax(T &a, const T &b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>inline bool amin(T &a, const T &b) { if (b < a) { a = b; return 1; } return 0; }

/* func */

/*struct*/
struct aaa {
	aaa() {
		cin.tie(nullptr); ios::sync_with_stdio(false); cout << fixed << setprecision(20);
	};
}aaaaaaa;

/* const */
const int INF = 1001001001;
const ll LINF = 1001001001001001001ll;
const int MOD = 1e9 + 7; //10^9
const db EPS = 1e-9;
const int dx[] = { 1, 1, 0, -1, -1, -1, 0, 1 }, dy[] = { 0, 1, 1, 1, 0, -1, -1, -1 };
//Counterclockwise from the 6o'clock direction
//Take the x-axis downward and the y-axis right

//#define int ll
//#define int long long

//g++ -std=c++17 -Wall --pedantic-errors -o 出力ファイル名 入力ファイル名
//g++ -std=c++14 -Wall --pedantic-errors -fsanitize=signed-integer-overflow -fno-sanitize-recover=all -o template template.cpp
//g++ -std=c++14 -Wall --pedantic-errors -o template template.cpp
//chcp 65001

signed main()
{
    cout << "こんにちは" << endl;
  cout << "AtCoder" << endl;

int a;cin >> a; cout << a;
int b; b = 1e8;
cout << b*b;

  return 0;
}