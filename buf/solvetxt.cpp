/*dp memo rec dfs bfs */

/*dp
1.DP 配列全体を「DP の種類に応じた初期値」で初期化 vector<int> dp(n+1, 0);
2.初期条件を入力 dp[0], dp[1]
3.ループを回す for(int i = 2; i <= n; ++i) || for (int i = 1; i < n; ++i)
chmin(dp[to], dp[from] + (矢印の重み));
4.テーブルから解を得て出力 cout << dp[n]; || dp[n-1];(i < nのとき)

min → INF
max → -INF || -1(dp>0)
path → 0
yes/no → false
*/

/*back dp
dp(n+2); // !dp(n+1)
dp[n] = 1; // nは最後のとこ、1は色々考えられるけど今回は1通りって意味
for(int i = n-1; i >= 0; --i)
dp[i] = dp[i+1] + dp[i+2]
 */

/*memo recursive
int rec(int i) {     //vector　でmainのとき int rec(int i, vector<int> &dp, vector<int> &h){
    // DP の値が更新されていたらそのままリターン
    if (dp[i] < INF) return dp[i];

    // 足場 0 のコストは 0
    if (i == 0) return 0;

    // i-1, i-2 それぞれ試す
    int res = INF;
    chmin(res, rec(i-1) + abs(h[i] - h[i - 1])); // 足場 i-1 から来た場合
    if (i > 1) chmin(res, rec(i-2) + abs(h[i] - h[i - 2])); // 足場 i-2 から来た場合

    // 結果をメモしながら、返す
    return dp[i] = res;
}

 */

/*recursive dfs
void dfs(int x, int y){
//範囲外はすぐreturn    
	if(y < 0 || w <= y || x < 0 || h <= x || maze[y][x] == '#') return;
//見たことあるか
	if(reached[y][x]) return;
	reached[y][x] = true;

//check the 4 ways, but find the new way, immediatry go this way.
//find not experienced way, go there and check around
//全方向dfsを書く
	dfs(x+1, y);
	dfs(x-1, y);
	dfs(x, y+1);
	dfs(x, y-1);
}
 */

/*dfs
seen:= グラフの各ノードについて、そのノードが訪問済みかどうかを表す配列
to_visit := これから訪問するノードの集合を表すスタックやキュー

seen をすべて false に初期化する
seen[v0] = true // 初期位置は勿論見たことになる
to_visit_stack.push(v0) // 初期位置をキューかスタックにpush
while (to_visit が空でない) {
  cur_v = to_visit_stack.front()//どこから四方向見るか作成
  to_visit_stack.pop()
  for (next_v : (cur_v から行くことのできるノード集合)// 四方向とか) {
    // next_v が訪問済みならスルーして、未訪問なら to_visit に追加
    if (!seen[next_v]) {
      seen[next_v] = true
      to_visit.push(next_v)
    }
  }
} 
 */

/*bfs
tuple<> t(座標とか)// これが探索先の配列vのindex
queueの初期設定　queue<tuple> q.push(与えられた座標とか)//これから訪問するノードの集合を表すキュー
座標は基本的に0-indexed --sx;--gx;
while(!q.empty){
    now = q.front; q.pop();先頭を見てすぐ捨てる
    x = q.f; y = q.s; 座標を1次元に分解してそれぞれをいじれるようにする(nextx=x+dx的な)
    for(四方向とか)//for文で範囲内を探索、探索したとこは探索済みにする{
        next = x+dx

        見てない、またはいけるならq.pushして
        v[next] = '行った'; みたいにして二回探索を防ぐ
    }
}
 */
/*
    // 縦と横の長さ
    int height, width;
    cin >> height >> width;

    // 盤面
    vector<string> field(height);
    for (int h = 0; h < height; ++h) cin >> field[h];

    // スタート地点とゴール地点 
    int sx, sy, gx, gy;
    for (int h = 0; h < height; ++h) {
        for (int w = 0; w < width; ++w) {
            if (field[h][w] == 'S') {
                sx = h;
                sy = w;
            }
            if (field[h][w] == 'G') {
                gx = h;
                gy = w;
            }
        }
    }


    ////////////////////////////////////////
    // 幅優先探索の初期設定
    ////////////////////////////////////////

    // 各セルの最短距離 (訪れていないところは -1 としておく)
    vector<vector<int> > dist(height, vector<int>(width, -1)); 
    dist[sx][sy] = 0; // スタートを 0 に

    // 探索中に各マスはどのマスから来たのかを表す配列 (最短経路長を知るだけなら、これは不要)
    vector<vector<int> > prev_x(height, vector<int>(width, -1));
    vector<vector<int> > prev_y(height, vector<int>(width, -1));

    // 「一度見た頂点」のうち「まだ訪れていない頂点」を表すキュー
    queue<pair<int, int> > que; 
    que.push(make_pair(sx, sy)); // スタートを push


    ////////////////////////////////////////
    // 幅優先探索を実施
    ////////////////////////////////////////    

    // キューが空になるまで
    while (!que.empty()) {
        pair<int, int> current_pos = que.front(); // キューの先頭を見る (C++ ではこれをしても pop しない)
        int x = current_pos.first;
        int y = current_pos.second;
        que.pop(); // キューから pop を忘れずに

        // 隣接頂点を探索
        for (int direction = 0; direction < 4; ++direction) {
            int next_x = x + dx[direction];
            int next_y = y + dy[direction];
            if (next_x < 0 || next_x >= height || next_y < 0 || next_y >= width) continue; // 場外アウトならダメ
            if (field[next_x][next_y] == '#') continue; // 壁はダメ

            // まだ見ていない頂点なら push
            if (dist[next_x][next_y] == -1) {
                que.push(make_pair(next_x, next_y));
                dist[next_x][next_y] = dist[x][y] + 1; // (next_x, next_y) の距離も更新
                prev_x[next_x][next_y] = x;  // どの頂点から情報が伝播して来たか、縦方向の座標をメモ
                prev_y[next_x][next_y] = y;  // どの頂点から情報が伝播して来たか、横方向の座標をメモ
            }
        }
    }
    */
 /*
 int dist[50][50];
int main(){
	for(int i = 0 ; i < 50 ; i++)
		for(int j = 0 ; j < 50 ; j++)
			dist[i][j] = -1;
 
	int H,W;
	cin >> H >> W;
	int sx,sy,gx,gy;
	cin >> sy >> sx;
	cin >> gy >> gx;
	sy--,sx--;
	gy--,gx--;//自分でこれらを探す時はしなくていい
	for(int i = 0 ; i < H ; i++)
		for(int j = 0 ; j < W ; j++)
			cin >> c[i][j];
	
	queue<Point> Q;
	Q.push({sx,sy});
	dist[sy][sx] = 0;
	while(!Q.empty()){
		Point now = Q.front();
		Q.pop();
		for(int i = 0 ; i < 4 ; i++){
			Point next = {now.x+dx[i],now.y+dy[i]};
			if( c[next.y][next.x] == '#' ) continue; // kabe dattara
			if( dist[next.y][next.x] != -1 ) continue; // sudeni kakutei saretetara
			dist[next.y][next.x] = dist[now.y][now.x] + 1;
			Q.push({next.x,next.y});
		}		
	}
	cout << dist[gy][gx] << endl;
  */
