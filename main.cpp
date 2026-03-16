#include <iostream>
#include <iomanip>

using namespace std;

#include "Time.h"

int main(){
    struct Time t1,t2,t3;
    cout<<"t1(h m s): ";
    getTime(t1);
    cout<<"t2(h m s): ";
    getTime(t2);
    t3=subtract(t2,t1); //t3=t2-t1
    cout<<"t3 ";
    display(t3);
}
