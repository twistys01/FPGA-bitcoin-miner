#include <iostream>
#include "crypto.h"

using namespace std;

int main() {
//    string s = "";
//    cin >> s;
//    crypto cryp;
//    int totalLength = cryp.pars(s);
//
//    for (int i = 0; i < totalLength; i++) {
////        cout << cryp.input[i];
//    }
//    bool temp1 [32] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1};
//    bool temp2 [32] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0};
//    bool temp3 [32] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1};
//    bool temp4 [32] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0};
//    bool temp5 [32];
//    cryp.add4(temp1, temp2, temp3, temp4 , temp5);
//    cout << "hello";
//    for (int j = 0; j < 32; j++) {
//        cout << temp5[j];
//    }

//    bool tmp1[32] = {1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1};
//    bool tmp2[32];
//    crypto().ROT(tmp1 , 4 , tmp2);
//    for(int i = 0; i < 32; i++)
//    {
//        cout << tmp2[i];
//    }
    bool tmp[512];
    for (int i = 0; i < 512; ++i) {
        tmp[i] = 1;
    }
    bool tmp2[64][32];
    crypto().w(tmp , tmp2);
    cout << "alkai";
    return 0;
}