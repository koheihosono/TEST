#include <iostream>
using namespace std;

int main()
{
	int array[] =
	{
		1,3,5,7,9,0,2,4,6,8
	};

	for (int loop = 0; loop < 10; ++loop)
	{
		int min = array[0];

		if (min > array[loop])
		{
			min = array[loop];

			cout << min << endl;
		}
	}
}