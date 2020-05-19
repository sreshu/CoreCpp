class Student {
    public :
        int age;
        const int roll;
        int &x; // age reference variable

        Student(int r, int age) : roll(r), age(age), x(this -> age) {
            // roll = r;
        }
};