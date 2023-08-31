#include<iostream>
using namespace std;
class addition{
  public: 
   int  a;
   int  b;
   
   
   void add();
   void sub();
    


};
void addition::add(){

    int c=10+20;
    std::cout<<"addtion of a+b"<<c<<"\n";

}
void addition::sub(){
    int c=10-5;
    std::cout<<"substraction of a-b"<<c;
}


int main(){
    int a=20,b=10;
    addition obj;
    obj.add();
    obj.sub();
}
