#include <iostream>
using namespace std;

int allCalc()
{
	int first = 0;
	int second = 0;

	cout << "１つ目の値を入力してください" << endl;

	cin >> first;

	cout << "２つ目の値を入力してください" << endl;

	cin >> second;

	int tas = first + second;
	int hik = first - second;
	int kak = first * second;
	int war = first / second;

	cout << tas << endl;
	cout << hik << endl;
	cout << kak << endl;
	cout << war << endl;
}

int main()
{
	allCalc();
}