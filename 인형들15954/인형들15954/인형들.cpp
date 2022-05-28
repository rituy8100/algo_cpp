#include <iostream>
#include <deque>
#include <cmath>

using namespace std;
//int arr[500];
int N, K;

double dev(deque<double> q, double m);

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cout.precision(11);

	double m = 0;
	double num,ans,tmp, sumtmp;
	double sum = 0;
	deque<double> q;

	cin >> N >> K;

	for (int i = 0; i < K; i++)
	{
		cin >> tmp;
		//arr[i] = tmp;
		q.push_back(tmp);
		m += tmp;	
	}
	m /= K;
	ans = dev(q, m);

	for (int i = K; i < N; i++)
	{
		cin >> tmp;
		//arr[i] = tmp;
		m = m - q.front()/K +tmp/K;
		q.pop_front();
		q.push_back(tmp);
		sumtmp = dev(q, m);
		if (ans >= sumtmp)
		{
			ans = sumtmp;
		}
	}
	cout << ans;
}

double dev(deque<double> q, double m)
{
	double num;
	double sum = 0;
	for (double i : q)
	{
		num = pow(i - m, 2);
		sum += num;
	}
	return sqrt(sum / K);
}