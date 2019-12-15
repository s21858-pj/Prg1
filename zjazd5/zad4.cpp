#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {

	string tab[10][10];
	int n;

	cin >> n;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			tab[i][j] = " ";
		}
	}
	int x;
	int y;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		cin >> y;
		tab[x][y] = "*";
	}
	for (int i = 9; i >= 0; i--)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << tab[i][j];
		}
		cout << endl;
	}
	return 0;
}
