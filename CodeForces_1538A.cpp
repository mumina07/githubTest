#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	
	cin >> t;
	
	for(int i = 0; i < t; i++)
	{
		int n;
		cin >> n;
		
		int array[n];
		
		for(int j = 0; j < n; j++)
		{
			cin >> array[j];
		}
		
		int least = 1000, greatest = -1000, least_pos = -1, greatest_pos = -1 ;
		for(int j = 0; j < n; j++)
		{
			if(array[j] < least)
			{
				least = array[j];
				least_pos = j;
			}
			if(array[j] > greatest)
			{
				greatest = array[j];
				greatest_pos = j;
			}
		}
		
		int pos1, pos2;
		if(least_pos < greatest_pos)
		{
			pos1 = least_pos;
			pos2 = greatest_pos;
		}
		else if(greatest_pos < least_pos)
		{
			pos1 = greatest_pos;
			pos2 = least_pos;
		}
		
		int moves = pos2 + 1;
		int m = n - pos1;
		if(moves > m)
		{
			moves = m;
		}
		m = pos1 + 1 + n - pos2;
		if(moves > m)
		{
			moves = m;
		}
		
		cout << moves << endl;
	}
	return 0;
}
