#include<iostream>
using namespace std;
int main(){
    int amm , var;
    cout<<"Enter the Ammount: ";
    cin>>amm;

    if (amm>=100){
        var = 100;
    }
    else if (amm>=50){
        var = 50;
    } 
    else if (amm>=20){
        var = 20;
    }
    else if (amm>=1){
        var = 1;
    }

    switch (var)
    {
    case 100:
        cout<< "No. of 100Rs Notes =" <<(amm/100)<<endl;
        amm = amm%100;
    case 50:
        cout<< "No. of 50Rs Notes =" <<(amm/50)<<endl;
        amm = amm%50;
    case 20:
        cout<< "No. of 20Rs Notes =" <<(amm/20)<<endl;
        amm = amm%20;
    case 1:
        cout<< "No. of 1Rs Notes =" <<(amm/1)<<endl;
        amm = amm%1;
        break;
    default : cout<<"Ammout should be greater than 0 :(";
    }  
    

}