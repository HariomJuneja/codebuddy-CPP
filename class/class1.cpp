/* Program on class concept */

#include<iostream>
using namespace std;

class bank                       /* declaration of class and members of class */
{
int accno;
char name[20];
float bal;

public: void deposit(float amt)                /* function for deposit */
{
bal+=amt;
}

void withdraw(float amt)                       /* function to withdraw */
{
if(bal>amt+500)
{
bal-=amt;
}
else
{
cout<<"insufficient balance"<<endl;
}}

void getdata()                              /* function to get details from user */
{
cout<<"Enter your Details"<<endl;
cout<<"Acc no:"<<endl;
cin>>accno;
cout<<"Name:"<<endl;
cin>>name;
cout<<"Balance:"<<endl;
cin>>bal;
}
void display()                            /* function displaying details of customer */
{
cout<<"Nmae:"<<name<<endl;
cout<<"Acc no:"<<accno<<endl;
cout<<"Balance:"<<bal<<endl;
}
void balenq()
{
cout<<"Balance:"<<bal<<endl;
}
};

int main()
{
bank myacc;                             /* object declaration (Here myacc is my object) and for calling functions I have to use this object */
myacc.getdata();
myacc.display();
cout<<"Enter amount to be deposited"<<endl;
float amt;
cin>>amt;
myacc.deposit(amt);
myacc.balenq();

bank facc;                               /* object declaration */ 
facc.getdata();
facc.display();
cout<<"Enter the amount to be withdrawal"<<endl;
cin>>amt;
facc.withdraw(amt);
facc.balenq();
}

