#include <iostream>
#include <math.h>
#include <string>



class Angle
{
	const double pi = 3.14;
	int minutes, degrees;

public:

	Angle(int deg, int min);
	void setMinutes(int min)
	{
		minutes = min;
	}
	void setDegrees(int deg)
	{
		degrees = deg;
	}
	int getDegree()
	{
		return degrees;
	}
	int getMinute()
	{
		return minutes;
	}

	double sumMinAndDeg()
	{
		return  degrees + (double(minutes) / 60);
	}
	double getRadian()
	{
		return (sumMinAndDeg() * pi / 180);
	}
	Angle getRange()
	{
		Angle tmp(degrees % 360, minutes);
		return tmp;
	}

	/*void  normalize()
	{
		Angle tmp (degrees + z.degrees + (minutes + z.minutes)/60, (minutes + z.minutes)%60);
		//Angle tmp(degrees + z.degrees + (minutes + z.minutes) / 60, minutes + z.minutes + (minutes + z.minutes) % 60);
	}
	*/
	Angle sumAngle(Angle z)
	{
		Angle tmp(degrees + z.degrees + (minutes + z.minutes) / 60, (minutes + z.minutes) % 60);
		//tmp.normalize();
		return tmp;
	}
	double sinAngle()
	{
		return sin(getRadian());
	}
	string compareAngels(Angle z)
	{
		if ((double(z.degrees) + double(z.minutes)) / 60 < sumMinAndDeg()) return "the compared angle is smaller";
		if ((double(z.degrees) + double(z.minutes)) / 60 > sumMinAndDeg()) return "the compared angle is bigger";
		return "the angles are equal";
	}
	string toString()
	{
		return "degree=" + to_string(degrees) + ", minutes=" + to_string(minutes);
	}
};
//Angle::Angle(int deg, int min)
//{
//	degrees = deg;
//	minutes = min;
//}
