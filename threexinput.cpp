// Nash Steed _ ucq8hz _ Apr 11 2022 _ "threexinput.cpp"
#include <iostream>
#include <cstring>
#include "timer.h"
using namespace std;

extern "C" int threexplusone(int n);

int main(){
    timer t;
	int n;
    int s;
	// prompt for number
    cout << "Enter a number: ";
	cin >> n;
    cout << "Enter iterations of subroutine: ";
    cin >> s;

    double ct=0.0;
    int steps;
    t.start();
    for (int i=0;i<s;i++){
        steps = threexplusone(n);
    }
    t.stop();
    ct=t.getTime();
    ct/=s;
    
    cout << "Steps: " << steps << endl;

    return 0;

}