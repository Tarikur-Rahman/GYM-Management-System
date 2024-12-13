#include <iostream>
#include <stdio.h>
#include <cstring>
#include <conio.h>
#include<fstream>

#include "add_member.cpp"
#include "add_trainer.cpp"
#include "getch.cpp"



using namespace std;
int main()
{
    cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t ******************************************************************************************\n";
    cout << "\t\t\t\t\t**_______________________________________________________________________________________ **\n";
    cout << "\t\t\t\t\t**                                           		                                  **\n";
    cout << "\t\t\t\t\t**                                           		                                  **\n";
    cout << "\t\t\t\t\t**                                           		                                  **\n";
    cout << "\t\t\t\t\t**                                           		                                  **\n";
    cout << "\t\t\t\t\t**                                           		                                  **\n";
    cout << "\t\t\t\t\t**                                           		                                  **\n";
    cout << "\t\t\t\t\t**                                        WELCOME TO                                      **\n";
    cout << "\t\t\t\t\t**                                                                                        **\n";
    cout << "\t\t\t\t\t**                                   GYM MANAGEMENT SYSTEM                                **\n";
    cout << "\t\t\t\t\t**                                                                                        **\n";
    cout << "\t\t\t\t\t**                                                                                        **\n";
    cout << "\t\t\t\t\t**                                                                                        **\n";
    cout << "\t\t\t\t\t**                                                                                        **\n";
    cout << "\t\t\t\t\t**                                                                                        **\n";
    cout << "\t\t\t\t\t**                                                                                        **\n";
    cout << "\t\t\t\t\t**_______________________________________________________________________________________ **\n";
    cout << "\t\t\t\t\t ******************************************************************************************\n\n\n\n";

    int s1, s2, s3, s4, s5, s6, s7;
    string choice;
    member m1;
    employe e1;
    
    

    mainmenu:
    cout << "         ***Welcome to the GYM Mainmenu***" << endl;
    cout << "================================================" << endl;
    cout << " <1> Menu" << endl;
    cout << " <2> Schedule" << endl;
    cout << " <3> Help" << endl;
    cout << " <4> Exit" << endl;
    cout << "================================================" << endl;
    cout << "Enter Your Choice:     ";
    cin >> s1;
    cout << endl;
    switch(s1){
        case 1:
        { 
            menu:
            cout << "    **Welcome to the GYm Database Menu**" << endl;
            cout << "===========================================" << endl;
            cout << " <1> Enter the Member's Database" << endl;
            cout << " <2> Enter The Employe Database" << endl;
            cout << " <3> Exit" << endl;
            cout << "===========================================" << endl;
            cout << "Enter Your choice : ";
            cin >> s2;
            cout << endl;
            switch(s2)
            {
                case 1:
                {
                    memberdatabase:
                    cout << " **Welcome to the GYM Member's Database menu** " << endl;
                    cout << "=====================================================" << endl;
                    cout << "<1> Add New Member's" << endl;
                    cout << "<2> Display Members Information" << endl;
                    cout << "<3> Detail All Member's Data" << endl;
                    cout << "<4> Total Member's in GYM" << endl;
                    cout << "<5> Back" << endl;
                    cout << "=====================================================" << endl;
                    cout << "Enter Your Choice :";
                    cin >> s3;
                    cout<<endl;
                    switch(s3)
                    {
                        case 1:
                        {   
                            m1.member_data();
                            m1.savefile();
                            cout << endl;
                            goto memberdatabase;
                            cout<<endl;
                            break;
                        }
                        case 2:
                        {
                            m1.display();
                            cout << endl;
                            goto memberdatabase;
                            cout<<endl;
                            break;
                        }
                        case 3:
                        {
                            m1.all_memberdata();
                            cout << endl;
                            goto memberdatabase;
                            cout<<endl;
                            break;
                        }
                        case 4:
                        {
                            m1.total_member();
                            cout << endl;
                            goto memberdatabase;
                            cout<<endl;
                            break;
                        }
                        case 5:
                        {
                            cout<<endl;
                            goto menu;
                            break;
                        }
                        default:
                        {
                        cout << "Wrong Input" << endl;
                        cout << "Press any key to another option"<<endl;;
                        cout<<endl;
                        goto memberdatabase;   
                        break;
                        }
                    }
                    break;
                }
                case 2:
                {
                    cout<<endl;
                    employedatabase:
                    cout << "**Welcome to the GYM Member's Database menu** " << endl;
                    cout << "=====================================================" << endl;
                    cout << "<1> Add New Employe" << endl;
                    cout << "<2> Display Employe Information" << endl;
                    cout << "<3> Detail All Employe Data" << endl;
                    cout << "<4> Total Employe in GYM" << endl;
                    cout << "<5> Back" << endl;
                    cout << "=====================================================" << endl;
                    cout << "Enter Your Choice :";
                    cin >> s4;
                    cout<<endl;
                    switch (s4)
                    {
                        case 1:
                        {
                            e1.employee_data();
                            e1.employesavefile();
                            cout << endl;
                            goto employedatabase;
                            cout<<endl;
                            break;
                        }
                        case 2:
                        {
                            e1.display2();
                            cout << endl;
                            goto employedatabase;
                            cout<<endl;
                            break;
                        }
                        case 3:
                        {
                            e1.all_employedata();
                            cout << endl;
                            goto employedatabase;
                            cout<<endl;
                            break;
                        }
                        case 4:
                        {
                            e1.total_employe();
                            cout << endl;
                            cout<<endl;
                            goto employedatabase;
                            break;
                        } 
                        case 5:
                        {
                            cout<<endl;
                            goto menu;
                            break;
                        }
                        default:
                        {
                            cout<<endl;
                            cout << "wrong Input" << endl;
                            cout << "Press any key to another Option"<<endl;
                            cout<<endl;
                            goto employedatabase;
                            break;
                        }
                    }
                    break;
                }
                case 3:
                    {
                    cout << endl;
                    goto mainmenu;
                    cout<<endl;
                    break;
                    }
                default:
                {
                    cout<<endl;
                    cout<<"Wrong input"<<endl;
                    cout<<"Please Try again"<<endl<<endl;
                    goto menu;
                    cout<<endl;
                    break;
                }
            }
            break;
        }
    
        case 2:
            {
            cout << endl;
            cout << "============================================" << endl;
            cout << "Day                                  Time" << endl;
            cout << "Saturday                      08:00am to 10:00pm" << endl;
            cout << "Sunday                        10:00am to 10:00pm" << endl;
            cout << "Monday                        08:00am to 09:00pm" << endl;
            cout << "Tuesday                       09:00am to 11:00pm" << endl;
            cout << "Wednesday                     08:00am to 10:00pm" << endl;
            cout << "Thusday                       08:00am to 10:00pm" << endl;
            cout << endl;
            goto mainmenu;
            break;
            }
        
        case 3:
            {
            cout << endl;
            cout << "Welcome to World Gym Since it’s a inception in 2009." << endl;
            cout << "World Gym has strived to provide the ultimate workout experience for all of its members." << endl;
            cout << "World Gym recognizes that its members represent all different levels of fitness." << endl;
            goto mainmenu;
            cout<<endl;
            break;
            }
        case 4:
        {
            cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t ******************************************************************************************\n";
            cout << "\t\t\t\t\t**_______________________________________________________________________________________ **\n";
            cout << "\t\t\t\t\t**                                           		                                  **\n";
            cout << "\t\t\t\t\t**                                           		                                  **\n";
            cout << "\t\t\t\t\t**                                           		                                  **\n";
            cout << "\t\t\t\t\t**                                           		                                  **\n";
            cout << "\t\t\t\t\t**                                           		                                  **\n";
            cout << "\t\t\t\t\t**                                           		                                  **\n";
            cout << "\t\t\t\t\t**                                        Thank You                                       **\n";
            cout << "\t\t\t\t\t**                                                                                        **\n";
            cout << "\t\t\t\t\t**                                   GYM MANAGEMENT SYSTEM                                **\n";
            cout << "\t\t\t\t\t**                                                                                        **\n";
            cout << "\t\t\t\t\t**                                                                                        **\n";
            cout << "\t\t\t\t\t**                                                                                        **\n";
            cout << "\t\t\t\t\t**                                                                                        **\n";
            cout << "\t\t\t\t\t**                                                                                        **\n";
            cout << "\t\t\t\t\t**                                                                                        **\n";
            cout << "\t\t\t\t\t**_______________________________________________________________________________________ **\n";
            cout << "\t\t\t\t\t ******************************************************************************************\n\n\n\n";
            break;
        }
        default:
        {
            cout<<endl;
            cout<<"Wrong Input"<<endl;
            cout<<"Please Try Again"<<endl;
            cout<<endl<<endl;
            goto mainmenu;
            break;
        }
    }
    return 0;
}