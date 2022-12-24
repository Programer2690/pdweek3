#include<iostream>
using namespace std;
main(){
int initial_velocity,acceleration,time,final_velocity;
cout<<"enter acceleration";
cin>>acceleration;
cout<<"time";
cin>>time;
cout<<"initial velocity";
cin>>initial_velocity;
final_velocity=(time*acceleration)+initial_velocity;
cout<<"final velocity="<<final_velocity;
}