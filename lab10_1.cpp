#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    string x[]={"A","+B","B","+c","C","D","F"};
    srand(time(0));
    cout<<"Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    int i = rand()%9;
    cout<<"You will get "<<x[i]<<" in this 261102.";
    return 0;
}




