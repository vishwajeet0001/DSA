#include<iostream>
using namespace std;

class stack{
public:
  const static int size = 100;
  char top = -1;
  int arr[size];
void push(int x ){
    if (size - top > 1)
    {
        top++;
        arr[top] = x;

    }
    else{
        cout<<"Overflow"<<endl;
    }
    
}
char pop(){
  if(top == -1){
      cout<<"underflow"<<endl;
      return -1;
  }
  return arr[top--];
}
};

int main(){ 
 stack s;
string input;
cout  << "enter a string" << endl;
 getline(cin,input);


string original = " ";
for (int i = 0; i < input.size(); i++)
{
    char ch = input[i];
    if (ch >= 'a' and ch <= 'z')
    {
        ch = (char)(ch - 'a' + 'A'); //to change letters into capital
    }
    
    if (ch >='A' and ch <='Z')
    {
        s.push(ch);
        original.push_back(ch);
    }
    
   
}
cout<< "Original string " << original<<endl;
string reverse = " ";
while (s.top != -1)
{
    reverse.push_back(s.pop());
}
cout << "  reverse  string   :" << reverse <<endl ;


bool ispali = true;
for (int i = 0; i < original.size(); i++)
{
    if (original[i] != reverse[i])
{
    ispali = false;
    break;
}
}
if (ispali == true)
{
    cout<< " PALINDROME" <<endl;
    
}else{
    cout<< "NOT PALINDROME" <<endl;

}
cout<<endl;
}