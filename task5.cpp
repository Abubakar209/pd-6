#include <iostream>
using namespace std;
float price(string fruit, string day, float quantity);

main()
{

    string fruit, day;
    float quantity;
    cout << "Enter fruit ";
    cin >> fruit;
    cout << "Enter Day ";
    cin >> day;
    cout << "Enter Quantity ";
    cin >> quantity;

    float final_price = price(fruit, day, quantity);
    if(final_price==0){
        cout<<"Error";
    }
    cout << final_price;
}

float price(string fruit, string day, float quantity)
{
    float result=0;

    if (day == "saturday" || day == "sunday")
    {
        if (fruit == "banana")
        {
            result = quantity * 2.70;
        }
        if (fruit == "apple")
        {
            result = quantity * 1.25;
        }
        if (fruit == "orange")
        {
            result = quantity * 0.90;
        }
        if (fruit == "grapefruit")
        {
            result = quantity * 1.60;
        }
        if (fruit == "kiwi")
        {
            result = quantity * 3.00;
        }
        if (fruit == "pineapple")
        {
            result = quantity * 5.60;
        }
        if (fruit == "grapes")
        {
            result = quantity * 4.20;
        }
    }

    else if (day == "monday" || day == "tuesday" || day == "wenesday" || day == "thursday" || day == "friday")
    {

        if (fruit == "banana")
        {
            result = quantity * 2.50;
        }
        if (fruit == "apple")
        {
            result = quantity * 1.20;
        }
        if (fruit == "orange")
        {
            result = quantity * 0.85;
        }
        if (fruit == "grapefruit")
        {
            result = quantity * 1.45;
        }
        if (fruit == "kiwi")
        {
            result = quantity * 2.70;
        }
        if (fruit == "pineapple")
        {
            result = quantity * 5.50;
        }
        if (fruit == "grapes")
        {
            result = quantity * 3.85;
        }
    }

    return result;
}
