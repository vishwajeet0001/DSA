#include <bits/stdc++.h>
using namespace std;
class student{
    public:
        string name,roll_no,cls,div,dob,blood_group,contact_address,telephone,dl_no;
        static int count;
    public:
    // Default Constructor
    student(){
        cout<<"   Default Constructor  "<<endl;
        name=" Yash Mohite";
        count++;
    }
    // Parametrised Constructor
    student(string name){

        cout<<"  Parametrised Constructor "<<endl;
        this->name=name;      
        count++;
    }
    // copy
    student(student &s){
        cout<<"  Copy Constructor "<<endl;
        name=s.name;
        count++;

    }
    void get_details()
    {
        
        cout<<"Enter the  student Details:"<<endl;
        cout<<"Name:";
        cin>>name;        
    }
    friend class display ;    //frnd class
 
    ~student()
    {
        cout<<"Object is Deleted...!!!"<<endl;   //destructor
    }
};

class display
{
    public:
    void show(student& s);
};


inline void display::show(student& s){
        cout<<"The Student Details are as Follows :"<<endl;
        cout<<"Name:"<<s.name<<endl;
}
int student::count=0;
int main (){
    display d;
    student s;
    cout<<"Student S is:"<<endl;
    d.show(s);                              //default
    student s1("Krithik Joshi");
    cout<<"Student S1 is:"<<endl;
    d.show(s1); 
    student s2=s;                          //parameter const
    cout<<"student S2 is:"<<endl;
    d.show(s2);  
    student s3=s1;                         //copy
    cout<<"student S3 is:"<<endl;
    d.show(s3);


    cout<<"Enter the No. of Students to Add :";
    int size;
    cin>>size;
    student *s4=new student[size];
    for(int i=0;i<size;i++){
        s4[i].get_details();
    }
    for(int i=0;i<size;i++){
        cout<<"student s4["<<i<<"]:"<<endl;
        d.show((s4[i]));
    }
    
    delete[] s4;   
    return 0;
}