#include<iostream>
using namespace std;
string grade(float Eng_mark,float Math_mark,float Chem_mark,float Social_mark,float Bio_mark);
main(){

float English,Math,Chemistry,Socialscience,Biology;
cout<<"Enter your English Marks ";
cin>>English;
cout<<"Enter your MAth Marks ";
cin>>Math;
cout<<"Enter your Chemistry Marks ";
cin>>Chemistry;
cout<<"Enter your Socialscience Marks ";
cin>>Socialscience;
cout<<"Enter your Biology Marks ";
cin>>Biology;
string grade_final=grade(English,Math,Chemistry,Socialscience,Biology);
cout<<grade_final;


}


string grade(float Eng_mark,float Math_mark,float Chem_mark,float Social_mark,float Bio_mark){

float result;
string grade;
result= ((Eng_mark+Math_mark+Chem_mark+Social_mark+Bio_mark)/500)*100;
if(result>=90 && result<=100){
grade="A+";

}
else if(result>=80 && result<90){
grade="A";

}

else if(result>=70 && result<80){
grade="B+";

}

else if(result>=60 && result<70){
grade="B";

}

else if(result>=50 && result<60){
grade="C";

}

else if(result>=40 && result<50){
grade="D";

}
else if(result<40){
grade="F";

}

return grade;

}