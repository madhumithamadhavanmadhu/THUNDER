/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
int main()
{
  string name;
  string college;
  string email, location;
   cout<<"welcome to weather app";
   cout<<"\n enter the name: ";
   cin>>name;
   cout<<"\n enter the college: ";
   cin>>college;
   cout<<"\nenter your email : ";
   cin>>email;
   cout<<"\nenter your location: ";
   cin>>location;
   int option;
   cout<<"\nEnter your option:";
   cin>>option;
   switch(option)
  {
   case 1:
   cout<<"1. Today"<<endl;
   break;
   case 2:
   cout<<"2. Yesterday"<<endl;
   break ;
   case 3:
   cout<<"3. Tomorrow"<<endl;
   break;
   case 4:
   cout<<"4. Week report"<<endl;
   break;
   }
   int choice ;
   cout<<"Enter your choice: ";
   cin>>choice;
switch(choice)
{
     case 1:
         cout<<"Today's weather : cloudy"<<endl;
         break;

      case 2:
         cout<<"Yesterday's weather : dry"<<endl;
         break;

      case 3:
         cout<<"Tomorrow's weather expected : rainy"<<endl;
         break;

      case 4:
         cout<<"This week's weather report: "<<endl;
         cout<<"Monday: Thunderstorm with a temperature of 20°C."<<endl;
         cout<<"Tuesday: Heatwave with a temperature of 30°C."<<endl;
         cout<<"Wednesday: Cloudy with a temperature of 26°C."<<endl;
         cout<<"Thursday: Rainy with a temperature of 18°C."<<endl;
         cout<<"Friday: Dry with a temperature of 24°C."<<endl;
         break;

      default:
         cout<<"Invalid choice."<<endl;
         break;
   }
   return 0;
}   
