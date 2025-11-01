#include <iostream>
#include <math.h>
using namespace std;


int decimalToBinary(int dec){
    int i=0, bin_num=0, final_bin=0;

    while(dec>0){
        bin_num=dec%2;
        dec/=2;
        final_bin+=bin_num*(pow(10,i));
        i++;
    }
    return final_bin;
  
}

int binaryToDecimal(int bin){
    int final_dec = 0, power = 0;

    while(bin>0){
        int digit = bin%10;
        bin/=10;
        final_dec+=digit*(pow(2,power));
        power++;
    }
    return final_dec;
}

int main(){

    
    //cout<<decimalToBinary(10)<<endl;
    //cout<<binaryToDecimal(1101)<<endl;
    cout<<5+10*2<<endl;
    return 0;
}