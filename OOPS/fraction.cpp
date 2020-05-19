class Fraction {
    private:
        int num;
        int denom;

    public:

        Fraction(int num, int denom){
            this -> num=num;
            this -> denom=denom;
        }
    void print() {
        cout  << this -> num << " / " << denom << endl;
    }

    void simplify() {
        int gcd = 1;
        int j = min(this -> num, this -> denom);
        for(int i=1;i <=j; i++){
            if(this -> num % i == 0 && this -> denom % i == 0){
                gcd=i;
            }
        }
        this -> num = this -> num / gcd;
        this -> denom = this -> denom / gcd;
    }

    void add(Fraction const &f2) {
        int lcm = denom*f2.denom;
        int x = lcm/denom;
        int y = lcm/f2.denom;

        int numerator = x*num + (y*f2.num);
        num = numerator;
        denom = lcm;

        simplify();
    }

    void multiply(Fraction const &f2){
        num = num*f2.num;
        denom=denom*f2.denom;
    }
};