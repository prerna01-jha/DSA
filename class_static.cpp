#include <iostream>
using namespace std;
class employee{
int id;
static int count;
public:
void set_data(){
    cout<<"enter id";
    cin>>id;
    count ++;
}
void get_data(){
    cout<<"employee id is "<<id<<"the total number of employe is "<<count<<endl;;
}

};
int employee :: count;
int main(){
    employee prerna, priyanka, sarita;
    prerna.set_data();
    prerna.get_data();

    priyanka.set_data();
    priyanka.get_data();

    return 0;
}