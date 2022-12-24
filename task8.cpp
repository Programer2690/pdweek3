#include<iostream>
using namespace std;
main(){
int num,total;
cout<<"enter four digit number:";
cin>>num;
total=(num%10)+(num/10)%10+(num/100)%10+(num/1000)%10;
cout<<"total="<<total;
}