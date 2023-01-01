#include<iostream>
#include<cmath>
using namespace std;
typedef class PrivateCircle 
{
    private:
    int radius; // private member variables
    public:
    void getradius() // accessing private member variables
    {
        cout << "Enter the radius of the circle 1: " << endl; 
        cin >> radius;
    }
    int area()
    {   
        float m_area = M_PI * pow(radius, 2);
        cout << "The area of the circle using private access modifier is: " << m_area << endl;

    }
}cp1;
typedef class PublicCircle 
{
    
    
    public:
    int radius1; // public member variables
}cp2;
class ProtectedCircle 
{
    
    
    protected:
    int radius2; // protected member variables
};
class ProtectedCircle2: public ProtectedCircle
{
    public:
    int r;
    void getrad()
    {
    cout << "Enter the radius of the circle 3: " << endl;
    cin >> r;
    radius2=r; // accessing protected variable
    }
    void getarea()
    {
        
    cout<< "The area of the circle using protected access modifier is: "<< M_PI*radius2*radius2 << endl;


    }

};
main()
{
    cp1 obj;
    cp2 obj2;
    ProtectedCircle2 obj3;
    int i = 0;
    obj.getradius(); 
    obj.area();
    cout << "Enter radius of the circle 2:"<< endl;
    cin >> obj2.radius1; // accessing public variable
    i=obj2.radius1;
    cout << "The area of the circle using public access modifier is:  "<< M_PI*i*i << endl;
    obj3.getrad();
    obj3.getarea();

    return 0;

}
