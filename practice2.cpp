#include<iostream>
#include<windows.h>
using namespace std;
   void printMaze();
   void gotoxy(int x, int y);
   char getCharAtxy(short int x,short int y);
   void print_pac(int P_X,int P_Y);
   void erase_pac(int P_X,int P_Y);
   void res_score(int score_1);
   void erase_ghost(int G_X,int G_Y);
  
    void print_ghost(int G_X,int G_Y);
main(){

  int score=0;
    int P_X=4;
    int P_Y=24;
    int G_X=25;
    int G_Y=18;
    int G_X_a=6;
    int G_Y_a=3;
    string direction="right";
    string direction_2="down";
   
   system("cls");
   printMaze();

  
   
   
 bool gamerun=true;
  while(gamerun){
       
     if(GetAsyncKeyState(VK_RIGHT))
     { char nextLocation=getCharAtxy(P_X+1,P_Y);
      if (nextLocation == ' '){
      erase_pac(P_X,P_Y);
        P_X=P_X+1;
      print_pac(P_X,P_Y);


}//nesting if bracs
     

      if (nextLocation == '.'){
       erase_pac(P_X,P_Y);
          P_X=P_X+1;
        score=score+1;
         res_score(score);
         
        
        print_pac(P_X,P_Y);
}



 if (nextLocation == 'G'){
   
        
       erase_pac(P_X,P_Y);
          P_X=4;
         P_Y=24;
             score =0;
           res_score(score);
         print_pac(P_X,P_Y);
        
        
       
}
}//if right


     if(GetAsyncKeyState(VK_LEFT))
     { char nextLocation=getCharAtxy(P_X-1,P_Y);
      if (nextLocation == ' '){
      erase_pac(P_X,P_Y);
        P_X=P_X-1;
        print_pac(P_X,P_Y);

}//nesting if bracs
  if (nextLocation == 'G'){
        erase_pac(P_X,P_Y);
         P_X=4;
         P_Y=24;
         score =0;
         res_score(score);
        print_pac(P_X,P_Y);
           
       
}
 if (nextLocation == '.'){
       erase_pac(P_X,P_Y);
          P_X=P_X-1;
        score=score+1;
         res_score(score);
         
        
        print_pac(P_X,P_Y);
}

}//if left


     if(GetAsyncKeyState(VK_UP))
     { char nextLocation=getCharAtxy(P_X,P_Y-1);
      if (nextLocation == ' '){
         erase_pac(P_X,P_Y);
        P_Y=P_Y-1;
        print_pac(P_X,P_Y);


}//nesting if bracs
       if (nextLocation == 'G'){
         erase_pac(P_X,P_Y);
          score =0;
         P_X=4;
         P_Y=24;
      
         res_score(score);
        print_pac(P_X,P_Y); 
}
 if (nextLocation == '.'){
       erase_pac(P_X,P_Y);
          P_Y=P_Y-1;
         score=score+1;
         res_score(score);
         print_pac(P_X,P_Y);
}

}//if up



     if(GetAsyncKeyState(VK_DOWN))
     { char nextLocation=getCharAtxy(P_X,P_Y+1);
      if (nextLocation == ' '){
       erase_pac(P_X,P_Y);
        P_Y=P_Y + 1;
        print_pac(P_X,P_Y);


}//nesting if bracs
  if (nextLocation == 'G'){
      erase_pac(P_X,P_Y);

         P_X=4;
         P_Y=24;
        score =0;
         res_score(score);
        print_pac(P_X,P_Y);
}

 if (nextLocation == '.'){
       erase_pac(P_X,P_Y);
          P_Y=P_Y+1;
        score=score+1;
         res_score(score);
         print_pac(P_X,P_Y);
}

}//if right







Sleep(50);


//game functionaliaty


if(direction =="right")
{
char nextLocation = getCharAtxy(G_X+1,G_Y);
if(nextLocation=='%')
{
  direction="left";
}
if(nextLocation=='.')
{
  direction="left";
}
else if (nextLocation==' ' ){

  erase_ghost(G_X,G_Y);
   G_X=G_X+1;
  print_ghost(G_X,G_Y);
}

}


if(direction =="left")
{
char nextLocation = getCharAtxy(G_X-1,G_Y);
if(nextLocation=='%')
{
  direction="right";
}
if(nextLocation=='.')
{
  direction="right";
}
else if (nextLocation==' '){

  erase_ghost(G_X,G_Y);
 G_X=G_X-1;
  print_ghost(G_X,G_Y);
}

}


//vertcal
if(direction_2 =="down")
{
char nextLocation = getCharAtxy(G_X_a,G_Y_a+1);
if(nextLocation=='%')
{
  direction_2="up";

}
if(nextLocation=='.')
{
  direction_2="up";

}
 


else if (nextLocation==' ' ){

  erase_ghost(G_X_a,G_Y_a);
   G_Y_a=G_Y_a+1;
  print_ghost(G_X_a,G_Y_a);
}

}



if(direction_2 =="up")
{
char nextLocation = getCharAtxy(G_X_a,G_Y_a-1);
if(nextLocation=='%')
{
  direction_2="up";

}
if(nextLocation=='.')
{
  direction_2="down";

}
 


else if (nextLocation==' ' ){

  erase_ghost(G_X_a,G_Y_a);
   G_Y_a=G_Y_a-1;
  print_ghost(G_X_a,G_Y_a);
}

}







































}








  }











 void printMaze()
{ 
cout<<    "  ##########################################################################                          "<<endl;
cout<<    "  ||........................................................... .......   ||                          "<<endl;
cout<<    "  ||.. %%%%%%%%%%%%%       ....      %%%%%%%%%%%%%%%%    |%|..     %%%%%% ||                          "<<endl; 
cout<<    "  ||.     |%|    |%|   .. |%|....    |%|          |%|    |%|..       |%|  ||                          "<<endl; 
cout<<    "  ||.     |%|    |%|   .. |%|....    |%|          |%|    |%|..        |%| ||                          "<<endl; 
cout<<    "  ||.     %%%%%%%%%%   .. |%|....    %%%%%%%%%%%%%%%%       ..     %%%%%% ||                          "<<endl; 
cout<<    "  ||.     |%|          .. |%|....   ..................  |%| ..          . ||                          "<<endl; 
cout<<    "  ||.     %%%%%%%%%%%%%.. |%|....   %%%%%%%%%%%%%%%%    |%| ..      %%%%. ||                          "<<endl; 
cout<<    "  ||.                     |%|.      |%|...........      |%| ..      |%| . ||                          "<<endl; 
cout<<    "  ||.     ..............  |%|.  G   |%|..........|%|        ..      |%| . ||                          "<<endl; 
cout<<    "  ||.     |%|%%%%%%%%|%| .|%|.  |%|    ..........|%|        ..|%|.        ||                          "<<endl; 
cout<<    "  ||.     |%|        |%|..      %%%%%%%    ......|%|         .|%|.        ||                          "<<endl; 
cout<<    "  ||.     |%|        |%|..       ...|%|                     . |%|.        ||                          "<<endl; 
cout<<    "  ||.                            ...|%|    %%%%%%%%           |%| ..|%|.  ||                          "<<endl; 
cout<<    "  ||.     %%%%%%%%%%%%%%..       ...|%|                |%| .. |%|%%%%%%%  ||                          "<<endl; 
cout<<    "  ||.................................................  |%| .............  ||                          "<<endl; 
cout<<    "  ||  ...............................................          ........   ||                          "<<endl; 
cout<<    "  ||..|%|  |%|   |%|..      %%%%%%%%%%%%%%   .....|%|  |%|    ..|%|.      ||                          "<<endl; 
cout<<    "  ||..|%|  |%|   |%|..                       .    |%|  %%%%%              ||                          "<<endl; 
cout<<    "  ||..|%|   .....|%|          ..|%|.     ||                               ||                          "<<endl; 
cout<<    "  ||..|%| %%%%%%%%%%%%%%         ...|%|                |%| .. |%|%%%%%%%  ||                          "<<endl; 
cout<<    "  ||....................                               |%| .............  ||                          "<<endl; 
cout<<    "  ||  ...............................................          ........   ||                          "<<endl; 
cout<<    "  ||      %%%%%%%%%%       ....      %%%%%%%%%%%%%%%%    |%|..     %%%%%% ||                          "<<endl; 
cout<<    "  ||      |%|    |%|   .. |%|....    |%|          |%|    |%|..       |%|  ||                          "<<endl;  
cout<<    "  ##########################################################################                          "<<endl; 
 


}




 void erase_pac(int P_X,int P_Y){
  
   gotoxy(P_X,P_Y);
    cout<<" ";


}

 void erase_ghost(int G_X,int G_Y){
  
   gotoxy(G_X,G_Y);
    cout<<" ";


}


void print_pac(int P_X,int P_Y){
gotoxy(P_X,P_Y);
   cout<<"p";
  
}
void print_ghost(int G_X,int G_Y){
gotoxy(G_X,G_Y);
   cout<<"G";
  
}
void print_ghost_2(int G_X_a,int G_Y_a){
gotoxy(G_X_a,G_Y_a);
   cout<<"G";
  
}


 void gotoxy_ghost(int x, int y)
{
  COORD coordinates;
  coordinates.X=x;
  coordinates.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
  

}


 void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X=x;
  coordinates.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
  

}


char getCharAtxy(short int x,short int y){

 CHAR_INFO ci;
 COORD xy ={0,0};
 SMALL_RECT rect={x,y,x,y};
 COORD coordBufsize;
 coordBufsize.X=1;
 coordBufsize.Y=1;
 return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufsize, xy ,& rect) ? ci.Char.AsciiChar :' ';


}

 void res_score(int score){
      gotoxy(1,26);
    cout<<"score is        ";
     gotoxy(1,26);  
     cout<<"score is"<<score;

}













