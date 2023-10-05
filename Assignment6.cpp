#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class vec
{
    public:
    string name;
    int item_code;

};
vec obj;             
vector <vec> op1;
vector <vec>::iterator itr;


void accept()
{
    int n;
    cout<<"Enter the total number of data to accept:";
    cin>>n;
    for(int i=0;i<n;i++){
    cout<<"Enter the name of item:";
    cin>>obj.name;
    cout<<"Enter the item code:";
    cin>>obj.item_code;
    op1.push_back(obj);         //to store data in vector
    }
}
void display()
{
    cout<<"The data in the vector is : "<<endl;
    for(itr=op1.begin();itr!=op1.end();itr++)
    {
        cout<<"Item name:"<<itr->name<<endl;
        cout<<"Item code:"<<itr->item_code<<endl;
    }

}
void search(){
    vec obj1;
    int key;
    key=obj1.item_code;
    cout<<"Enter the item code from the database to search:";
    cin>>key;
    for(itr=op1.begin();itr!=op1.end();itr++){
        if(key==itr->item_code){
            cout<<"Item code:"<<itr->item_code<<endl;
            cout<<"Item name:"<<itr->name<<endl;
            cout<<"Item data found successfully....."<<endl;
            break;
        }
    }
    if(key!=itr->item_code){
        cout<<"Not found...";
    }
}
void sort(){
    vector<vec>::iterator itr2;                                // taking 2 iterator
    for(itr=op1.begin();itr!=op1.end();itr++){
        for(itr2=op1.begin();itr2!=op1.end();itr2++){
               if((*itr2).item_code>(*itr).item_code){
                vec temp;
                temp=*itr;
                *itr=*itr2;
                *itr2=temp;
               }
        }
    }
}
int main(){
    accept();
    display();
    search();
    sort();
    display();
}