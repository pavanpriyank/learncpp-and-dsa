#include <iostream>                //ask very complex 
using namespace std;
class Complex {
public:
    double real;
    double img;

    Complex(double r = 0.0, double i = 0.0) : real(r), img(i) {}

    Complex operator+(Complex &c2) {
        Complex ans(0, 0);
        ans.real = real + c2.real;
        ans.img = img + c2.img;
        return ans;
    }
};

int main() {
    Complex c1(1, 2);
    Complex c2(1, 3);

    Complex c3 = c1 + c2;

    cout << c3.real << " i " << c3.img << std::endl;

    return 0;
}