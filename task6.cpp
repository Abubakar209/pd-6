#include <iostream>
using namespace std;
void price(string month, float days);
main()
{
    string month;
    float days;
    cout << "Enter month ";
    cin >> month;
    cout << "Enter days of stay ";
    cin >> days;
  price(month,days);
   



}

void price(string month, float days)
{
    float price_of_apartment, price_of_studio;
    if (month == "may" || month == "october")
    {
         if (days >= 7  && days<14)
        { float result = days * 50;
             price_of_studio=result-(result*0.05);
              cout<<"Studio price "  <<price_of_studio<<endl;
              float result_2 = days * 65;
        price_of_apartment = result_2 - (result_2 * 0.1);
        cout<< "Appartment price "<<price_of_apartment;
       
        }
        
       else if (days > 14)
        { float result = days * 50;
             price_of_studio=result-(result*0.3);
              cout<<"Studio price "  <<price_of_studio<<endl;
              float result_2 = days * 65;
        price_of_apartment = result_2 - (result_2 * 0.1);
        cout<< "Appartment price "<<price_of_apartment;
       
        }
       
    }

    else if (month == "june" || month == "september")
    {
        
        
        if (days > 14)
        { float result = days * 75.20;
             price_of_studio=result-(result*0.2);
              cout<<"Studio price "  <<price_of_studio<<endl;
              float result_2 = days * 68.70;
        price_of_apartment = result_2 - (result_2 * 0.1);
        cout<< "Appartment price "<<price_of_apartment;
       
        }
       
    }


    else if (month == "july" || month == "august")
    {
        
        
        if (days > 14)
        { float result = days * 76;
             price_of_studio=result-(result*0.2);
              cout<<"Studio price "  <<price_of_studio<<endl;
              float result_2 = days * 77;
        price_of_apartment = result_2 - (result_2 * 0.1);
        cout<< "Appartment price "<<price_of_apartment;
       
        }
       
    }











}