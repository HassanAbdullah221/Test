#include <iostream>
#define S 40
using namespace std;

int main()
{
	
	int mx1[S][S];
	int mx2[S][S];
	int row1, row2, col1, col2, sum = 0;
	
	cout << "Enter matrix 1 rows : "; 
	cin >> row1;
	cout << "Enter matrix 1 column : "; 
	cin >> col1;
	cout << "Enter matrix 2 rows : "; 
	cin >> row2;
	cout << "Enter matrix 2 column : "; 
	cin >> col2;
	
	if(col1 != row2)
	{
		cout << "Unable to multiplay\n";
		return 1;
	}
	cout << "Enter matrix 1 : \n";
	
	for(int i = 0; i < row1; i++)
	{
		for(int j = 0; j < col1; j++)
		{
			cin >> mx1[i][j];
		}
	}
	
	cout << "Enter matrix 2 : \n";
	
	for(int i = 0; i < row2; i++)
	{
		for(int j = 0; j < col2; j++)
		{
			
			cin >> mx2[i][j];
		}
	}
	
	for(int i = 0; i < row1; i++)
	{
		
		for(int j = 0; j < col2; j++)
		{
			
			for(int k = 0; k < col1; k++)
			{
				
				sum = sum + mx1[i][k] * mx2[k][j];
				
			}
			
			cout << sum << " ";
			sum = 0;
			
		}
		
		cout << endl;
	}
	
	
	return 0;
}
