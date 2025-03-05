#include<iostream>
using namespace std; 

class area{
    public: 
    float output,sides,radius;

    area(int a){
        sides=a;

        output = sides*sides;
        cout<<"The area of square is : "<<output<<endl;
    }

    area(int length,int bridth){

        output = length*bridth;
        cout<<"The area of rectangle is : "<<output<<endl;
    }

    area(float radius){
        output = 3.14*radius*radius;
        cout<<"The area of square is : "<<output<<endl;
    }
};


int main(){

    area a1(8);
    area a2(4,2);
    area a3(8);
    
    return 0;
}