#include<iostream>
using namespace std;

class queue
{
    public:
    int front,rear,size;
    int a[5];

    queue(){
        front=rear=-1;
        size=5;
    }

    bool isempty(){

        if(front==rear==-1)
        {
            cout<<"queue is empty";
            return 1;    
        }
        return 0;
    }

    bool isfull(){

        if(rear==size-1)
        {
            cout<<"queue is full";
            return 1;
        }
        return 0;
    }

    void enq(int x)
    {   if(rear==-1)
    {   front=0;
        rear=0;
        a[rear]=x;
    }
    else{
        rear++;
        a[rear]=x;
    }
    }
    int deq()
    { if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else
    {
        front++;
        return a[front-1];
    }
    }
    void display()
    {
        for(int i=front;i<=rear;i++)
        {
        cout<<a[i]<<" ";
    }

    }

};

int main()
{   
    queue q;
    int ch,x;

    do
    {
        cout<<"\n 1.Insert Job \n 2.Delete Job \n 3.Display \n 4.Exit\n Enter your choice \n";
        cin>>ch;

        switch(ch)
        {
            case 1:
            if(q.isfull())
            {
                q.isfull();
                
            }
            else{
               cout<<"enter data or add jobs:";
                cin>>x;
                q.enq(x);
                cout<<endl;
            }
            break;

            case 2:
            if(!q.isempty() )
            {
                cout<<"deleted elements is:"<< q.deq() <<endl;
            }
            else{
               cout<<"q is empty";
            }
            cout<<"remaining job:"<<endl;
            q.display();
            break;

            case 3:
            if(!q.isempty())
            {
                cout<<"queue contains:";
                q.display();
            
            }
            else
            cout<<"q is empty";
            break;

            case 4:
            cout<<"exit program";


        }

    } while (ch!=4);
    return 0;
}