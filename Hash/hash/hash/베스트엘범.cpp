#include<iostream>
#include<string>
#include <map>
#include <vector>
using namespace std;

vector<int> solution(vector<string> genres, vector<int>plays)
{
	vector<int> answer;
	//�� �帣���� Ƚ�� ����
	map<string, int> music;
	//�� �帣���� �����뷡�� ����� ��������
	map<string, map<int, int>> musiclist;
	//���� ����Ʈ ��ŭ �ݺ�
	for (int i = 0; i < genres.size(); i++) {
		//music map�� �帣���� Ƚ���߰�
		music[genres[i]] += plays[i];
		//musiclist
	}
}