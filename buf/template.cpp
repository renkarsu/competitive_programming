#include <bits/stdc++.h>
using namespace std;

/* #pragma */
//#pragma GCC optimize("Ofast")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

/*alias*/
#define F first
#define S second

#define y0 y3487465
#define y1 y8687969
#define j0 j1347829
#define j1 j234892
#define next asdnext
#define prev asdprev
#define itn int
#define endl '\n'

/*struct*/
struct aaa {
	aaa() {
		cin.tie(nullptr); ios::sync_with_stdio(false); cout << fixed << setprecision(20);
	};
}aaaaaaa;

/*template*/
template<class T>constexpr bool amax(T &a, const T &b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>constexpr bool amin(T &a, const T &b) { if (b < a) { a = b; return 1; } return 0; }

/* func */
constexpr int32_t GCD(int32_t a, int32_t b){return b ? GCD(b, a%b) : a;}
constexpr int64_t GCD(int64_t a, int64_t b){return b ? GCD(b, a%b) : a;}
constexpr int32_t LCM(int32_t a, int32_t b){return a / GCD(a, b) * b;}
constexpr int64_t LCM(int64_t a, int64_t b){return a / GCD(a, b) * b;}

/* const */
constexpr int32_t INF = 1001001001;
constexpr int64_t LINF = 1001001001001001001ll;
constexpr int32_t MOD = 1e9 + 7;
constexpr int32_t EPS = 1e-9;
constexpr int32_t dx[] = { 1, 1, 0, -1, -1, -1, 0, 1 }, dy[] = { 0, 1, 1, 1, 0, -1, -1, -1 };
//constexpr int32_t dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};


//g++ -std=c++14 -Wall --pedantic-errors -o template template.cpp
//g++ -std=c++14 -Wall --pedantic-errors template.cpp
//chcp 65001

//#define int int64_t

/*global*/



signed main()
{
	
}