#include <assert.h>
#include <string>

class Animal {
public:
  virtual std::string Talk() const = 0;
};

// TODO: Declare a class Dog that inherits from Animal
class Dog : Animal {
public:  
    std::string Talk() const override;// write override keyword just that compiler interprets better with it
};

std::string Dog::Talk() const {
    return "Woof";
}

int main() {
  Dog dog;
  assert(dog.Talk() == "Woof");
}
