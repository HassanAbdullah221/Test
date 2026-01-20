#include <iostream>
using namespace std;

int main()
{
	int mx[2][2];
	
	cout << "Enter 2x2 matrix : \n";
	
	for(int i = 0; i < 2; i++)
	{
		
		for(int j = 0; j < 2; j++)
		{
			
			cin >> mx[i][j];
			
		}
	}
	
	cout << "Transpose matrix is : "<< endl;
	
	
	for(int i = 0; i < 2; i++)
	{
		
		for(int j = 0; j < 2; j++)
		{
			
			cout << mx[j][i] << " ";
			
		}
		
		cout << endl;
	}
	
	
	
	return 0;
}
