#include <iostream>
using namespace std;
class Complex {
private:
    double real;
    double imag;
public:
    Complex() : real(0.0), imag(0.0) {}
    Complex(double r, double i) : real(r), imag(i) {}
    Complex operator*(const Complex& other) {
        Complex temp;
        temp.real = (real * other.real) - (imag * other.imag);
        temp.imag = (real * other.imag) + (imag * other.real);
        return temp;
    }
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
    void setComplex(double r, double i) {
        real = r;
        imag = i;
    }
};
int main() {
    double realPart, imagPart;
    cout << "Enter real and imaginary parts of first complex number: ";
    cin >> realPart >> imagPart;
    Complex c1(realPart, imagPart);
    cout << "Enter real and imaginary parts of second complex number: ";
    cin >> realPart >> imagPart;
    Complex c2(realPart, imagPart);
    Complex product = c1 * c2;
    cout << "Product: ";
    product.display();
    return 0;
}

