#include<iostream>
using namespace std;
main(){
float fruitprice,vegetableprice,fruitweight,vegitableweight,vegitabletotal,fruittotal,total;
cout<<"enter fruit price:";
cin>>fruitprice;
cout<<"enter vegetable price:";
cin>>vegetableprice;
cout<<"kgs of fruit sell:";
cin>>fruitweight;
cout<<"kgs of vegitable sell:";
cin>>vegitableweight;
vegitabletotal=vegetableprice*vegitableweight;
fruittotal=fruitprice*fruitweight;
total=fruittotal+vegitabletotal;
cout<<"total earning="<<total;
}

