#include<iostream>
using namespace std;
main()
{
    int hours;
    int totalHoursInDay;
    int days;
    int noOfWorkers;
    int result;
    int total;
    int end;
    int end1;
    cout <<"ENTER THE NUMBER OF TEH HOURS= ";
    cin  >>hours;
    cout <<"ENTER THE NUMBER OF THE DAYS= ";
    cin  >>days;
    cout <<"ENTER THE NUMBER OF THE NUMBER OF THE WORKERS= ";
    cin  >>noOfWorkers;
     totalHoursInDay= (days * 10) * 10/100;
     result = (days * 10) - totalHoursInDay;
     total = result * noOfWorkers;
     end = total - hours;
     end1 = hours - total;
     if ( total > hours)
     {
        cout <<"YES!" << end << "HOURS ARE LEFT";
     }
     if (total < hours)
     {
        cout <<"NOT ENOUGH TIME!"<< end1  <<" HOURS NEEDED..";
     }

}

