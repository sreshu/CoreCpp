//Namespaces allow programmers to group logically related variables and functions 
//together. 
//Namespaces also help to avoid conflicts between to variables that have the 
//same name in different parts of a program.

namespace English {
void Hello() { std::cout << "Hello, World!\n"; }
}  // namespace English

namespace Spanish {
void Hello() { std::cout << "Hola, Mundo!\n"; }
}  // namespace Spanish

int main() {
  English::Hello();
  Spanish::Hello();
}
