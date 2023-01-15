#include <iostream>
using namespace std;
void result(float hour, float min, float std_hour, float std_min);
main()
{
    float hour_paper, min_paper, hour_std, min_std;
    cout << " enter exam time in hour: ";
    cin >> hour_paper;
    cout << " enter exam time in min: ";
    cin >> min_paper;
    cout << " enter your  time in hour: ";
    cin >> hour_std;
    cout << " enter your time in min: ";
    cin >> min_std;
    result(hour_paper, min_paper, hour_std, min_std);
}

void result(float hour, float min, float std_hour, float std_min)
{

    if (hour >= std_hour && min >= std_min)
    {
        float hour_result = (hour * 60) + min;
        float hour_result_2 = (std_hour * 60) + std_min;
        float final = hour_result - hour_result_2;
        if (final <= 30)
        {
            cout << "on-time "
                 << "and " << final << " before";
        }
        if (final > 30)
        {
            if (final >= 60)
            {
                float final_1 = final / 60;

                float lol = final_1 * 10;
                int lol1 = lol;
               
                int lol_1 = lol1 % 10;
                if(lol_1==1){
                    int lol_2 = (lol_1 * 10);
                int final_2 = final_1;

                cout << "Early "
                     << "and " << final_2 << " hour "
                     << " " << lol_2 << " minute"
                     << " before"; 
                }
               else{int lol_2 = (lol_1 * 6);

            
               
                int final_2 = final_1;

                cout << "Early "
                     << "and " << final_2 << " hour "
                     << " " << lol_2 << " minute"
                     << " before";}
                
            }
        }
    }

    else if (hour <= std_hour && min >= std_min || (min < std_min))
    {
        float hour_result = (hour * 60) + min;
        float hour_result_2 = (std_hour * 60) + std_min;
        float final = hour_result_2 - hour_result;
        cout << "Late" << final << " minute";
    }
}