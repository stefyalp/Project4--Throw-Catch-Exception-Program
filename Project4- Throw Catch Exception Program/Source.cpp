
/*==============================================
Name: Stefania Ascencio
Test 1, Part 2
CHAPTER 14
March 2, 2019
================================================*/
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
class invalidDay
{
	string message;
public:
	invalidDay()
	{
		message = "The day input is incorrect";
	}
	void showException()
	{
		cout << message << endl;
	}
};
class invalidMonth
{
	string message;
public:
	invalidMonth() {
		message = "The month input is incorrect ";
	}
	void showException() {
		cout << message << endl;
	}
};
class leapYear {
	string message;
public:
	leapYear() {
		message = "The year input is incorrect";
	}
	void showException() {
		cout << message << endl;
	}
};
void read_bdate(int& day, int& month, int& year);
int main()
{
	int day, month, year;
	string months[12] = { "January ","February ","March ",
	"April ","May ","June ","July ","August ","September ",
	"October ","November ","December " };
	//try and catch block
	try
	{
		read_bdate(day, month, year);
		cout << "The Date of Birth is: " << months[month - 1] << " " << day << ", " <<
			year << endl;
	}
	//catch if invalid date is given
	catch (invalidDay invday)
	{
		invday.showException();
	}
	//catch if invalid month is given
	catch (invalidMonth invmonth)
	{
		invmonth.showException();
	}
	//catch leap year
	catch (leapYear leap)
	{
		leap.showException();
	}
	system("pause");
	return 0;
}
void read_bdate(int& day, int& month, int& year)
{
	cout << "Please enter the day of birth (1-31): " << endl;
	cin >> day;
	if (day <= 0 || day > 31)//less than 0 OR greater than 31: Invalid day
		throw invalidDay();
	cout << "Please, enter month(1-12)" << endl;
	cin >> month;
	if (month <= 0 || month >= 13)// less than 0 OR greater than 13: Invalid month
		throw invalidMonth();
	cout << "Please, enter the year to four digits (YYYY): " << endl;
	cin >> year;
	if (year % 400 == 0 || (year != 100 && year % 4 == 0))//Leap year formula
		if (day >= 30)
			throw leapYear();
}
