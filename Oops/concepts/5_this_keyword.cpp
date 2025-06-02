#include<iostream>
using namespace std;
class Hero{
public:
    int health;
    int money;
    string name;

    void getHealth(int health){
        this->health = health;//this keyword is a address to the current object(in 1st case Shivendu and in 2nd case Manish)
    }
    void display(){
        cout << health << endl;
    }
};
int main(){
    Hero Shivendu;
    int health1;
    cout << " Enter Shivendu's Health";
    cin >> health1;
    Shivendu.getHealth(health1);

    Hero Manish;
    int health2;
    cout << "Enter Manish's Health : ";
    cin >> health2;

    Manish.getHealth(health2);
    cout << "Health of Shivendu and Manish are : " << endl;
    Shivendu.display();
    Manish.display();
    return 0;
}