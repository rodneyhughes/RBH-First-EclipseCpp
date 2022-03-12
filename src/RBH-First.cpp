//============================================================================
// Name        : RBH-First.cpp
// Author      : Rodney B Hughes
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <limits>

using namespace std;

string getNumDay(string);

const int SIZE=5;

int main(){

	int nums[SIZE]={1,2,3,4,5};

     string alphaDay="", numDay;
     while(alphaDay != "exit")
     {
    	 cout << "Enter a day of the week, exit to end:" ;
    	 cin >> alphaDay;
    	 numDay=getNumDay(alphaDay);
    	 if(alphaDay != "exit")
    		  cout << alphaDay << " is the " << numDay << " day of the week" << endl ;
     }
     cout <<"numbers in array:";
     for(int i=0; i<SIZE; i++)
	{
    	 cout << nums[i] <<", ";
     }
     cout<<endl;
     cout<< "Press a key to end the program";

     std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
     cin.get();
     cout<<"Thank You for using my program" << endl << "Have a great day";

     return 0;

}

string getNumDay(string day){

   if (day=="Sunday")
       return "1st";
   if (day=="Monday")
       return "2nd";
   if (day=="Tuesday")
       return "3rd";
   if (day=="Wednesday")
       return "4th";
   if (day=="Thursday")
       return "5th";
   if (day=="Friday")
       return "6th";
   if (day=="Saturday")
       return "7th";
   return "none";
}
