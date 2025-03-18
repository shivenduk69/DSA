#include<iostream>
using namespace std;

void priceChange(double &price){
    price *=1.2;
}
int main(){
    double price = 100;
    priceChange(price);
    cout << price;
    return 0;
}