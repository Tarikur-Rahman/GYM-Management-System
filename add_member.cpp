#include "getch.cpp"
#include "add_member.h"
#include<iostream>
#include<stdio.h>
#include<cstring>
#include<fstream>

using namespace std;
add_member::add_member()
{

}

add_member::~add_member()
{

}

    class declaretion
    {
        public:
        string id,name,age,address,contact;
        string status;
        declaretion(): status("Not"){} 
    };
    class count{
        public:
        int counter;
        count():counter(0){}
    };
    class member:public count,public declaretion
    {
        public:
        declaretion m[15];
        int en;
        string back;
        int memberid;
        int status1,status2;
        int fee;



    void member_data()
    {
        cout<<"How many member do you want to add:  ";
        cin>>en;
        
        for(int i=0;i<en;i++){
            cout<<endl;
            cout<<"ID to Member                 : ";
            cin.ignore();
            getline(cin,m[i].id);

            cout<<endl;
            cout<<"Enter Member Name            : ";
            getline(cin,m[i].name);

            cout<<endl;
            cout<<"Member Age                   : ";
            getline(cin,m[i].age);

            cout<<endl;
            cout<<"Enter Member Address         : ";
            getline(cin,m[i].address);
            cout<<endl;

            cout<<"Enter Member Contact         :";
            getline(cin,m[i].contact);

            memberid++;
            counter++;
            back:
            cout<<endl;
            cout <<"Proceed Dorward [Y/N]        :";
            cin >> back;
            if( back == "Y" || back =="y" )
            {
                cout<<endl;
                cout<<"You filled all entries of "<< i+1 << "/"<<en<<"Member successfully...";
                
                cout<<endl;
            }
            else if( back =="N" || back == "n")
            {
                break;
            }
            else
            {
                cout<<"Wrong Input  :";
                goto back;
            }          
        }
    }
    void display()
    {
        string n;
        cout<<"Enter the member Id              :";
        cin>>n;
        if(n=="0")
        {
            cout<<"Invalid Id Number";
            cout<<"Plz Go Back And Try Again";
        }
        else 
        {   int i;
            for (i =0;i<memberid;i++)
            {
                status1=0;
                if(n==m[i].id)
                {
                    status1=1;
                    break;
                }
            }
            if (status1)
            {
                cout<<endl<<endl;
                cout<<"-------------------------------------------------------------------------"<<endl;
                cout<<"Member's ID                        :"<<m[i].id<<endl;
                cout<<"Member's Name                      :"<<m[i].name<<endl;
                cout<<"Member's Age                       :"<<m[i].age<<endl;
                cout<<"Member's Address                   :"<<m[i].address<<endl;
                cout<<"Member's Contact                   :"<<m[i].contact<<endl;
                cout<<"--------------------------------------------------------------------------"<<endl;
                cout<<"Press any key to another option"<<endl;
            }
            else
            {
                cout<<"No such ID in database"<<endl;
                cout<<"Press any key to another option"<<endl;
            }
        } 
       
    }
    void savefile()
    { 
        ofstream Memberfile("MemberFile.txt",ios::out|ios::app);
        Memberfile.is_open();
        for(int i=0;i<counter;i++)
        {
                Memberfile<<"----------------------------------------------------------"<<endl;
                Memberfile<<"Member's ID                        :"<<m[i].id<<endl;
                Memberfile<<"Member's Name                      :"<<m[i].name<<endl;
                Memberfile<<"Member's Age                       :"<<m[i].age<<endl;
                Memberfile<<"Member's Address                   :"<<m[i].address<<endl;
                Memberfile<<"Member's Contact                   :"<<m[i].contact<<endl;
                Memberfile<<"----------------------------------------------------------"<<endl;
                Memberfile<<endl;
        }
        Memberfile.close();
    }
    void all_memberdata()
    {
        string file;
        ifstream Memberfile("MemberFile.txt");
        while(getline(Memberfile,file))
        {
            cout<<file<<endl;
        }
        Memberfile.close();
    }
    void total_member()
    {
        cout<<endl;
        cout<<"---------------------------------------------------------------------"<<endl;
        cout<<"Total Member's in GYM: "<<counter<<endl;
        cout<<"---------------------------------------------------------------------"<<endl;
        cout<<"Press any key to another option"<<endl;
    }

};