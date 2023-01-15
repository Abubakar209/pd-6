#include<iostream>
using namespace std;
string actitvity(string temparature,string humadity);
main(){

string temparature,humadity;
cout<<"Enter Temparature ";
cin>>temparature;
cout<<"Enter Humadity ";
cin>>humadity;
string result=actitvity(temparature,humadity);
cout<<result;





}


string actitvity(string temparature,string humadity){
    string actitvities;
if(temparature=="warm" && humadity=="dry") {
  actitvities="Play Tennis";
  

}
else if(temparature=="warm" && humadity=="humid") {
  actitvities="Swim";

}

else if(temparature=="cold" && humadity=="dry") {
  actitvities="Play basketball";

}

else if(temparature=="cold" && humadity=="humid") {
  actitvities="watch tv";

}

return actitvities;
}