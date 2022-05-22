#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion)
{
	string answer = "";
	unordered_map<string, int> map;
	for (auto player : participant)
	{
		if (map.end() == map.find(player))
			map.insert(make_pair(player, 1));
		else
			map[player]++;
	}

	for (auto player : completion)
		map[player]--;

	for(auto player:participant)
		if (map[player] > 0)
		{
			answer = player;
			break;
		}
	return answer;
}

//int main(void)
//{
//	vector<string> part = { "leo","kiki","eden" };
//	vector<string> comp = { "eden","kiki" };
//	cout << solution(part, comp);
//	return 0;
//}