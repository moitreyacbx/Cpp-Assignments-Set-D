#include <iostream>
using namespace std;

class Complex {
    private:
        float real;
        float imag;

    public:
        Complex(float r = 0, float i = 0) {
            real = r;
            imag = i;
        }

       friend Complex operator+(Complex const &c1, Complex const &c2);

        void print() {
            cout <<"The addition is : "<< real << " + " << imag << "i" << endl;
        }
};

Complex operator+(Complex const &c1, Complex const &c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main() {
    int r1,r2,i1,i2;
    cout<<"Enter the real part of first number:"<<endl;
    cin>>r1;
    cout<<"Enter the imaginary part of first number:"<<endl;
    cin>>i1;
    cout<<"Enter the real part of second number:"<<endl;
    cin>>r2;
    cout<<"Enter the imaginary part of second number:"<<endl;
    cin>>i2;
    Complex c1(r1,i1),c2(r2,i2);
    Complex c3 = c1 + c2;

    c3.print();

    return 0;
}
