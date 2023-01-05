#include<iostream>
#include<cmath>
#include<iomanip>
#define _USE_MATH_DEFINES
using namespace std;
class Volume
{
    double length,breadth,height,radius;
    public:
    double findvol(double l)//CubeVolume
    {   
        length=l;
        return pow(length,3);
    } 
    double findvol(double l,double b,double h)//Cuboid Volume
    {
        length=l;
        breadth=b;
        height=h;
        return length*breadth*height;
    }
    double findvol(double r,double h) //Cylinder Volume
    {   
        
        radius=r;
        height=h;
        return M_PI*pow(radius,2)*height;
    }
    

};
int main()
{   Volume obj;
    int ch;
    double a,b,c,d,e;
    
    while (1)
    {
    cout<<"*****Enter which shapes volume you would like to find:*****"<<endl
    <<"1.Cube"<<endl<<"2.Cuboid"<<endl<<"3.Cylinder"<<endl<<"4.Sphere"<<endl<<"5.Cone"<<endl<<"6.Exit"<<endl;
    cin>>ch;
        switch(ch)
        {
            case 1:
            cout<<"Enter the length:"<<endl;
            cin>>a;
            cout<<"The volume of the cube is:"<<obj.findvol(a)<<endl;
            break;
            case 2:
            cout<<"Enter the length:"<<endl;
            cin>>a;
            cout<<"Enter the breadth:"<<endl;
            cin>>b;
            cout<<"Enter the height:"<<endl;
            cin>>c;
            cout<<"The volume of the cuboid is:"<<obj.findvol(a,b,c)<<endl;
            break;
            case 3:
            cout<<"Enter the radius:"<<endl;
            cin>>a;
            cout<<"Enter the height:"<<endl;
            cin>>c;
            cout<<"The volume of the cylinder is:"<<obj.findvol(a,c)<<endl;
            break;
            case 4:
            cout<<"Enter the radius:"<<endl;
            cin>>a;
            cout<<"The volume of the sphere is:"<<(4*M_PI*obj.findvol(a))/3<<endl;
            break;
            case 5:
            cout<<"Enter the radius:"<<endl;
            cin>>a;
            cout<<"Enter the height:"<<endl;
            cin>>c;
            cout<<"The volume of the cone is:"<<(obj.findvol(a,c))/3<<endl;
            break;
            case 6:
            cout<<"******Exited Succesfully******"<<endl;
            return 0;
            default:
            cout<<"!!!Please Enter Correct Choice.!!!"<<endl;
        }

    }
    
    return 0;
}