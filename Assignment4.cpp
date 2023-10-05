#include<iostream>
#include<fstream>
using namespace std;

class employee
{  public:
    char name[20];
    int id;
    double salary;

    void accept()
    {
        cout<<"ENTER A NAME:";
        cin>>name;
        cout<<"ID:";
        cin>>id;
        cout<<"SALARY:";
        cin>>salary;
    }

    void display()
    {
        cout<<"\nName:"<<name;
        cout<<"\nId:"<<id;
        cout<<"\nSalary:"<<salary;
    }
};

int main()
{
    employee e[4];
    fstream f;
    f.open("ABC.txt",ios::out);
    
    int n;
    cout<<"how many employees do u want to add:";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        e[i].accept();
        f.write((char*) &e[i],sizeof(e[i]));
    }
    f.close();

    f.open("ABC.txt",ios::in);
    for(int i=0;i<n;i++)
    {   
        f.read((char*) &e[i],sizeof(e[i]));
        e[i].display();
    }
    f.close();

    return 0;

}