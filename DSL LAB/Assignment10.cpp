#include<iostream>
using namespace std;

class stack{


char A[1001];
int top;
string exp;
int n;
public:
stack(){
  top = -1;

}
void accept(){
 cout<<" Enter your expression "<<endl;
 cin>>exp;

}

void push(){
    n = exp.length();
    int i = 0;
    for (int i = 0; i < n; i++)
    {

        if (exp[i] == '(' || exp[i] == '[' ||exp[i] == '{' )
        {
            top++;
        A[top] = exp[i];   //a ke top me exp of i daalo
        }
        
    }
 
    
}

void result (){
    if (top == -1)
    {
        cout << "well" <<endl;
    }else{
        cout << "NOT"<<endl;
    }
    
}

void pop(){
         n = exp.length();
    int i = 0;
    for (int i = 0; i < n; i++)
    {

        if (A[top] == '(' &&  exp[i] == ')' || A[top] == '['   && exp[i] == ']' ||  A[top] == '{' &&  exp[i] == '}' )
        {
         top --;
        }
        i++;       //dekh bhai if me ek baar hi chelga toh sbke liye i ko ++ krenge
            }
}

};


int main(){
stack s ;
while (1)
{
    cout <<"1  for accept || 2 for result || exit" <<endl;
    int ch;
    cin>>ch;
    if (ch==1)
    {
      s.accept();  
    }
    else if (ch == 2)
    {         
s.push();
s.pop();
s.result();
    }
    else{
      cout <<"exit" <<endl;
    }
    
    
}


    return 0;
}