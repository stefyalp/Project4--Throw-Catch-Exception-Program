
Page
1
of 4
/*==============================================
Name: Stefania Ascencio
Test 1, Part 2
CHAPTER 14
Write a program that prompts the user to enter a person’s date of birth in 
numeric form such as 8-27-1980.
The program then outputs the date of birth in the form: August 27, 1980. 
Your program must contain at least two exception classes:
invalidDay andinvalidMonth.
If the user enters an invalid value for day,
then the program should throw and catch an invalidDay object.
Similar conventions for the invalid values of month and year. (Note that 
your program must handle a leap year.)
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
message ="The day you entered is incorrect";
}
void showException()
{
cout<< message <<endl;
}
};
class invalidMonth
{
string message;
public:
invalidMonth(){
message ="The month you entered is incorrect ";
}
void showException(){
cout<< message <<endl;
}
};
class leapYear{
string message;
public:
leapYear(){
message ="The year you entered is incorrect";
}
void showException(){
cout<< message <<endl;
}
};
void read_bdate(int &day,int &month,int &year);
int main()
{
int day,month,year;
string months[12]={"January ","February ","March ",
"April ","May ","June ","July ","August ","September ",
"October ","November ","December "};
//try and catch block{
string message;
public:
invalidMonth(){
message ="The month you entered is incorrect ";
}
void showException(){
cout<< message <<endl;
}
};
class leapYear{
string message;
public:
leapYear(){
message ="The year you entered is incorrect";
}
void showException(){
cout<< message <<endl;
}
};
void read_bdate(int &day,int &month,int &year);
int main()
{
int day,month,year;
string months[12]={"January ","February ","March ",
"April ","May ","June ","July ","August ","September ",
"October ","November ","December "};
//try and catch block
try
{
read_bdate(day,month,year);
cout<<"The Date of Birth is: " <<months[month-1]<< " " << day << ", " << 
year << endl;
}
//catch if invalid date is given
catch(invalidDay invday)
{
invday.showException();
}
//catch if invalid month is given
catch(invalidMonth invmonth)
{
invmonth.showException();
}
//catch leap year
catch(leapYear leap)
{
leap.showException();
}
system("pause");
return 0;
}
void read_bdate(int &day,int &month,int &year)
{
cout<<"Please enter the day of birth (1-31): "<<endl;
cin>>day;
if (day <= 0 || day > 31)
throw invalidDay();
cout<<"Please, enter month(1-12)"<<endl;
cin>>month;
if(month<=0 ||month>=13)// less than 0 OR greater than 13: Invalid month
throw invalidMonth();
cout<<"Please, enter the year to four digits (YYYY): "<<endl;
cin>>year;
if (year % 400 == 0 || year % 100 != 0 && year % 4 == 0)
if (day >= 30)
throw leapYear();
}
