#include <iostream>

using namespace std;
bool validtraingle(double a, double b, double c) {
    return (a + b > c) && (a + c > b) && (b + c > a);}
int main(){
    double a, b, c;

    cout << "input 1: ";
    cin >> a;
    cout << "input 2: ";
    cin >> b;
    cout << "input 3: ";
    cin >> c;

    if(validtraingle(a, b, c)){
        cout << "numbers from valid traingle: " << endl ;
    }
    else{
        cout << "error! Numbers not valid" << endl;
        return main();
    }
    
}