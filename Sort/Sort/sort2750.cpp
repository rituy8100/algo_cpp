#include <iostream>
using namespace std;

//�ð� ���⵵�� O(n^2)�� �����Ʈ
int main(void) {
	int num, tmp;
	cin >> num;
	int arr[1000] = {0,};
	for (int i = 0; i < num; i++) {
		cin >> arr[i];
	}
	for (int i = num; i >1; i--)
	{
		for (int j = 0; j + 1 < i; j++)
		{
			if(arr[j])
		}
	}


}