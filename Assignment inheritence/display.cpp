#include<iostream>
using namespace std; 

class display{
    public:

    display(int x){
        cout<<"Integer number is : "<<x<<endl;
    }

    display(double y){
        cout<<"Double number is : "<<y<<endl;
    }

    display(string z){
        cout<<"String is : "<<z<<endl;
    }
};


int main(){

    display(88);

    display(8888.8888);

    display("UK88");
    
    return 0;
}