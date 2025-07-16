// in this program we will implement a phone which will keep person's name along with phone number

#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main(){
    unordered_map<string, vector<string>> phonebook;

    phonebook["Aayush"].push_back("1234");
    phonebook["Aayush"].push_back("1432");

    phonebook["Manish"].push_back("9798");

    for(pair<string, vector<string>> contact: phonebook){
        cout << contact.first << " ";
        for(string num: contact.second){
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}