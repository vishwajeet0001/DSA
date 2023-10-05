#include<iostream>
using namespace std;

class node
{   
    public:
    node* next;
    node* prev;
    string id;
    int seatno;
    int status;
};

class cinema{
    public:
    node* head;
    node* tail;
    //node* temp;

    cinema()
    {
        head=NULL;
    }

    void create();
    void book();
    void cancel();
    void display();
};

void cinema::create()
{
    node* p=new node;
    p->seatno=1;
    p->id="NULL";
    p->status=0;
    head=tail=p;

    for(int i=2;i<=71;i++)
    {
        node *ptr;
        ptr=new node;
        ptr->seatno=i;
        ptr->status=0;
        ptr->id="NULL";
        
        tail->next=ptr;
        ptr->prev=tail;
        tail=ptr;
        tail->next=head;
        head->prev=tail;
    }


}

void cinema::display()
{  int count=0;
   node* p;
   p=head;

   cout<<"************************************************************************"<<endl;
   cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$ CINEMAA HALL $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
   cout<<"*************************************************************************"<<endl;

   while(p->next!=head)
   {   
       if(p->seatno/10==0){
       cout<<"S0"<<p->seatno;
       }
       else{
        cout<<"S"<<p->seatno;
       }

       if(p->status==0){
        cout<<"|__|";                //yaha conditon check kr rha tha toh 1 baar hi yeah chlega toh hme count++ aur
                                    // ptr ko next krenge cond ke baad
       }
       else{
        cout<<"|# |";
       }
       count++;

       if(count%7==0){
        cout<<endl;
       }

       p=p->next;
   }

}

void cinema::book()
{
    node* temp;
    cout<<"enter a seat number to book:";
    int x;
    cin>>x;
    temp=head;
    while(temp->seatno!=x)             // jab tak voh seat na mil jaye tb tk yeah condition run krenge
    {
        temp=temp->next;
    }

    if(temp->status==1)
    {
        cout<<"seat already booked";
    }

    else
    {
        string idno;
        cout<<"enter a id no:";
        cin>>idno;
        temp->id=idno;
        temp->status=1;
        cout<<"OHHO!!! SEAT BOOKED,ENJOY YOUR DAY"<<endl;      
    }

}
void cinema::cancel()
{
    node* ptr;
    ptr=head;                                //yaad se likhna segmentation fault aayega vrna
    cout<<"enter a seat to cancel:";
    int y;
    cin>>y;
    while(ptr->seatno!=y)
    {
        ptr=ptr->next;
    }

    if(ptr->status==0)
    {
        cout<<"invalid seat to cancel";
    }
    else{
        string del;
        cout<<"enter a id no to delte that seat";
        cin>>del;
        
        if(ptr->id==del)
        {
            ptr->status=0;
            cout<<"seat deleted successfully";

        }
        else{
            cout<<"invalid seat";
        }
    }
}
int main()
{

    cinema c;
    c.create();
    c.display();

    c.book();
    c.display();
    c.cancel();
    c.display();
}
