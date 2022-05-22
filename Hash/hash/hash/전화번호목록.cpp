#include <string.h>
#include <vector>
#include <iostream>
#include <unordered_map>
using namespace std;

//접두사 일치 찾기
bool solution(vector<string> phone_book)
{
	bool answer = true;
	
	unordered_map<string, int> hash_map;
	for (int i = 0; i < phone_book.size(); i++)
		hash_map[phone_book[i]] = 1;
	
	for (int i = 0; i < phone_book.size(); i++)
	{
		string phone_number = "";
		for (int j = 0; j < phone_book[i].size(); j++)
		{
			phone_number += phone_book[i][j];
			if (hash_map[phone_number] && phone_number != phone_book[i])
				return false;
		}
	}

	return answer;
}

//int main(void) {
//	vector<string> phone_book = { "123","456","789" };
//	cout << solution(phone_book);
//	return 0;
//
//}