#include<iostream>
using namespace std;
typedef class Checkyear
{
    int year;
    public:
    Checkyear()
    {   int y;
        cout<<"Enter year to be checked"<<endl;
        cin>>y;
        cout<<"Constructor called"<<endl;
        year=y;
    }
    void checkandprint()
    {
        if(year%100==0)
        {   
            if(year%400==0)
            {
            cout<<year<<" is leap year"<<endl;
            }
            else
            {
                cout<<year<<" is not leap year"<<endl;
            }
        }
        else if(year%4==0)
        {
            cout<<year<<" is leap year"<<endl;
        }
        else
        cout<<year<<" is not leap year"<<endl;
    }
    ~Checkyear()
    {
        cout<<"Destructor called"<<endl;
    }
}Cy;
int main()
{
    Cy obj;
    obj.checkandprint();
    return 0;
}