#include<iostream>
using namespace std;
main(){
float adtick,chtick,nadtick,nchtick,poa,poc,percent,total,after;
cout<<"enter adult ticket price:";
cin>>adtick;
cout<<"enter child ticket price:";
cin>>chtick;
cout<<"number of adult tickets sold:";
cin>>nadtick;
cout<<"number of child tickets sold:";
cin>>nchtick;
poa=adtick*nadtick;
poc=chtick*nchtick;
total=poa+poc;
cout<<"enter percentage to donate:";
cin>>percent;
after=total-((percent/100)*total);
cout<<"total amount generated="<<total<<endl;
cout<<"amount after donation"<<after;
}