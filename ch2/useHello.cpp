#include "libHelloSLAM.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
	printHello();
    string a="day to day worry about my future";
    a+=to_string(5);
    for(auto &unit:a)
        cout<<unit<<endl;
	return 0;
}
