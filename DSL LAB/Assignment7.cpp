#include <iostream>
using namespace std;
class node{
   public:
   string prn;
   string name;
   node* next;
  };
          
void transverse(node* &ptr){
   while(ptr!=NULL){
      cout<<"PRN:"<<ptr->prn<<endl;
      cout<<"Name:"<<ptr->name<<endl;
      cout<<endl;
      ptr=ptr->next;
   }
   }
//Insert node at beginning... 
void insertatfirst(node* &h,string data1,string data2){
    node* ptr;
    ptr=new node();
    ptr->prn=data1;
    ptr->name=data2;
    ptr->next=h;      //har baar ptr next krna h
    h=ptr;
}
//Insert node at last
void insertatlast(node* &a,string data1,string data2){
   node* ptr;
   ptr= new node();
   ptr->prn=data1;
   ptr->name=data2;
   ptr->next=NULL;
   a->next=ptr;            
}
//Insert node in middle
void insertatindex(node* &head,int position,string data1,string data2)
{
   node* temp=head;
   int count=1;
   while(count<position-1){             //check condition
      temp=temp->next;
      count++;
   }
   node* ptr = new node();
   ptr->prn=data1;
   ptr->name=data2;
   ptr->next=temp->next;
   temp->next=ptr;
}
//Delete Any Node
void deletenode(node* &head,int position){
   if(position==1){
  node* ptr=head;
  head=head->next;
  ptr->next=NULL;
  delete ptr;
}
  else{
   node* prev=NULL;
   node* curr=head;   //pointer for deleting that node
   int count=1;
   while(count<position){
      prev=curr;          //just forwarding position by these 2 pointers
      curr=curr->next;
      count++;
   }
   prev->next=curr->next;
   curr->next=NULL;
   delete curr;
  }
}
//Total Nodes
void total(node* &ptr){
   int count =0;
   while(ptr!=NULL){
      ptr=ptr->next;
      count++;
   }
   cout<<count;
}
//Concatenate Two Nodes
void concatenate(node* head,node* head2){
   node* ptr=head;
   while(ptr->next!=NULL){
      ptr=ptr->next;
   }

   ptr->next=head2;
}
int main()
{
   int choice;
   char ch;
   node *head=new node(); // another way...
   node *second=new node();
   node *third=new node();
   node *fourth=new node();

   head->prn="F190080069";
   head->name="vishwajeet";
   head->next=second;
   
   second->prn="F190080071";
   second->name="Rohit";
   second->next=third;
   
   third->prn="F190080073";
   third->name="Rahul";
   third->next=fourth;
   
   fourth->prn="F190080074";
   fourth->name="Ricky";
   fourth->next=NULL;
  //Linked List of Second Divison
   node *head2;
   node *second2;
   node *third2;
   node *fourth2;

   
   head2=new node();
   second2=new node();
   third2=new node();
   fourth2=new node();
   
   
   head2->prn="F190080075";
   head2->name="David";
   head2->next=second2;
   
   second2->prn="F190080076";
   second2->name="Jos"; 
   second2->next=third2;
   
   third2->prn="F190080073";
   third2->name="Marcus";
   third2->next=fourth2;
   
   fourth2->prn="F190080074";
   fourth2->name="Steve";
   fourth2->next=NULL;
   
   do{
      cout<<"=================================="<<endl;
      cout<<"            MENU                  "<<endl;
      cout<<"=================================="<<endl;
      cout<<"Enter 1:To Display Members of Club"<<endl;
      cout<<"Enter 2:To Add Members to Club"<<endl;
      cout<<"Enter 3:To Delete Members from club"<<endl;
      cout<<"Enter 4:To Compute Total Number of Members"<<endl;
      cout<<"Enter 5:To Combine list of Two division"<<endl;
      cout<<"Enter Your Choice"<<endl;
      cin>>choice;
      cout<<endl;

      switch(choice){
         case 1:
          cout<<"Members of club"<<endl;
          transverse(head);


          break;
         case 2:
          int ch;
          cout<<"Enter 1:To Add President"<<endl;
          cout<<"Enter 2:To Add Secretary"<<endl;
          cout<<"Enter 3:To Add Other Members"<<endl;
          cout<<"Enter Your Choice"<<endl;
          cin>>ch;
          if(ch==1){
             insertatfirst(head,"F190080068","Sanyam");
             transverse(head);
          }
          else if(ch==2){
              insertatlast(fourth,"F190080075","Raj");
              transverse(head);
          }
          else if(ch==3){
             insertatindex(head,3,"F190080070","Yash");
             transverse(head);
          }
          break;
         case 3:
           deletenode(head,7);
           transverse(head);
           break;
         case 4:
           cout<<"Total Members in Club are:"<<endl;
           total(head);
           cout<<endl;
           break;
         case 5:
            cout<<"Combined List of Two Divisions are:"<<endl;
            concatenate(head,head2);
            transverse(head);
            break;
         default:
            cout<<"Invalid Choice"<<endl;
            break;
      }
   cout<<"Do you want to continue"<<endl;
   cin>>ch;
   }while(ch=='y');
   return 0;
 }
   
   
   
  
   
   
  
