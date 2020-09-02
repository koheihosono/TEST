#include <iostream>
using namespace std;

const int Name = 16;

struct Student
{
	char name[Name + 1];
	int japanese;
	int society;
	int math;
};

int main()
{
	Student student[] =
	{
		{"Cloud",50,75,100},{"Sephyroth",75,50,100},{"Tifa",100,50,75}
	};

	int cloud = student[0].japanese + student[0].society + student[0].math;
	int sephyroth = student[1].japanese + student[1].society + student[1].math;
	int tifa = student[2].japanese + student[2].society + student[2].math;

	cout << student[0].name << "の得点は" << cloud << "です" << endl;
	cout << student[1].name << "の得点は" << sephyroth << "です" << endl;
	cout << student[2].name << "の得点は" << tifa << "です" << endl;
}