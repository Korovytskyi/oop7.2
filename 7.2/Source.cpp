#include <iostream>
#include <list>
#include <ctime>
using namespace std;
void create(list<int>& list, int n)
{
	for (int i = 0; i < n; i++)
		list.push_back(rand() % 100 );
}
void print(list<int> list, int n)
{
	for (int i = 0; i < n; i++)
	{
		int k = list.front();
		list.pop_front();
		cout << k << " ";
		list.push_back(k);
	}
	cout << endl;
}
double count(list<int> list, int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		int k = list.front();
		if (k + i > k + i + 1)
			cout << "sort" << endl;
		else
			cout << "no sort" << endl;
	}
	return count;
}
int main()
{
	srand((unsigned int)time(NULL));
	int n;
	cout << "n = ? "; cin >> n;
	list<int> arr;
	create(arr, n);
	print(arr, n);
	count(arr, n);
	return 0;
}