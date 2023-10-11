#include<iostream>
using namespace std;
class employee
{
char name[10];
int age;
int salary;
public:
void employ(void);
void details(void);
};
void employee::employ(void)
{
cin>>name;
cin>>age;
cin>>salary;
}
void employee::details(void)
{
cout<<"name:"<<" "<<name<<endl;
cout<<"age:"<<" "<<age<<endl;
cout<<"salary:"<<" "<<salary<<endl;
} 
int main()
{
    employee emplo[5];
    for(int i=1;i<6;i++)
        {
            cout<<"details of manager:"<<i<<endl;
            emplo[i].employ();
        }
    for(int i=1;i<6;i++)
        {
            cout<<"manager:"<<i<<endl;
            emplo[i].details();
        }
return 0;
}
