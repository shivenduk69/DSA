#include<iostream>
using namespace std;
class Car{
    public:
    int price;
    int model_no;
    char name[20];


    float discountedPrice(int x){
        return price*(1.0-0.01*x);
    }

    void display(){
        cout << "Price is " << price << endl;
        cout << "Model No is " << model_no << endl;
        cout << "Name is " << name << endl;
        return;
    }

    void update_discount(int x){
        price = discountedPrice(x);
        return;
    }

    //Setter
    void set_price(float p){
        if(p<0){
            price = 111;//111 is the minimum set price
        }
        price = p;
    }
    // getter
    float get_price(){
        return price;
    }
};
int main(){
    Car c1;
    c1.price = 80000;
    c1.model_no = 19;
    c1.name[0] = 'L';
    c1.name[1] = 'A';
    c1.name[2] = 'M';
    c1.name[3] = '\0';
    int x;// x is percentage which you want to give as discount
    x = 20;
    cout << "Amount after discount is " << c1.discountedPrice(x) << endl;

    c1.update_discount(x);
    c1.display();
    return 0;
}