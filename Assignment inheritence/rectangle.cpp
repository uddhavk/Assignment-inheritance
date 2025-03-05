#include<iostream>
using namespace std; 

class rectangle{
    public:

    float height;
    float width;

    rectangle(){
        height=1;
        width=1;
        cout<<"Height : "<<height<<"\t"<<"Width : "<<width<<endl;
    }

    rectangle(float val){
        height=val;
        width=val;
        cout<<"Height : "<<height<<"\t"<<"Width : "<<width<<endl;
    }

    rectangle(float val1, float val2){
        height=val1;
        width=val2;
        cout<<"Height : "<<height<<"\t"<<"Width : "<<width<<endl;
    }

};


int main(){

    rectangle r1;
    rectangle(8.8);
    rectangle(8.8,88.88);
    
    return 0;
}