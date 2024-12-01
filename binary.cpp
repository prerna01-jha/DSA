#include<iostream>
using namespace std;
#include<conio.h>
class A{
int x,y;
public:
void input() {
 cin>>x>>y;
}
void display() {
cout<<"\nx="<<x<<"\ny="<<y<<"\nx+y="<<x+y;
}
A operator+(A p ); //overload binary + operator
};

A A :: operator+(A p) {
 A t;
 t.x=x + p.x;
 t.y=y + p.y;
 return t;
}
int main(){
A a1, a2, a3;
a1.input();
a2.input();
a3=a2+a1; //activates operator+() function
a3.display();
getch();
return 0;
}