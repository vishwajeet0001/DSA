#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
    map<string,int> m;
    m["rj"]=32341;
    m["up"]=78341;
    m["mp"]=68341;
    m["jk"]=58341;
    m["mh"]=98341;

map<string,int>::iterator iter;
cout<<"Total States Are:"<<m.size()<<endl;
for (iter = m.begin(); iter != m.end(); ++iter) 
	{
	 cout << iter->first <<":" << iter->second << " million\n";
	}

cout<<"enter a state name to find its population:";
string name;
getline(cin,name);
iter=m.find(name);

if(iter!=m.end())
{
    cout<<name<< "'s population is:"<<iter->second << " million\n"; 
}
else{
    cout<<"key not found";
}

m.clear();

}
