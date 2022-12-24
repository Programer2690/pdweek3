#include<iostream>
using namespace std;
main(){
int pounds,bag,area,cost,costfeet;
cout<<"enter bag size in pounds:";
cin>>pounds;
cout<<"enter cost of the bag:";
cin>>bag;
cost=bag/pounds;
cout<<"enter area covered by each bag in squarefeet:";
cin>>area;
cout<<"cost of fertilizer per pound:"<<cost<<endl;
costfeet=pounds*area;
cout<<"cost of fertilizing area per squarefeet:"<<costfeet;
}
