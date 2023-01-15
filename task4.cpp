#include <iostream>
using namespace std;
float service_charges(char service_type, float min, string time);

main()
{

    char service_type;
    float minutes;
    string time;
    cout << "Enter Service Type: ";
    cin >> service_type;
    cout << "Enter Call: ";
    cin >> minutes;
    cout << "Enter When you Call : ";
    cin >> time;
    float service_charges_final = service_charges(service_type, minutes, time);
    cout << service_charges_final;
}

float service_charges(char service_type, float min, string time)
{
    float result;
   
    if (service_type == 'N' || service_type == 'n')
    {

        if (min <= 50)
        {
            result = 10.00;
        }

        if (min > 50)
        {
            result = (min * 0.2) + 10.00;
        }
    }
   

   else if (service_type == 'P' || service_type == 'p')
    {
               
        if (time == "day")
        {
                
            if (min <= 75)
            {
                result = 25;
            }

            if (min > 75)
            {
                result = (min * 0.10) + 25;
                cout << "resul " << result << endl;
            }
        }

        if (time == "night")
        {
            if (min <= 100)
            {
                result = 25.00;
            }

            if (min > 100)
            {
                result = (min * 0.10) + 25;
            }
        }
    }
   

    return result;
}
