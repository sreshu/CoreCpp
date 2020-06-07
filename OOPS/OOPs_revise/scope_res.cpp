//func and var (identifiers) is assosciated with a particular scope

//C++ allows different identifiers (variable and function names)
// to have the same name, as long as they have different scope. 
//For example, two different functions can each declare the variable 
//int i, because each variable only exists within the scope of its parent function


//:: is the scope resolution operator. We can use this operator 
//to specify which namespace or class to search in order to resolve 
//an identifier.

//e.g.
//Person::move(); \\ Call the move the function that is a member of the Person class.
//std::map m; \\ Initialize the map container from the C++ Standard Library.  

#include <cassert>

class Date {
 public:
  //declare Date constructor
  Date(int d, int m, int y);
  int Day() { return day; }
  void Day(int day);
  int Month() { return month; }
  void Month(int month);
  int Year() { return year; }
  void Year(int year);

 private:
  int day{1};
  int month{1};
  int year{0};
};

//Constructor defined outside scope of class
Date::Date(int d, int m, int y){
  Day(d);
  Month(m);
  Year(y);
}

//Defined mutator func outside class

// TODO: Define Date::Day(int day)
void Date::Day(int day) {
    if(day >= 1 && day <= 31)
        Date::day = day;
}

// TODO: Define Date::Month(int month)
void Date::Month(int month) {
    if(month >= 1 && month <= 12)
        Date::month = month;
}

// TODO: Define Date::Year(int year)
void Date::Year(int year) { Date::year = year; }

// Test in main
int main() {
  Date date;
  date.Day(29);
  date.Month(8);
  date.Year(1981);
  assert(date.Day() == 29);
  assert(date.Month() == 8);
  assert(date.Year() == 1981);
}

//Each class provides its own scope. We can use the 
//scope resolution operator to specify identifiers from a class.

//This becomes particularly useful if we want to separate 
//class declaration from class definition.

