#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int a[n][m], num = 1;
	for(int i = 0; i < n; i++)
	{
		if(i % 2 == 0)
			for(int j = 0; j < m; j++)
			{
				if(j % 2 == 0)
				{
					a[i][j] = num;
					num++;
				}
				else
					a[i][j] = 0;
			}
		else
			for(int j = 0; j < m; j++)
			{
				if(j % 2 == 1)
				{
					a[i][j] = num;
					num++;
				}
				else
					a[i][j] = 0;
			}
	}
		
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
			cout << setw(4) << a[i][j];
		cout << endl;
	}
	return 0;
}