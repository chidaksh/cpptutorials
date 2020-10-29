#include <iostream>
using namespace std;
//a simple fortune programme
int main(){
int date,time,hash1;
cout<<"give date(DDMMYYYY) and time(HHMM)"<<endl;
cin>>date>>time;
hash1=(date+time)%3;
if(hash1==0){
cout<<"rock man"<<endl;
}
else{
if(hash1==1){
cout<<"be happy!!"<<endl;
}
else{
cout<<"sad!!"<<endl;
}
}
return 0;
}
