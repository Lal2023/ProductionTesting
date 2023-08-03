#include <iostream>
using namespace std;

template<class T>
void myFunction(T arg){
    cout  << arg << endl;
}


int main(){

    cout << "Calling the function from within the main" << endl;

    myFunction("Hi");
  
}
