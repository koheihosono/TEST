#include <iostream>
using namespace std;

void allCalc(int first,int second,int* ptas,int* phik,int* pkak,int* pwar)
{
	cout << "１つ目の値を入力してください" << endl;

	cin >> first;

	cout << "２つ目の値を入力してください" << endl;

	cin >> second;

	*ptas = first + second;
	*phik = first - second;
	*pkak = first * second;
	*pwar = first / second;
}

int main()
{
	int tas = 0;
	int hik = 0;
	int kak = 0;
	int war = 0;

	allCalc(1,2,&tas,&hik,&kak,&war);

	cout << tas << endl;
	cout << hik << endl;
	cout << kak << endl;
	cout << war << endl;
}