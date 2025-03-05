#include<iostream>
using namespace std;


class sum{
    public:
    
    sum(int a, int b){
        int ans = a+b;
        cout<<"Sum of two numbers : "<<ans<<endl;
    };

    sum(int l, int m, int n){
        int res = l+m+n;
        cout<<"Sum of three numbers : "<<res<<endl;
    };

    sum(float x, float y){
        float add = x+y;
        cout<<"Sum of two floating numbers : "<<add<<endl;
    };
};

int main(){

    sum(10,10);
    sum(10,5,5);
    sum(10,5.5);
    return 0;
}

