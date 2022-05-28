/*#include <iostream>
#include <cmath>
using namespace std;

int N;
int K;

int doll_arr[501];


double Calculator_SD(int _head, int _tail) //Smallest_SD()���� ����ϰ��� �ϴ� ������ ǥ�������� ����� �� �������ش�.
{
	double mean = 0;
	double sd = 0;
	int num = _tail - _head + 1;

	for (int j = _head; j <= _tail; j++)
	{
		mean += doll_arr[j];
	}
	mean /= num; //��հ� ���ϱ�

	for (int j = _head; j <= _tail; j++)
	{
		double temp = (doll_arr[j] - mean);
		temp *= temp; //����
		sd += temp; //������ �ջ�
	}
	sd /= num;
	sd = sqrt(sd);

	return sd;
}



double Smallest_SD() //�ּҰ� �Ǵ� ǥ�� ������ �����Ѵ�.
{
	int head = 0; //�迭�� head
	int tail = 0; //�迭�� tail
	double smallest = 100000000;

	for (int i = K - 1; i < N; i++) //���� N=10, K=3�� ���, �ݺ����� 2,3,4,..,9 �� 8ȸ�� ����.
	{
		head = 0;
		tail = i;

		while (tail < N)//�� tail�� �迭�� ������ �ε����� ��� ������ �ݺ�
		{
			double temp = Calculator_SD(head, tail);

			if (smallest >= temp)
			{
				smallest = temp;
			}//�ּڰ� ����

			head++;
			tail++;
		}
	}

	return smallest;
}



int main()
{
	cin >> N >> K;
	for (int i = 0; i < N; i++)
	{
		cin >> doll_arr[i];
	} // �׽�Ʈ���̽��� �Է¹޾� �迭�� �����Ѵ�.

	cout.precision(10);
	cout << Smallest_SD() << "\n"; //������ �Ǵ� �ּ� ǥ�������� ����Ѵ�.

	return 0;

}*/