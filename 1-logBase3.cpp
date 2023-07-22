#include <iostream>
#include <cmath>
using namespace std;

int recursao(int num, int log){

    if(num == 1)

        return log;

    else{

        num = num / 3;
        log++;
        return recursao(num, log);
        
    }
}

int main(){

    int pot3, log = 0;
    cin >> pot3;

    log = recursao(pot3, log);

    cout << log;

    return 0;
}