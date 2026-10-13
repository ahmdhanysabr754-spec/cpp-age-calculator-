#include <iostream>
using namespace std;


    int main()
    { 
       cout << "==============================\n";
       cout << "{Calculate Your Age APPlication }\n";
        cout << "==============================\n";
        int age;
        cout << "Enter Your Age By Years: ";
        cin >>  age;
        cout  << "\nYour Age is :" << age<<"\n";
        int Age_in_Days = age * 365;
        int Age_in_hours = Age_in_Days *24;
        int Age_in_minute = Age_in_hours *60;  
        int Age_in_second= Age_in_minute *60;
        cout << "\nYour Age In Days Is : " << Age_in_Days << " Days.\n\n";
        cout << "Your Age In Hours Is : " << Age_in_hours << " hours.\n\n";
        cout << "Your Age In Minute Is : " << Age_in_minute << " minutes.\n\n";
        cout << "Your Age In Second Is : " << Age_in_second << " Seconds.\n\n\n\n\n\n";

        return 0;
      } 