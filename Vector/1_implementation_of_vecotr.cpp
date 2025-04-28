// in this program we are going to design our own vector

#include<iostream>
using namespace std;
template<typename T>
class vector{
    int cs;//current size
    int ts;//maximum size
    T *arr;//pointer to the array
    
    public:
    vector(){
        cs = 0;
        ts = 1;
        arr = new T[ts];
    }
    void push_back(T d){
        if(cs == ts){
            //Array is full
            T* oldArr = arr;
            arr = new T[2*ts];//ts for total size
            ts = 2*ts;
            for(int i = 0; i<cs; i++){
                arr[i] = oldArr[i];
            }
            //clear the old memory
            delete [] oldArr;
        }
        arr[cs] = d;
        cs++;
    }
    void pop_back(){
        cs--;
    }
    T front(){
        return arr[0];
    }
    T back(){
        return arr[cs-1];
    }
    bool empty(){
        return cs==0;
    }
    int capacity(){
        return ts;
    }
    T at(int i){
        return arr[i];
    }

    //Operator Overloading->isse vector main array ke hi jaisa random access kar pate hain
    T operator[](int i){
        return arr[i];
    }

};
int main(){
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << "front is " << v.front() << endl;
    cout << "back is " << v.back() << endl;
    
    cout << v.empty();

    return 0;
}