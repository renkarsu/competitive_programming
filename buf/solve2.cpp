/*cum imos meguru*/

/*Cumulative sum*/
/*
int N; cin >> N; // 配列サイズ
vector<int> a(N);
for (int i = 0; i < N; ++i) cin >> a[i]; // a の入力

// 累積和
vector<int> s(N+1, 0); // s[0] = 0 になる
for (int i = 0; i < N; ++i) s[i+1] = s[i] + a[i];

// 区間 [left, right) の総和を求める
int left, right;
cin >> left >> right;
cout << s[right] - s[left] << endl;
*/

/*one-dim imos law*/
/*
//出入口でのみカウントする
for (int i = 0; i < T; i++) table[i] = 0;
for (int i = 0; i < C; i++) {
  table[S[i]]++;  // 入店処理: カウントを 1 増やす
  table[E[i]]--;  // 出店処理: カウントを 1 減らす
}
// シミュレート
for (int i = 0; i < T; i++) {
  if (0 < i) table[i] += table[i - 1];
}
// 最大値を調べる
M = 0;
for (int i = 0; i < T; i++) {
  if (M < table[i]) M = table[i];
}
 */

/*two-dim imos law */
/*
for (int y = 0; y < H; y++) {
  for (int x = 0; x < W; x++) {
    tiles[y][x] = 0;
  }
}
// 重みの加算 (図 3)
for (int i = 0; i < N; i++) {
  tiles[C[i]][A[i]]++;
  tiles[C[i]][B[i]]--;
  tiles[D[i]][A[i]]--;
  tiles[D[i]][B[i]]++;
}
// 横方向への累積和 (図 4, 5)
for (int y = 0; y < H; y++) {
  for (int x = 1; x < W; x++) {
    tiles[y][x] += tiles[y][x - 1];
  }
}
// 縦方向の累積和 (図 6, 7)
for (int y = 1; y < H; y++) {
  for (int x = 0; x < W; x++) {
    tiles[y][x] += tiles[y - 1][x];
  }
}
// 最大値を調べる
int tile_max = 0;
for (int y = 0; y < H; y++) {
  for (int x = 0; x < W; x++) {
    if (tile_max < tiles[y][x]) {
      tile_max = tiles[y][x];
    }
  }
}

 */



/*meguru search*/
/*
// index が条件を満たすかどうか
bool isOK(int index, int key) {
    if (a[index] >= key) return true;
    else return false;
}

// 汎用的な二分探索のテンプレ
int binary_search(int key) {
    int ng = -1; //「index = 0」が条件を満たすこともあるので、初期値は -1
    int ok = (int)a.size(); // 「index = a.size()-1」が条件を満たさないこともあるので、初期値は a.size()

    // ok と ng のどちらが大きいかわからないことを考慮
    while (abs(ok - ng) > 1) {
        int mid = (ok + ng) / 2;

        if (isOK(mid, key)) ok = mid;
        else ng = mid;
    }
    return ok;
}
*/
/*another meguru
    int n; cin>>n;
    vector<int> v(n);
    for(int i = 0; i < n; ++i) cin>>v[i];
    int m;
    cin>>m;
    int ans=0;
    for(int i = 0; i < m; ++i){
        int t;
        cin>>t;
        int ok=n;
        int ng=-1;
        int mid;
        while(ok-ng>1){
            mid=(ok+ng)/2;
            if(v[mid]>t)ok=mid;
            else ng=mid;
        }
        if(v[ng]==t)ans++;
    }
    cout<<ans<<endl;

 */

/*
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int cnt{};
    int n;cin >> n;
    vector<int> s(n);
    for(int i = 0, i_len = (int)n; i < i_len; ++i) cin >> s[i];
    
    int q;cin>>q;
    for(int i = 0; i < q; ++i){
        int t; cin >> t;
        int ng = -1, ok = n;
        while(abs(ok-ng)>1){
            int mid = (ok+ng)/2;
            if(s[mid] == t){//左が条件を満たさないとしているのでng=midだからs[ng]も可能
                ++cnt;
                break;
            }
            else if(s[mid] > t){
                ok = mid;
            }
            else{
                ng = mid;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
 */