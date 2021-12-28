#include <iostream>
#include <stdexcept>
#include <string>
 
using namespace std;
 
class OwnException: public exception{ //class derived from exception
private:
    string a; //declaring string
public:
    OwnException(){
        a = "Default case exception"; //when default thsi is printed
    }
    OwnException(const string& s){
        this->a = a;
    }
    virtual const char* what() const throw(){ //overwriting what()
        return "OwnException";
    }
 
};
 
void types(int n){
    switch(n){
    case 1: //when parameter is 1 a is thrown
        throw 'a';
        break;
 
    case 2: //when parameter is 2, 12 is thrown
        throw 12;
        break;
 
    case 3: //when parameter is 3, bool is true
        throw true;
        break;
 
    default: //default
        throw new OwnException;
    }
    return;
}
int main(){
    try{
        types(1); //try with parameter 1
    }
    catch(char ch){
        cerr<<"Exception caught in main: "<<ch<<endl;
    }
    try{
        types(2); //try with parameter 2
    }
    catch(int i){
        cerr<<"Exception caught in main: "<<i<<endl;
    }
    try{
        types(3); //try with parameter 3
    }
    catch(bool t){
        cerr<<"Exception caught in main: "<<t<<endl;
    }
    try{
        types(4); //try with parameter 4
    }
    catch(OwnException* m){
        cerr<<"Exception caught in main: "<<m->what()<<endl;
    }
    return 1;
}