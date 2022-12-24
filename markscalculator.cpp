#include<iostream>
using namespace std;
main(){
string name;
float subject1,subject2,subject3,subject4,subject5,percentage;
cout<<"subject1:";
cin>>subject1;
cout<<"subject2:";
cin>>subject2;
cout<<"subject3:";
cin>>subject3;
cout<<"subject4:";
cin>>subject4;
cout<<"subject5:";
cin>>subject5;
percentage=((subject1+subject2+subject3+subject4+subject5)/500)*100;
cout<<"percentage"<<percentage;
}