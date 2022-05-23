#include <iostream>
#include <queue>
#include <tuple>

using namespace std;
char arr[500][500];
int visit[500][500];
queue<tuple<int, int, int, int, int, int>> q;
int gorow[4] = { -1,0,1,0 };
int gocol[4] = { 0,1,0,-1 };

void dfs(int drow, int dcol, int tr, int tc, int succeed, int flip);

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//배열 크기
	int row, col;
	//현재 위치
	int drow, dcol;
	char c;
	//회전값
	int tr, tc;
	int flip = 1;
	int goflip;
	//이동 횟수
	int count;
	//결과값
	int ans=-1;

	cin >> row >> col;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cin >> arr[i][j];
			if (arr[i][j] == 'D')
				drow = i, dcol = j;
		}
	}


	//큐구현
	q.push(make_tuple(drow,dcol,0,0, 0,flip));

	while (!q.empty())
	{
		drow = get<0>(q.front());
		dcol = get<1>(q.front());
		tr= get<2>(q.front());
		tc= get<3>(q.front());
		count= get<4>(q.front());
		flip= get<5>(q.front());
		cout << drow << dcol << "\n";
		//num[drow][dcol] = flip;
		count++;
		q.pop();
		for (int i:gorow)
			for (int j : gorow)
			{
				c = arr[drow + i][dcol + j];
				goflip = flip;
				if (tr + i == 2)
					goflip =flip* -1;
				if (tc + j == 2)
					goflip *= flip*-1;
				if (c == '.')
				{
					q.push(make_tuple(drow+i, dcol+j, (tr+i)%2, (tc+j)%2, count,goflip));
				}
				else if (c == 'R'  && (tr + i) % 2 == 0 && (tc + j) % 2 == 0/* && goflip == 1*/)
				{
					cout << "도착" << goflip;
					ans = count;
				}
			}
		if (ans != -1)
			break;
	}

	cout << ans;
	return 0;
}

//void dfs(int drow, int dcol, int tr, int tc, int succeed, int flip)
//{
//	char c;
//	int goflip
//	for (int i : gorow)
//		for (int j : gorow)
//		{
//			c = arr[drow + i][dcol + j];
//			if (tr + i == 2)
//				flip *= -1;
//			if (tc + j == 2)
//				flip *= -1;
//			if (c == '.')
//				dfs(drow+i,dcol+j,tr+i,tr+j,succeed,f)
//		}
//}