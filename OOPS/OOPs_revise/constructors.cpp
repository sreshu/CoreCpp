// constructors construct obj of a class
// no complex logic should be here

//constructor: an operation that initializes (“constructs”) an object.
//Typically a constructor establishes an invariant and often 
//acquires resources needed for an object to be used 
//(which are then typically released by a destructor).

//We can initialize an object of this class, even though 
//this class does not explicitly define a constructor.

//This is possible because of the default constructor. 
//The compiler will define a default constructor, which accepts
//no arguments, for any class or structure that does not contain 
//an explicitly-defined constructor.

#include <cassert>

class Date {
 public:
  //Constructor for Date
  Date(int d, int m, int y) {
    Day(d); //mutators called
    Month(m);
    Year(y);
  }
  int Day() { return day; }
  void Day(int d) {
    if (d >= 1 && d <= 31) day = d;
  }
  int Month() { return month; }
  void Month(int m) {
    if (m >= 1 && m <= 12) month = m;
  }
  int Year() { return year; }
  void Year(int y) { year = y; }

 private:
  int day{1};
  int month{1};
  int year{0};
};

// Test in main
int main() {
  Date date(8,29,1981);
  assert(date.Day() == 8);
  assert(date.Month() == 29);
  
