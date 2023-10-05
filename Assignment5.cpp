 #include<iostream>
 using namespace std;
 int n;

 template<typename T>            //syntax
    void sel(T A[10])
   {
     int i,j;
      T temp;

    for(i=0;i<n;i++)
    {

    for(j=i+1;j<n;j++)
        {
        if(A[i]>A[j])
        {
        temp=A[i];
        A[i]=A[j];
        A[j]=temp;
        }
    }
    }
  cout<<"\nSorted array: ";   //display func
  for(i=0;i<n;i++)
  {
  cout<<" "<<A[i];
  }
 }
 int main()
 {
  int choice;             // to call we have to make array for different data types
  int A[10];
  float B[10];
  int i;
  cout<<"-----------------------";
  do
  {
  cout<<"\n 1. Integer : ";
  cout<<"\n 2. Float : ";
  cout<<"\n Enter Choice : ";
  cin>>choice;
  switch(choice)
  {
  case 1:
  {
  cout<<"\nEnter Total Number Of Integer Elements:";
  cin>>n;
  cout<<"\nEnter Integer Elements:";
  for(i=0;i<n;i++)
  {
  cin>>A[i];
  }
  sel(A);
  break;
  }
  case 2:
  {
  cout<<"\nEnter Total Number Of Float Elements:";
  cin>>n;
  cout<<"\nEnter Float Elememts:";
  for(i=0;i<n;i++)
  {
  cin>>B[i];
  }
  sel(B);
  break;
  }
  }
  }
  while(choice!=4);
 return 0;
 }