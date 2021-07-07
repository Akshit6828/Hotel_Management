#include <iostream>

using namespace std;

int main()
{
    int choose,room,Days;
    cout<<"\t\t\t\tWELCOME TO HOTEL EMPERIAL\n\n";
    cout<<"\t\t\t\tPLEASE OPT YOUR PREFERENCES\n\n";
    cout<<"\t\t\t\t"<<"HOTEL ROOM "<<"\tOR\t"<<"FOOD\n\n";
    cout<<"\t\t\t\tPRESS\n\t\t\t\t 1 For Room allotment\n\t\t\t\t 2 for Food\n";
    cin>>choose;
    if(choose==1)
    {
        cout<<"\t\t\t\tChoose the number of days of stay\n";
        cin>>Days;
       // cout<<"Choose Types of room preference\n Delux Rooms\n AC rooms\n NON  AC Rooms\n";
        char fn[20];
        cout<<"\t\t\t\tPlease tell your first name\n";
        cout<<"Mr.";cin>>fn;
        char ln[20];
        cout<<"\t\t\t\tPlease tell your Last name\n";
        cin>>ln;
        int nomember;
        cout<<"\t\t\t\tPlease tell the numbers of members";
        cin>>nomember;

        cout<<"\t\t\t\t"<<"PRESS\n\t\t\t\t 1 for Delux \n\t\t\t\t 2 for AC Room \n\t\t\t\t 3 for NON AC Rooms\n";
        cin>>room;
        cout<<"HOTEL LIST FOR \n";
        cout<<"Room no:     Allotted to:           Checked in:                Checked out:           Members:   "<<endl;
        cout<<"  301        Mr. Akshay khana       07/8/19 2:00 A.M          08/8/19  2:00 P.M        2         "<<endl;
        cout<<"  302        Mr. Aditya Birla       07/8/19 2:00 A.M          09/8/19  2:00 P.M        1         "<<endl;
        cout<<"  303        Mr. Montek Singh        07/8/19 2:00 A.M         09/8/19  2:00 P.M        4         "<<endl;
        cout<<"  304        Mr. Bhupinder Singh     08/8/19 2:00 A.M         09/8/19  2:00 P.M        2         "<<endl;
        cout<<"  305        Mr. Manpreet Singh      09/8/19 2:00 A.M         11/8/19  2:00 P.M        4         "<<endl;
        cout<<"  306        Mr. Vijay Samayal       09/8/19 2:00 A.M         11/8/19  2:00 P.M        3         "<<endl;
        cout<<"  307        Mr. Surinder Kumar      10/8/19 2:00 A.M         11/8/19  2:00 P.M        2         "<<endl;
        cout<<"  308        Mr. Ajit Kumar          10/8/19 2:00 A.M         12/8/19  2:00 P.M        3         "<<endl;
        cout<<endl<<endl<<endl;

        cout<<endl<<endl<<endl<<endl;
        if(room==1)
        {
            if(Days==1)
           {
                cout<<"YOU ARE ALLOTTED AS FOLLOW:\n";
        cout<<"  309"<<"       Mr."<<fn<<ln<<"        "<<"10/8/19 2:00 A.M"<<"       "<<"11/8/19  2:00 P.M"<<"        "<<nomember    <<endl;
            cout<<"\t\t\t\tPlease pay Rs. 1000\n";
           }
            else if(Days==2)
            {
                 cout<<"YOU ARE ALLOTTED AS FOLLOW:\n";
        cout<<"  309"<<"       Mr."<<fn<<ln<<"        "<<"10/8/19 2:00 A.M"<<"       "<<"12/8/19  2:00 P.M"<<"        "<<nomember    <<endl;
             cout<<"\t\t\t\tPlease pay Rs.1250\n";
            }
            else
               cout<<"\t\t\t\tPlease pay Rs. 1500\n";

        }
        else if(room==2)
        {
           if(Days==1)
           {
                cout<<"YOU ARE ALLOTTED AS FOLLOW:\n";
        cout<<"  309"<<"       Mr."<<fn<<ln<<"        "<<"10/8/19 2:00 A.M"<<"       "<<"11/8/19  2:00 P.M"<<"        "<<nomember    <<endl;
            cout<<"\t\t\t\tPlease pay Rs.900\n";
           }
            else if(Days==2)
            {
                 cout<<"YOU ARE ALLOTTED AS FOLLOW:\n";
        cout<<"  309"<<"       Mr."<<fn<<ln<<"        "<<"10/8/19 2:00 A.M"<<"       "<<"12/8/19  2:00 P.M"<<"        "<<nomember    <<endl;
                cout<<"\t\t\t\tPlease pay Rs.1200\n";
            }
            else
               cout<<"\t\t\t\tPlease pay Rs.1400\n";
        }
        else
        {
            if(Days==1)
            {
                 cout<<"YOU ARE ALLOTTED AS FOLLOW:\n";
        cout<<"  309"<<"       Mr."<<fn<<ln<<"        "<<"10/8/19 2:00 A.M"<<"       "<<"11/8/19  2:00 P.M"<<"        "<<nomember    <<endl;
                cout<<"\t\t\t\tPlease pay 700";
            }
            else if(Days==2)
            {
                 cout<<"YOU ARE ALLOTTED AS FOLLOW:\n";
        cout<<"  309"<<"       Mr."<<fn<<ln<<"        "<<"10/8/19 2:00 A.M"<<"       "<<"12/8/19  2:00 P.M"<<"        "<<nomember    <<endl;
                cout<<"\t\t\t\tPlease Rs.1100";
            }
            else
            {
                cout<<"\t\t\t\tPlease pay Rs.1250";
            }
        }
    }
    else
    {
        cout<<"Enter the Type of food\n";
        int typefood;
        cout<<"Press 1 for Chines  2 for Mexican\n";
        cin>>typefood;
        if(typefood==1)
        {

        }

    }
       return 0;
}
