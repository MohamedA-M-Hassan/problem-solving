#include <iostream>
#include <string>
using namespace std;

int main()
{
	//http://codeforces.com/problemset/problem/841/A
	//http://codeforces.com/contest/841/problem/A
	int arr[200] = {0};
	string color;
	int n, k;
	cin >> n >> k >> color ;
	bool flag = true;

	for (int i = 0; i < n; i++)
	{
		arr[(int)color[i]]++;
		if (arr[(int)color[i]] > k) { cout << "No"; flag = false; break; }
	}
	if (flag == true) cout << "YES";
	return 0;
}