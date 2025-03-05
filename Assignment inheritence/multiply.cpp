#include<iostream>
using namespace std;


class multiply{
    public:
    
    multiply(int a, int b){
        int ans = a*b;
        cout<<"Multiplication of two numbers : "<<ans<<endl;
    };

    multiply(int l, int m, int n){
        int res = l*m*n;
        cout<<"Multiplication of three numbers : "<<res<<endl;
    };

    multiply(float x, float y){
        float mul = x*y;
        cout<<"Multiplication of two floating numbers : "<<mul<<endl;
    };
};

int main(){

    multiply(10,10);
    multiply(10,5,5);
    multiply(10,5.5);
    return 0;
}

