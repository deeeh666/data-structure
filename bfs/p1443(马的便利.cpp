#include <bits/stdc++.h>
using namespace std;
int n,m;
int dx[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};
int a[410][410];
struct N{
    int x,y;
};

void bfs(int sx,int sy)
{
    queue<N>q;
    q.push({sx,sy});
    a[sx][sy]=0;
    while(!q.empty())
    {
        N cur=q.front();
        q.pop();
        for (int i = 0; i < 8; i++) {
            int nx = cur.x + dx[i];
            int ny = cur.y + dy[i];
            if (nx >= 1 && nx <= n && ny >= 1 && ny <= m && a[nx][ny] == -1) {
                a[nx][ny] = a[cur.x][cur.y] + 1;
                q.push({nx, ny});
            }
        }
    }
}
int main()
{
    int x,y;
    cin>>n>>m>>x>>y;
    memset(a, -1, sizeof(a));
    bfs(x,y);
    for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                cout << a[i][j] << (j == m ? "" : " ");
            }
            cout << endl;
        }
}
