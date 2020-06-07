#include <cassert>

class Date {
 public:
  //declare Date constructor
  Date(int day, int month, int year);
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

//Constructor defined outside scope of class - Case 1
/*Date::Date(int day, int month, int year){
  Day(day);
  Month(month);
  Year(year);
}
*/

//Constructor defined outside scope of class - Case 2
//So instead of assigning like Year(y) we can initialse is using initializer list

Date::Date(int day, int month, int y): year(y){ // here year-a member var , private one
                                          // y is arg to constructor
  Day(day);
  Month(month);
 
}
//Not putting day and month in initiliser list as they might loose the invariancy constraints





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

