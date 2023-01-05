#include <iostream>
using namespace std;
class C1
{
    int a, b;

public:
    C1()
    {

        cout << "Base constructor called" << endl;
    }
    C1(int i, int j) // Parameterized Constructor declared
    {
        i = a;
        j = b;
        cout << "Parameterized Constructor Called" << endl;
    }
    virtual ~C1() // Virtal Base Destructor declared
    {
        cout << "Base Destructor called" << endl;
    }
};
class C2 : public C1
{
public:
    C2()
    {
        cout << "Derived Constructor Called" << endl;
    }
    ~C2() // Inherited Derived Destructor overloaded
    {
        cout << "Derived Destructor called" << endl;
    }
};
int main()
{
    int ch;
    cout << "Enter which one you want to be demonstrated." << endl
         << "1.Virtual Destructor" << endl
         << "2.Parameterized Constructor" << endl
         << "3.Exit" << endl;
    cin >> ch while (1)
    {
        switch (ch)
        {
        case 1:
            C1 *ptr;
            ptr = new C2();
            C2 obj;
            ptr = &obj;
            delete ptr;
            break;
        case 2:
            C1 obj2(5, 6);
            break;
        case 3:
            return 0;
        default:
            cout << "Please enter correct choice"
        }
    }
}