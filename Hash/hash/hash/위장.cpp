#include <string>
#include <vector>
#include <iostream>
#include <map>
using namespace std;

int solution(vector<vector<string>> clothes)
{
	map<string, int> m;
	for (vector<string> c : clothes)
	{
		//cout << c[1];
		//���������� ��ket������ value�� 1�� �÷���
		m[c[1]]++;
	}
	int answer = 1;
	//iterator ����
	map<string, int>::iterator it;
	for (it = m.begin(); it != m.end(); it++)
	{
		//�������� ������� ����ؼ� 1���ϰ� ������
		answer *= it->second + 1;
	}
	//�ƹ��͵� �������� ������� ���ֱ�
	return answer - 1;
}

int main(void) {
	vector<vector<string>> clothes = { {"yellowhat", "headgear" }, { "bluesunglasses", "eyewear" }, { "green_turban", "headgear" } };
	cout << solution(clothes);
	return 0;

}