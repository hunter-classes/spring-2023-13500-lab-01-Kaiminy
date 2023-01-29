#include <iostream>
using namespace std;

int main(){
  int year;
  cout<<"Enter year: ";
  cin>> year;

  if (year % 4 !=0){
    cout<<"Common Year";
  } else if (year % 100 !=0){
  cout<<"Leap Year";
  } else if (year % 400 !=0){
    cout<<"Common Year";
    }else {
      cout<<"Leap Year";
    }
    return 0;
}

