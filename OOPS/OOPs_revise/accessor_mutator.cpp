#include <cassert>
#include <iostream>

// TODO: Define public accessors and mutators for the private member variables
struct Date {
 public:
    int Day() { return day; } // accessor or getters
    void Day(int d) { if (day > 1)
 day = d; } // mutator or setters , there is potential to protect the values one can get , like here put constraint of being positive
    int Month() { return month; }
    void Month(int m) { month = m; }
    int Year() { return year; }
    void Year(int y) { year = y; }
 private:
  int day{1}; // since we made all struct members pvt , so we can access them using accessors and mutatos
  int month{1};
  int year{0};
};

int main() {
  Date date;
  date.Day(29);
  date.Month(8);
  date.Year(1981);
  assert(date.Day() == 29);
  assert(date.Month() == 8);
  assert(date.Year() == 1981);
  std::cout << date.Day() << "/" << date.Month() << "/" << date.Year() << "\n";
}
