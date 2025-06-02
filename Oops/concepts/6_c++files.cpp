
//create and write to a file
// #include<iostream>
// #include<fstream>
// using namespace std;
// int main(){

//     //create and open a text file
//     ofstream Myfile("shiv.txt");
    
//     //Write to a file
//     Myfile << "Manish is a good boy";

//     //close file
//     Myfile.close();
//     return 0;
// }


//Read a file
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string myText;

    //read from the text file
    ifstream MyReadFile("shiv.txt");

    //use a while loop to read the file line by  line
    while(getline(MyReadFile, myText)) {
        //Output the text from the file
        cout << myText << endl;
    }

    //close the file
    MyReadFile.close();

    return 0;
}