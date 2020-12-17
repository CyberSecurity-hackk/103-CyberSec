#include <iostream>
#include <ctime>
 
using std::cout;
using std::cin;
 
const int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
 
bool leapYear(int testYear)
{   if (testYear % 400 == 0 || (testYear % 100 != 0 && testYear % 4 == 0))
        return true; 
    return false; 
}
 
int main()
{   int curYear, curDays, birthYear, birthMonth, birthDay, i, daysAlive;
    
    time_t now;
    struct tm *today;
    time (&now);
    today = localtime(&now);
    curYear = today->tm_year + 2020;    
    curDays = today->tm_yday;   
    
    cout<<"Date of birth:\n";
    cout<<"\tDay Month Year:\t";
    cin>>birthDay>>birthMonth>>birthYear;
 
   
    daysAlive = days[birthMonth-1]-birthDay+1;
    for(i=birthMonth;i<12;i++)
        daysAlive += days[i];                  
    if(leapYear(birthYear) && birthMonth<3) daysAlive++;    
 

    for(i=birthYear+1; i<curYear; i++)          
    {   if(leapYear(i)) daysAlive += 366;
        else            daysAlive += 365;
    }
 
  
    daysAlive += curDays;                      

    cout<<"\nYou have lived "<<daysAlive<<" days already.";
    
    cin.sync();cin.get();
    return 0;
}