#include <iostream>
using namespace std;
class C1
{
public:
    C1()
    {

        cout << "Base constructor called" << endl;
    }
    
    virtual ~C1() // Virtal Base Destructor declared
    {
        cout << "Virtual Base Destructor called" << endl;
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
class C3
{   int x,y;
public:
    C3(int i, int j) // Parameterized Constructor declared
    {
        x = i;
        y = j;
    cout << "Parameterized Constructor Called" << endl;
    }
    C3(C3 &obj) // Copy Constructor declared
    {
        x=obj.x;
        y=obj.y;
        cout<<"Copy Constructor Explicitly called"<<endl;
    }
};
int main()
{
    
        
            C1 *ptr;
            ptr = new C2();
            C2 obj;
            ptr=&obj;
            
            C3 orig(5,6);
            C3 copy(orig);
            
            delete ptr;
       
            return 0;
        
    }
