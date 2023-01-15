#include<iostream>
using namespace std;
string get2sign(string month, int date);

main(){
string month;
int date;
cout<<" Enter Month ";
cin>>month;
cout<<" Enter Date";
cin>>date;
string star_sign=get2sign(month,date);
cout<<star_sign;


}

string get2sign(string month, int date){
string sign;
if((month=="March" && date>=21) || (month=="April" && date<=19)){

sign="Aries";

}
else if((month=="April" && date>=20)||(month=="May" && date<=20)){

sign="tarurus";

}

else if((month=="May" && date>=21)||(month=="June" && date<=20)){

sign="Gemini";

}

else if((month=="June" && date>=21)||(month=="July" && date<=22)){

sign="Cancer";

}


else if((month=="July" && date>=23)||(month=="August" && date<=22)){

sign="Leo";

}


else if((month=="August" && date>=23)||(month=="September" && date<=22)){

sign="Virgo";

}


else if((month=="September" && date>=23)||(month=="October" && date<=22)){

sign="Libra";

}

else if((month=="October" && date>=23)||(month=="November" && date<=21)){

sign="Scorpio";

}

else if((month=="November" && date>=22)||(month=="December" && date<=21)){

sign="Sagittarius";

}

else if((month=="December" && date>=22)||(month=="January" && date<=19)){

sign="Capricorn";

}

else if((month=="January" && date>=20)||(month=="Febuaray" && date<=18)){

sign="Aquarius";

}

else if((month=="Febuaray" && date>=19)||(month=="March" && date<=20)){

sign="Pisces";

}


return sign;




}