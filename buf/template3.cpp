#include <bits/stdc++.h>
using namespace std;

//#define int long long

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

/*template*/
template<class T>constexpr bool amax(T &a, const T &b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>constexpr bool amin(T &a, const T &b) { if (b < a) { a = b; return 1; } return 0; }

/* func */
constexpr int GCD(int a, int b){return b ? GCD(b, a%b) : a;}
constexpr int LCM(int a, int b){return a / GCD(a, b) * b;}

/*struct*/
struct aaa {
	aaa() {
		cin.tie(nullptr); ios::sync_with_stdio(false); cout << fixed << setprecision(20);
	};
}aaaaaaa;

/* const */
constexpr int INF = 1001001001;
constexpr int LINF = 1001001001001001001ll;//Don't use int64_t
constexpr int MOD = 1e9 + 7; //10^9
constexpr int EPS = 1e-9;
constexpr int dx[] = { 1, 1, 0, -1, -1, -1, 0, 1 }, dy[] = { 0, 1, 1, 1, 0, -1, -1, -1 };
//constexpr int dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};
//Counterclockwise from the 6o'clock direction
//Take the x-axis downward and the y-axis right


//g++ -std=c++14 -Wall --pedantic-errors -o template template.cpp
//g++ -std=c++14 -Wall --pedantic-errors template.cpp
//chcp 65001

/*global*/



signed main()
{

}