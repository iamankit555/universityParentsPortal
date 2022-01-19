#include<iostream>
using namespace std;
#include<string.h>
#include<fstream>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
#include<conio.h>
#include<iomanip>
class ums
{
private:
    char time[20];
    int block;
    int roomno;
    char subjectname[30];
    char dayname[30];
    char date[30];
    char studentname[30];
    char fathername[30];
    char mothername[30];
    char address[100];
    int percentage;
    char branch[30];
    char name[30];
    char message1[100];
    int totalclass;
    int present;
    int marks;
    int fullmarks;
    int code;
    int idno;
public:
    ums()
    {
        idno=11703164;
    strcpy(name,"No name");
    strcpy(message1,"no message avalable");
    strcpy(subjectname,"No name");
    strcpy(dayname,"No day name");
    strcpy(date,"No date");
    strcpy(studentname,"No name");
    strcpy(fathername,"No name");
    strcpy(mothername,"No name");
    strcpy(address,"No name");
    strcpy(branch,"No name");
    strcpy(name,"No name");
    present=100;
    code=0;
    fullmarks=100;
    marks=0;
    present=0;
    totalclass=40;
    }
    void add_lecture_time_table();
    void add_examintion_department();
    void add_admission();
    void add_announcement();
    void add_attendance();
    void add_marks();

    void show_lecture_time_table();
    void show_lecture_time_table_title();
    void show_examintaion_department();
    void show_examintaion_department_title();
    void show_admission();
    void show_admission_title();
    void show_announcement();
    void show_attendance_title();
    void show_attendance();
    void show_marks();
    void show_marks_title();

    void store_lecture_time_table();
    void store_examintaion_department();
    void store_admission();
    void store_announcement();
    void store_attendance();
    void store_marks();

    void view_all_lecture_time_table();
    void view_all_examintaion_department();
    void view_all_admission();
    void view_announcement();
    void view_all_attendance();
    void view_all_marks();
};
//add part
void ums::add_marks()
{
    cout<<"enter code of subject";
    cin>>code;
    cout<<"enter subject name";
    cin.ignore();
    cin>>subjectname;
    cout<<"Eneter marks";
    cin>>marks;
}
void ums::add_attendance()
{
    present++;
    cout<<"Enter subject code";
    cin>>code;
    cout<<"Enter subject name";
    cin.ignore();
    cin.getline(subjectname,29);
    percentage=50*(present/100);
}
void ums::add_lecture_time_table()
{
    cout<<"\nEnter Time::";
    cin.ignore();
    cin.getline(time,29);
    cout<<"\nEnter Block::";
    cin>>block;
    cout<<"\nEtner room no::";
    cin>>roomno;
    cout<<"\nEnter subject name::";
    cin.ignore();
    cin.getline(subjectname,29);
    cout<<"\nEnter day name::";
    cin.getline(dayname,29);

}
void ums::add_examintion_department()
{
    cout<<"\nEnter date";
    cin.ignore();
    cin>>date;
    cout<<"\nEnter Time::";
    cin.ignore();
    cin.getline(time,29);
    cout<<"\nEnter Block::";
    cin>>block;
    cout<<"\nEtner room no::";
    cin>>roomno;
    cout<<"\nEnter subject name::";
    cin.ignore();
    cin.getline(subjectname,29);
    cout<<"\nEnter day name::";
    cin.getline(dayname,29);
}
void ums::add_admission()
{
    cout<<"\nEnter student name::";
      cin.ignore();
    cin.getline(name,29);
    cout<<"Enter Father name::";
      cin.ignore();
    cin.getline(fathername,29);
      cin.ignore();
    cout<<"Enter mother name::";
      cin.ignore();
    cin.getline(mothername,29);
      cin.ignore();
    cout<<"Enter Address";
      cin.ignore();
    cin.getline(address,99);
    cout<<"Enter percentage in 12th";
    cin>>percentage;
    cout<<"Enter branch name";
    cin>>branch;
}
void ums::add_announcement()
{
    cout<<"Enter Branch name";
    cin.ignore();
    cin.getline(branch,20);
    cout<<"Write message for student";
      cin.ignore();
    cin.getline(message1,100);
}
void ums::show_marks()
{
    cout<<code<<setw(20)<<subjectname<<setw(19)<<fullmarks<<setw(15)<<marks<<endl;
}
void ums::show_marks_title()
{
    cout<<"code"<<setw(20)<<"subjectname"<<setw(19)<<"fullmarks"<<setw(20)<<"marks obtained"<<endl;
    cout<<"-------------------------------------------------------------------------------------------------\n\n";
}
void ums::show_lecture_time_table()
{
    cout<<subjectname<<setw(16)<<block<<setw(15)<<roomno<<setw(17)<<time<<setw(14)<<dayname<<endl;
}
void ums::show_lecture_time_table_title()
{
    cout<<"subject"<<setw(15)<<"block"<<setw(15)<<"roomno"<<setw(15)<<"time"<<setw(14)<<"dayname"<<endl;
    cout<<"---------------------------------------------------------------------------------------\n";
}
void ums::show_examintaion_department()
{
    cout<<date<<setw(13)<<subjectname<<setw(15)<<block<<setw(16)<<roomno<<setw(14)<<time<<setw(17)<<dayname<<endl;
}
void ums::show_examintaion_department_title()
{
    cout<<"   Date"<<setw(15)<<"subject"<<setw(15)<<"block"<<setw(16)<<"roomno"<<setw(14)<<"time"<<setw(17)<<"dayname"<<endl;
    cout<<"---------------------------------------------------------------------------------------\n";
}
void ums::show_admission()
{
    cout<<"\n\n\t\t****STUDENT DETAILS****\n\n";
    cout<<"\nRegistration no="<<idno;
    cout<<"\nname=  "<<name;
    cout<<"\nfather="<<fathername;
    cout<<"\nmother="<<mothername;
    cout<<"\npercentage="<<percentage;
    cout<<"\nBranch="<<branch;
}
void ums::show_announcement()
{
    cout<<"\n\nToday Annoucement";
    cout<<"branch="<<branch;
    cout<<"\n\n";
    cout<<message1;
}
void ums::show_attendance()
{
    cout<<code<<setw(21)<<subjectname<<setw(16)<<present<<setw(20)<<totalclass<<setw(20)<<"100%";
}
void ums::show_attendance_title()
{
    cout<<"code"<<setw(21)<<"subject"<<setw(16)<<"present"<<setw(20)<<"totalclass"<<setw(20)<<"percentage\n";
    cout<<"--------------------------------------------------------------------------------------\n\n";
}
void ums::store_marks()
{
    ofstream fout;
    fout.open("marks.dat",ios::app|ios::binary);
    fout.write((char*)this,sizeof(*this));
    fout.close();
}
void ums::store_attendance()
{
    ofstream fout;
    fout.open("attendance.dat",ios::app|ios::binary);
    fout.write((char*)this,sizeof(*this));
    fout.close();
}
void ums::store_announcement()
{
    ofstream fout;
    fout.open("annoucement.dat",ios::out|ios::binary);
    fout.write((char*)this,sizeof(*this));
    fout.close();
}
void ums::store_lecture_time_table()
{
    ofstream fout;
    fout.open("timetable.dat",ios::app|ios::binary);
    fout.write((char*)this,sizeof(*this));
    fout.close();
    cout<<"\nTime table added successfully in Database";
}
void ums::store_examintaion_department()
{
    ofstream fout;
    fout.open("examintion.dat",ios::app|ios::binary);
    fout.write((char*)this,sizeof(*this));
    fout.close();
    cout<<"\nExamintion table added successfully in Database";
}

void ums::store_admission()
{
    ofstream fout;
    fout.open("admission.dat",ios::out|ios::binary);
    fout.write((char*)this,sizeof(*this));
    fout.close();
    cout<<"\nstudent details added successfully in Database";
}
void ums::view_all_marks()
{
    int x=0;
    ifstream fin;
    fin.open("marks.dat",ios::in|ios::binary);
    fin.read((char*)this,sizeof(*this));
    if(!fin)
        cout<<"Data not avalable";
    else
    {
         show_marks_title();
        while(!fin.eof())
    {
        show_marks();
        fin.read((char*)this,sizeof(*this));
        x++;
    }
    }
    fin.close();
    cout<<"\n\n total subject ="<<x;
}
void ums::view_all_attendance()
{
    int x=0;
    ifstream fin;
    fin.open("attendance.dat",ios::in|ios::binary);
    fin.read((char*)this,sizeof(*this));
    if(!fin)
        cout<<"Data not avalable";
        else
    {
    show_attendance_title();

    while(!fin.eof())
    {
        show_attendance();
        fin.read((char*)this,sizeof(*this));
        x++;
    }
    }
    fin.close();
}
void ums::view_announcement()
{
    int x=0;
    ifstream fin;
    fin.open("annoucement.dat",ios::in|ios::binary);
    fin.read((char*)this,sizeof(*this));
    if(!fin)
        cout<<"Data not avalable";
        else
        {
             while(!fin.eof())
    {
        show_announcement();
        fin.read((char*)this,sizeof(*this));
        x++;
    }
    fin.close();
        }
    cout<<"\n\n total annoucemnt="<<x;
}
void ums::view_all_lecture_time_table()
{
    ifstream fin;
    int x=0;
    fin.open("timetable.dat",ios::in|ios::binary);
    fin.read((char*)this,sizeof(*this));
    if(!fin)
        cout<<"Data not avalable\n";
    else
    {
        show_lecture_time_table_title();
        while(!fin.eof())
        {
          show_lecture_time_table();
          fin.read((char*)this,sizeof(*this));
          x++;
        }
        fin.close();
    }
    cout<<"Total Number of time table"<<x;
}
void ums::view_all_examintaion_department()
{
    ifstream fin;
    int x=0;
    fin.open("examintion.dat",ios::in|ios::binary);
    fin.read((char*)this,sizeof(*this));
    if(!fin)
        cout<<"Data not avalable\n";
    else
    {
        show_examintaion_department_title();
        while(!fin.eof())
        {
          show_examintaion_department();
          fin.read((char*)this,sizeof(*this));
          x++;
        }
        fin.close();
    }
    cout<<"\n\nTotal Number of Exam Avalable :"<<x;
}
void ums::view_all_admission()
{
    ifstream fin;
    fin.open("admission.dat",ios::in|ios::binary);
    fin.read((char*)this,sizeof(*this));
    if(!fin)
        cout<<"Data not avalable\n";
    else
    {
        while(!fin.eof())
        {
          show_admission();
          fin.read((char*)this,sizeof(*this));
        }
        fin.close();
    }
}
int parents_menu()
{
    int choice;
    cout<<"\n\n\n\t\t\t\t\t\t********PARENTS PORTAL********\n\n";
    cout<<"\n\t\t\t\t\t\t\t1.today lecture";
    cout<<"\n\t\t\t\t\t\t\t2.Attendance";
    cout<<"\n\t\t\t\t\t\t\t3.Announcemnet";
    cout<<"\n\t\t\t\t\t\t\t4.view marks";
    cout<<"\n\t\t\t\t\t\t\t5.Exam Avalable";
    cout<<"\n\t\t\t\t\t\t\t6.student details";
    cout<<"\n\t\t\t\t\t\t\tEnter your choice";
    cin>>choice;
    return choice;
}
int managment_menu()
{
    cout<<"\n\n\n\t\t\t\t\t\t     *******MANAGMENT PORTAL*******\n\n";
    cout<<"\n\t\t\t\t\t\t\t1.Add lecture table";
    cout<<"\n\t\t\t\t\t\t\t2.Add marks ";
    cout<<"\n\t\t\t\t\t\t\t3.Add student details";
    cout<<"\n\t\t\t\t\t\t\t4.Add attendance ";
    cout<<"\n\t\t\t\t\t\t\t5.Add exam time table";
    cout<<"\n\t\t\t\t\t\t\t6.Add announcement";
    int choice;
    cout<<"\n\n\t\t\t\t\t Enter your choice";
    cin>>choice;
    return choice;
}
int menu()
{
   time_t t;
   time(&t);
   SYSTEMTIME stime;
   GetSystemTime(&stime);
     int choice;
    cout<<ctime(&t)<<stime.wDay<<"/"<<stime.wMonth<<"/"<<stime.wYear;
    cout<<"\n\n\n\t\t\t\t\tLOVELY PROFFESSIONAL UNIVERSITY  MANAGMENT SYSTEM\n\n";
    cout<<"\n\t\t\t\t\t\t\t1.MANAGMENT PORTAL";
    cout<<"\n\t\t\t\t\t\t\t2.PARENTS   PORTAL";
    cout<<"\n\n\t\t\t\t\t Enter choice :";
    cin>>choice;
    return choice;
}

int main()
{
    ums u;
    char x;
    int regis;
    int choice;
    int pass;
    int regis1;
    int pass1;
    int flag=0;
    int flag1=0;
    int i=0;
    while(1)
    {
     m:
    system("cls");
    switch(menu())
    {
        y:
    case 1:
        l:
             cout<<"\n\n\t\t\t\t\t\t\tREGISTRATION N0:: ";
             cin>>regis1;
              cout<<"\t\t\t\t\t\t\tPASSWORD::";
              cin>>pass1;
              if(regis1==11703164 && pass1==12345)
              {

             switch(managment_menu())
             {
             case 1:
               u.add_lecture_time_table();
               u.store_lecture_time_table();
               break;
             case 2:
                u.add_marks();
                u.store_marks();
                break;
             case 3:
                 u.add_admission();
                 u.store_admission();
                 break;
             case 4:
                u.add_attendance();
                u.store_attendance();
                break;
             case 5:
                 u.add_examintion_department();
                 u.store_examintaion_department();
                 break;
             case 6:
                u.add_announcement();
                u.store_announcement();
                break;
             }

             cout<<"\n\n\t\t Press y for continue";
             cout<<"\n\n\t\t Press M for main menu";
             cout<<"\n\n\t\t Press any key for exit";
             cin>>x;
             if(x=='y'||x=='Y')
                goto y;
             else if(x=='m'||x=='n')
                goto m;
              else
             {
                cout<<"\n\n\t\t\t THANKS FOR USING MY APPLICATION\n";
                cout<<"----------------------------------------------";
                 exit(0);
             }
             break;
             }
             else
             {
                  cout<<"\t\t\t\t\t\t\tWrong password\n\n";

               flag1++;

               if(flag1==3)
               {
                   cout<<"\t\t\t\tSORRY YOU HAVE EXCEEDED THE LIMIT !!!\n";
                   cout<<"\t\t\t\t----------------------------------";
                   exit(0);
               }
               cout<<"\t\t\t\tYOU HAVE "<<(3-flag1)<<" CHANCE!!!";
               cout<<"TRY again!!";
               goto l;

             }
    case 2:
         h:
           cout<<"\n\n\t\t\t\t\t\t\tREGISTRATION N0::";
           cin>>regis;
           cout<<"\t\t\t\t\t\t\tPASSWORD::";
           cin>>pass;
           if(regis==11703164&&pass==12345)
           {
        a:
           switch(parents_menu())
           {
           case 1:
               u.view_all_lecture_time_table();
               break;
           case 2:
               u.view_all_attendance();
               break;
           case 3:
               u.view_announcement();
               break;
           case 4:
               u.view_all_marks();
               break;
           case 5:
               u.view_all_examintaion_department();
               break;
           case 6:
               u.view_all_admission();
               break;
           }
             cout<<"\n\n\t\t Press y for continue";
             cout<<"\n\n\t\t Press M for main menu";
             cout<<"\n\n\t\t Press any key for exit";
             cin>>x;
             if(x=='y'||x=='Y')
                goto a;
             else if(x=='m'||x=='n')
                goto m;
             else
             {
                cout<<"\n\n\t\t\t THANKS FOR USING MY APPLICATION";
                 exit(0);
             }

        break;
           }
           else
           {
               cout<<"\t\t\t\t\t\t\tWrong password\n\n";

               flag++;

               if(flag==3)
               {
                   cout<<"\t\t\t\tSORRY YOU HAVE EXCEEDED THE LIMIT !!!\n";
                   cout<<"\t\t\t\t----------------------------------";
                   exit(0);
               }
               cout<<"\t\t\t\tYOU HAVE "<<(3-flag)<<" CHANCE!!!";
               cout<<"TRY again!!";
               goto h;

           }



    }}}

