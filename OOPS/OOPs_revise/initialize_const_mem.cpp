//we can't mutate a constant
#include <cassert>


class Birthday{
    public:
      Birthday(int d, int m, int y);
      int Day() { return day; }
      int Month() { return month; }
      int Year() { return year; }

    private:
      int const day;
      int const month;
      int const year;
};

Birthday::Birthday(int d, int m, int y) : day(d), month(m), year(y){} // initializer list

//Test in main

int main(){
    Birthday date(-29, 8, 1981);
    assert(date.Day() == -29);
    assert(date.Month() == 8);
    assert(date.Year() == 1981);
}
