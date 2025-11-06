#include<iostream>
using namespace std;
class student
{
    int rollno;
    char sname[100];
    int sub_marks[5];
    float per;
    public:
        void getdata();
        void calc_display();
};

void student:: getdata()
{
    cout<<"Enter your roll no\n";
    cin>>rollno;
    cout<<"Enter student name\n";
    cin>>sname;
    cout<<"Enter five subject marks\n";
    for(int i=0;i<5;i++)
       {
        cin>>sub_marks[i];

       }
}
void student :: calc_display()
{
    cout<<"The rollno is:"<<rollno<<"\n";
    cout<<"The student name is:"<<sname<<"\n";
    per=0.0;
    for(int i=0;i<5;i++)
       {
        cout<<"Marks of sub_marks["<<i<<"]:"<<sub_marks[i]<<"\n";
        per=per+sub_marks[i];

       }
    per=per/5.0;
    cout<<"Total marks in %"<<per<<"\n";

   if(sub_marks[0]<50 ||sub_marks[2]<50 ||sub_marks[3]<50 ||sub_marks[4]<50 )
   {
    cout<<"Overall semester result is: Fail";
   }
   else
   {
    cout<<"Overall semester result is: Pass";
   }
}
int main()

  {
 int n ;

 student s[10];
 cout<<"No of student is n value\n";
 cin>>n;

 for(int i=0; i<n;i++){
    cout<<"\n"<< i<<" student details";

    s[i].getdata();
    s[i].calc_display();}
    return 0;
}