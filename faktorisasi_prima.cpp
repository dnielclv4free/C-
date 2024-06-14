#include <iostream>
using namespace std;
bool prima(int num){
    if(num<2){
        return false;

        for(int i=2;i*i<=num;i++){
            if(num%i==0)
                return false;
        }
    }else{
        return true;
    }
}

void factor(int num){
    int i=2;
    while(num!=1){
        if(num%i==0){
            num=num/i;
            if(prima(i))
                cout<<i<<" ";

        }else{
            i+=1;
        }
    }
    cout<<endl;
}
int main(){
    int n,result;
    cin>>n;
    factor(n);
}