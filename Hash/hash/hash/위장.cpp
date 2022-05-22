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
		//같은종류의 옷ket에대한 value값 1씩 올려줌
		m[c[1]]++;
	}
	int answer = 1;
	//iterator 선언
	map<string, int>::iterator it;
	for (it = m.begin(); it != m.end(); it++)
	{
		//선택하지 않을경우 고려해서 1더하고 곱해줌
		answer *= it->second + 1;
	}
	//아무것도 선택하지 않을경우 빼주기
	return answer - 1;
}

int main(void) {
	vector<vector<string>> clothes = { {"yellowhat", "headgear" }, { "bluesunglasses", "eyewear" }, { "green_turban", "headgear" } };
	cout << solution(clothes);
	return 0;

}