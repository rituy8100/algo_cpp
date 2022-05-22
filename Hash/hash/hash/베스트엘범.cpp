#include<iostream>
#include<string>
#include <map>
#include <vector>
using namespace std;

vector<int> solution(vector<string> genres, vector<int>plays)
{
	vector<int> answer;
	//각 장르별로 횟수 저장
	map<string, int> music;
	//각 장르별로 무슨노래가 몇번씩 저장됬는지
	map<string, map<int, int>> musiclist;
	//들어온 리스트 만큼 반복
	for (int i = 0; i < genres.size(); i++) {
		//music map에 장르별로 횟수추가
		music[genres[i]] += plays[i];
		//musiclist
	}
}