#include "add_trainer.h"
#include "getch.cpp"
#include<iostream>
#include<stdio.h>
#include<cstring>
#include<fstream>

using namespace std;
add_trainer::add_trainer()
{

}

add_trainer::~add_trainer()
{

}
class declaretion_employe
{
    public:
    string id,name,age,address,contact,email,nid,designation,experience;
    string status1;
    declaretion_employe():status1("NOT Paid"){}
};
class count1{
    public:
    int counter;
    count1():counter(0){}
};
class employe:public declaretion_employe,public count1
{
    public:
    declaretion_employe n[15];
    int x;
    string back;
    int emid;
    int status3,status4;
    int em_pay_given;

    void employee_data()
    {
        cout<<"How many Employe do you want add:";
        cin>>x;
        cout<<endl;

        for(int i=0;i<x;i++){
            cout<<endl;

            cout<<"Enter Employe Id             : ";
            cin.ignore();
            getline(cin,n[i].id);
            cout<<endl;

            cout<<"Enter Employe Name           :";
            getline(cin,n[i].name);
            cout<<endl;

            cout<<"Age                          :";
            getline(cin,n[i].age);
            cout<<endl;

            cout<<"Address                      :";
            getline(cin,n[i].address);
            cout<<endl;

            cout<<"Contact                      :";
            getline(cin,n[i].contact);
            cout<<endl;

            cout<<"Email                        :";
            getline(cin,n[i].email);
            cout<<endl;

            cout<<"Nid Number                   :";
            getline(cin,n[i].nid);
            cout<<endl;

            cout<<"Designation                  :";
            getline(cin,n[i].designation);
            cout<<endl;

            cout<<"Experience                   :";
            getline(cin,n[i].experience);
            cout<<endl;

            emid++;
            counter++;

            back:
            cout<<endl;
            cout<<"Proceed Dorward [Y/N]        :";
            cin>>back;

            if(back=="Y"|| back=="y")
            {
                cout<<endl;
                cout<<"You Filled all enterise of "<<i+1 <<"/"<<x <<"Employee Succesfully...";
                
                cout<<endl;
            }
            else if( back=="N"|| back=="n")
            {
                break;
            }else
            {
                cout<<"Wrong Input";
                goto back;

            }
        }
    }
    void display2()
    {
        string a;
        cout<<"Enter the Employee Id            :";
        cin>>a;
        if(a=="0")
        {
            cout<<"Invalid Input"<<endl;
            cout<<"Please try again"<<endl;
        }
        else
        {
            int i;
            for(i=0;i<emid;i++)
            {
                status3=0;
                if(a==n[i].id)
                {
                    status3=1;
                    break;
                }
            }
                if (status3)
                {
                    cout<<"---------------------------------------------------------"<<endl;
                    cout<<"Employe Id                   :"<< n[i].id<<endl;
                    cout<<"Employe Name                 :"<< n[i].name<<endl;
                    cout<<"Age                          :"<< n[i].age<<endl;
                    cout<<"Address                      :"<< n[i].address<<endl;
                    cout<<"Contact                      :"<< n[i].contact<<endl;
                    cout<<"Email                        :"<< n[i].email<<endl;
                    cout<<"Nid Number                   :"<< n[i].nid<<endl;
                    cout<<"Designation                  :"<< n[i].designation<<endl;
                    cout<<"Experience                   :"<< n[i].experience<<endl;
                    cout<<"---------------------------------------------------------"<<endl;
                    cout<<"Press any key to another option"<<endl;
                }
                else{
                    cout<<"No Such Id in Database"<<endl;
                    cout<<"Press any key to another option"<<endl;
                }

            }    
        }
    void employesavefile()
    { 
        ofstream EmployeFile("Employedatafile.txt",ios::out|ios::app);
        if(EmployeFile.is_open())
        {
        EmployeFile<<counter<<endl;
        for(int i=0;i<counter;i++)
        {
                    EmployeFile<<"----------------------------------------------------------"<<endl;
                    EmployeFile<<"Employe Id                   :"<< n[i].id<<endl;
                    EmployeFile<<"Employe Name                 :"<< n[i].name<<endl;
                    EmployeFile<<"Age                          :"<< n[i].age<<endl;
                    EmployeFile<<"Address                      :"<< n[i].address<<endl;
                    EmployeFile<<"Contact                      :"<< n[i].contact<<endl;
                    EmployeFile<<"Email                        :"<< n[i].email<<endl;
                    EmployeFile<<"Nid Number                   :"<< n[i].nid<<endl;
                    EmployeFile<<"Designation                  :"<< n[i].designation<<endl;
                    EmployeFile<<"Experience                   :"<< n[i].experience<<endl;
                    EmployeFile<<"----------------------------------------------------------"<<endl;
                    EmployeFile<<endl;
        }
        EmployeFile.close();
       }
    }
    void all_employedata()
    {
        string file;
        ifstream EmployeFile("Employedatafile.txt");
        while(getline(EmployeFile,file))
        {
            cout<<file<<endl;
        }
        EmployeFile.close();
    }
    
    void total_employe()
    {

        cout<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<" Total Employe in GYM       :"<<counter<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<"Press any key to another Option"<<endl;
        
    }
};

