#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

typedef class Triangle
{
    int a,b,c,l1,l2,l3;
    public:
    void setdata()
    {
        cout<<"Enter the length of first side:"<<endl;
        cin>>a;
        cout<<"Enter the length of second side:"<<endl;
        cin>>b;
        cout<<"Enter the length of third side:"<<endl;
        cin>>c;
    }
    void display()
    {
        cout<<"The area of the given triangle is: ";
        cout<<setprecision(4)<<calArea(a,b,c)<<endl;
        cout<<"The Perimiter of the given triangle is: "<<calperi(a,b,c)<<endl;

    }
    float calArea(int l1, int l2 ,int l3);
    float calperi(int l1, int l2, int l3);
}T;
float T::calArea(int l1,int l2,int l3)
{
    float area,area2,semip,peri;
    peri=calperi(l1,l2,l3);
    semip=peri/2;
    area2=semip*(semip-l1)*(semip-l2)*(semip-l3);
    area=sqrt(area2);
    return area;
    
}
float T::calperi(int l1,int l2,int l3)
{
    float perim;
    perim=l1+l2+l3;
    return perim;
}
int main()
{
    T obj;
    obj.setdata();
    obj.display();
    return 0;
}