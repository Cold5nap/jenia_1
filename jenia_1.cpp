#include <iostream>
#include "Angle.cpp"

using namespace std;

int main()
{
	int deg1, deg2, min1, min2;
	cout << "Enter deg1:";
	cin >> deg1;
	cout << "Enter min1:";
	cin >> min1;
	cout << "Enter deg2:";
	cin >> deg2;
	cout << "Enter min2:";
	cin >> min2;
	Angle angle_1(deg1, min1);
	Angle angle_2(deg2, min2);
	cout << angle_1.toString() << endl;
	cout << "radians= " << angle_1.getRadian() << endl;
	cout << "conversion to a range: " << angle_1.getRange().toString() << endl;
	cout << "new agle: " << angle_2.toString() << endl;
	cout << "sum of angles= " << angle_1.sumAngle(angle_2).toString() << endl;
	cout << angle_1.compareAngels(angle_2) << endl;

	return 0;
}