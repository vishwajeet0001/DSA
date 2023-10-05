#include<iostream>
using namespace std;

class dq
{   public:
    int front,rear,size;
    int a[5];

    dq()
    {
        front=rear=-1;
        size=5;
    }

    bool isfull()
    {
        if((front == 0 && rear == size-1) || front==rear+1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool isempty()
    {
        if((front==rear==-1))
        {
            return true;
        }
        else{
            return false;
        }
    }

    void enqrear(int x)
    {
        if(isfull()==true)
        {
            cout<<"q is full";
        }

        else if(front==-1 && rear==-1)
        {
                front=0;
                rear=0;
                a[rear]=x;

        }
        else if ( front != 0 && rear==size-1)  
        {   rear=0;
            rear++;
            a[rear]=x;
        }
        else{
            rear++;
            a[rear]=x;
        }
       // return true;     //dhyan
        
    }

    bool enqfront(int x)
    {
        if(front==-1)
        {
            front++;
            a[front]=x;
        }
        else if(front==0)
        {
            front=size-1;
            a[front]=x;
        }
        else{
            front--;
            a[front]=x;
        }
        return true;
    }   

    int deqrear()
    {   
        if(isempty()==1)
        {
            cout<<"q is empty";
        }
        int ans=a[rear];      
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else if(rear==0)
        {
            rear=size-1;
        }
        else{
            rear--;
          }
          return ans;
    }

    void deqfront()
    {
        if(isempty()==1)
        {
            cout<<"q is empty";
        }
        int ans=a[front];
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else if(front==size-1)
        {
            front=0;
        }
        else{
              front++;
        }
         cout<<"deleted"<<ans<<endl;
       // return ans;
    }

    void display()
    {
        for(int i=front;i!=rear;i=(i+1)%size) //yaad
        {
            cout<<endl;
            cout<<"elements are:   "<<a[i]<<endl;
        }
        cout<<a[rear]<<endl;
    }
};

int main()
{
    dq q1;
    int ch;

    do{
        cout<<"\n1.PUSH FROM REAR\n 2.PUSH FROM FRONT\n 3.POP FROM REAR \n 4.POP FROM FRONT \n 5.DISPLAY \n";
        cout<<"enter a choice:";
        cin>>ch;

        switch(ch)
        {
            case 1: if(ch==1)
            {   int x;
                cout<<"enter a element:  "<<endl;
                cin>>x;
                q1.enqrear(x);
                break;
            }

            case 2:if(ch==2)
            {
                int y;
                cout<<"enter a element:  "<<endl;
                cin>>y;
                q1.enqfront(y);
                break;
            }
            case 3:if(ch==3)
            {
                q1.deqrear();
                break;
            }
            case 4:if(ch==4)
            {
                q1.deqfront();
                break;
            }
            case 5:if(ch==5)
            {
                q1.display();
                break;
            }
        }

    }while(ch!=6);
    return 0;
}