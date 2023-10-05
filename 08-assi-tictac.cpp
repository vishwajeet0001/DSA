#include<iostream>
using namespace std;

char square[10] = {'0','1','2','3','4','5','6','7','8','9'};

int checkwin(){

if(square[1] == square[2] && square[2] == square[3]){
    return 1;
}else if(square[4] == square[5] && square[5] == square[6]){
    return 1;
}else if(square[7] == square[8] && square[8] == square[9]){
    return 1;
}else if(square[1] == square[5] && square[5] == square[9]){
    return 1;
}else if(square[7] == square[5] && square[5] == square[7]){
    return 1;
}else if(square[1] == square[4] && square[4] == square[7]){
    return 1;
}else if(square[3] == square[6] && square[6] == square[9]){
    return 1;
}
else if(square[7] == square[8] && square[8] == square[9]){
    return 1;                                                      // total 9 cond
}

else if(square[1] != '1' && square [2] != '2' && square[3] != '3' && square [4] != '4' && 
square[5] != '5' && square [6] != '6' && 
square[7] != '7' && square [8] != '8' &&square[9] != '9')
{
return 0;
}
else
{
    return -1;                   // condition for not replacing that values
}

}
void board(){
      
 
   system("cls");                       //clear screen 
   cout<<"Tic Tac Game"<<endl;
   cout<<" player1(X) ----- player2(Y)"<<endl;


    cout<<"     |     "<<"    |    "<<endl;
    cout<<" "<<square[1]<< "   |    "<<square[2]<<"    |    "<<square[3]<<endl;
    cout<<"___"<<"__|__"<<"_______|_____"<<endl;
    cout<<"     |     "<<"    |   "<<endl;
    cout<<" "<<square[4]<< "   |    "<<square[5]<<"    |    "<<square[6]<<endl;
    cout<<"___"<<"__|__"<<"_______|_____"<<endl;
    cout<<"     |     "<<"    |   "<<endl;
    cout<<" "<<square[7]<< "   |    "<<square[8]<<"    |    "<<square[9]<<endl;
    cout<<"     |     " <<"    |    "<<endl;



}


int main(){

 int player = 1 , i , choice;

  char  mark;
  do{ 
    board();                         //dhyan se
    if(player%2){
        player = 1;
    }else{
        player  = 2;
    }
    cout<<"player "<< player<<" enter the number " <<endl;
    
     cin>>choice;

     if (player == 1)
     {
        mark = 'X';
     }else{
        mark = 'O';
     }
     
     if (choice == 1 && square[1]=='1')
     {
        square[1] = mark;
     }else if(choice == 2 && square[2]=='2'){
        square[2] = mark;
     }else if(choice == 3 && square[3]=='3'){
        square[3] = mark;
     }else if(choice == 4 && square[4]=='4'){
        square[4] = mark;
     }else if(choice == 5 && square[5]=='5'){
        square[5] = mark;
     }else if(choice == 6 && square[6]=='6'){
        square[6] = mark;
     }else if(choice == 7 && square[7]=='7'){
        square[7] = mark;
     }else if(choice == 8 && square[8]=='8'){
        square[8] = mark;
     }else if(choice == 9 && square[9]=='9'){
        square[9] = mark;
     }else{
      cout<<"invalid move !"<<endl;
      player--;
     }
i = checkwin();
player++;  
}while (i == -1);
  
board();
  
if(i == 1){
    player--;
    cout<< " PLAYER "<< player <<" WIN"<<endl;
}
  else{
    cout<<"DRAW"<<endl;

  }
    return 0 ;

}