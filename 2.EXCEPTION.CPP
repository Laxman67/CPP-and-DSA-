#include <iostream>
using namespace std;
int main()
{

	int n =4;
	int arr[n] = {12, 45, 67, 78};

	try
	{
		if (n == 0)
			throw n;

		for (int i = 0; i <= n; i++)
		{
			cout << "Value at " << i << " is " << arr[i] << endl;
		}
	}

	catch (int &size)
	{
		cout << "Size should not be Less then One or Zero" << size;
	}

	return 0;
}
