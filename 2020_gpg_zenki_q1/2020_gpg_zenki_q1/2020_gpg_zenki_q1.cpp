#include <iostream>
using namespace std;

int main()
{
	for (int hundred = 1; hundred < 101; ++hundred)
	{
		if (hundred % 15 == 0)
		{
			cout << "FizzBuzz" << endl;
		}

		if (hundred % 3 == 0)
		{
			cout << "Fizz" << endl;
		}

		if (hundred % 5 == 0)
		{
			cout << "Buzz" << endl;
		}

		cout << hundred << endl;
	}
}