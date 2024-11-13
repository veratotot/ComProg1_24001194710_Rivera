#include <iostream>
using namespace std;

int main() 
{
   cout << "Hello, I am Verra !! Welcome to my first C++ application \n";
   string name;
   
   cout << "Hey! What's your name? ";
   cin >> name;
   cout << "Good Day " << name;
   cout << "! It's nice to meet you! \n";
   
   int month;
   int day;
   int year;
   int leapyear = year % 4;
   
   cout << "When is your Birthday: \n";
   cout << "Month: ";
   cin >> month;
   cout << "Day: ";
   cin >> day;
   cout << "Year: ";
   cin >> year;
   
   if(year % 4 == 0)
   cout << year << " is a leap year";
   else if(year % 4 == 0 && year & 100 !=0)
   cout << year << " is a leap year";
   else
   cout << year << " is not a leap year";
    return 0;
}