#include <iostream>
using namespace std;

int main(){
  int month, year;
  cout<< "Enter in the month (1-12): ";
  cin>> month;
  cout<< "Enter in the year: ";
  cin>>year;

  if((month==2)&& ((year%400==0)||((year%100!=0)&&(year%4==0)))){
    cout<<"29 days";
  }
    else if(month==2){
      cout<<"Number of days is 28";
    }
    
  else if (month==1|| month==3|| month ==5|| month ==7|| month ==8|| month ==10||
    month==12)
  { cout<<"31 days";
    }
  else if (month==4|| month==6 ||month==9|| month==11){
    cout<<"30 days";
    }
  
  }
  