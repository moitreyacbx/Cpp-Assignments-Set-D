#include<iostream>
#include<iomanip>
using namespace std;
class Sq
{ 
    public:
    inline float square(float n)
    {
        return n*n;
    }

};
int main()
{    
    float i,square;
    cout<<"Enter number:"<<endl;
    cin>>i;
    Sq S;
    square=S.square(i);
    cout<<"The square is "<<setprecision(3)<<square<<endl;
    return 0;
    
}