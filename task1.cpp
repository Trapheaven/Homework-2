#include <iostream>

using namespace std;
void swap(int *a, int *b) {

    int c = *a;
    *a = *b;
    *b = c;
}
int main(){

    int a, b;
    cout << "Enter number #1: ";
    cin >> a;
    cout << "Enter number #2: ";
    cin >> b;
    swap(a,b);
    cout << "The exchanged numbers are :" << endl;
    cout << "#1 = " << a << endl;
    cout << "#2 = " << b << endl;


}




