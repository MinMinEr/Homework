#include<iostream>
#include<iomanip>
using namespace std;
void main(){
cout.fill('*');  cout.width(10);  cout<<setiosflags(ios::left)<<123.45<<endl;}