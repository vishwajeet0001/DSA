#include<iostream>
using namespace std;
class complex
{
    public: 
         int real;
         int imag;

        complex(int r=0,int i=0)
        {
            real=r;
            imag=i;
        }


friend ostream & operator << (ostream &out ,complex const &obj);
friend istream & operator >> (istream &in,complex &obj);

complex operator + (complex const &obj)
{
    complex c;
    c.real=real+obj.real;
    c.imag=imag+obj.imag;
    return c;
}

complex operator * (complex &obj)
{
    complex c;
    c.real=((real*(obj.real))-((imag)*(obj.imag)));
    c.imag=((real*(obj.imag)))+((imag*(obj.real)));
    return c;
}
};

ostream & operator << (ostream &out,complex const &obj)
{
    out<<obj.real;
    out<<"+i"<<obj.imag;
    return out;
}

istream & operator >>(istream &in,complex  &obj)
{
    cout<<"Enter real part:";
    in>>obj.real;
    cout<<"Enter integral part:";
    in>>obj.imag;
    return in;
}

int main()
{
    complex c1,c2,c3,c4;
    cin>>c1;
    cin>>c2;
    cout<<"ADDITION IS:";
    c3=c1+c2;
    cout<<c3;
    cout<<endl;
    cout<<"MULTIPLICATION IS:";
    c4=c1*c2;
    cout<<c4;
}