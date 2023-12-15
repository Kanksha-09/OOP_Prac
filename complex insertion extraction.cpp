#include <iostream>
using namespace std;
class Complex {
private:
    double real;
    double imag;
public:
    Complex() : real(0.0), imag(0.0) {}
    Complex(double r, double i) : real(r), imag(i) {}
    friend ostream& operator<<(ostream& out, const Complex& c) {
        out << c.real << " + " << c.imag << "i";
        return out;
    }
    friend istream& operator>>(istream& in, Complex& c) {
        cout << "Enter real part: ";
        in >> c.real;
        cout << "Enter imaginary part: ";
        in >> c.imag;
        return in;
    }
};
int main() {
    Complex c1, c2;
    cout << "Enter the first complex number:" << endl;
    cin >> c1;
    cout << "Enter the second complex number:" << endl;
    cin >> c2;
    cout << "First complex number: " << c1 << endl;
    cout << "Second complex number: " << c2 << endl;
    return 0;
}

