#include <iostream>
#include <queue>
#include <vector>

using namespace std;
int tank[100000];
bool check[100000];
int result[100000];
int visit[100000];

vector<int> pipe[200000];

//void dfs(int first,int x, int& ans);
void dfs(int first, int x, int& ans);

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, M, Q;
	//N:물탱크의 수 M:파이프의 수 Q:물탱크에 방문할 횟수
	cin >> N >> M >> Q;


	//탱크의 물상태 입력받기 1:청정수 0:고인물
	for (int i = 0; i < N; i++)
	{
		cin >> tank[i];
	}
	//파이프 입력
	for (int i = 0; i < M; i++)
	{
		int a, b;
		cin >> a >> b;
		pipe[a - 1].push_back(b - 1);
		pipe[b - 1].push_back(a - 1);
	}
	//방문할 물탱크 입력
	for (int i = 0; i < Q; i++)
	{
		int ind;
		cin >> ind;
		ind--;
		int ans = 0;
		if (!check[ind]) {
			dfs(ind, ind, ans);
			if (ans > 0)
				result[ind] = 1;
			else
				result[ind] = 0;
		}
		cout << result[visit[ind]] << "\n";
	}
	return 0;
}

void dfs(int first, int x, int& ans)
{
	check[x] = true;
	visit[x] = first;

	if (tank[x] == 1)
		ans++;
	else
		ans--;
	for (int i = 0; i < pipe[x].size(); i++)
	{
		int y = pipe[x][i];
		if (!check[y])
			dfs(first, y, ans);
	}
}

//void bfs(int first,int x, int& ans)
//{
//	queue<int> q;
//	q.push(x);
//	visit[x] = first;
//	if (tank[x] == 1)
//		ans++;
//	else
//		ans--;
//	check[x] = true;
//
//	while (!q.empty())
//	{
//		int j = q.front();
//		q.pop();
//		for (int i = 0; i<pipe[j].size(); i++)
//		{
//			int y = pipe[j][i];
//			if (!check[y])
//			{
//				q.push(y);
//				visit[y] = first;
//				if (tank[y] == 1)
//					ans++;
//				else
//					ans--;
//				check[y] = true;
//			}
//		}
//	}
//}