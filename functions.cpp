#include <iostream>
#include <cmath>
using namespace std;

int min(int a, int b){
    if (a < b){
        return a;
    } else{
        return b;
    }
}

int sumFromOne(int n){

    int sum = 0;
    for (int i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
}
int factorial(int n){
    int fact=1;
    for (int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}

int sumOfDigits(int n){
    int sum=0;
    
    while(n>0){
        int last_num = n%10;
        n/=10;
        sum+=last_num;
    }
    return sum;
    
}
int binomialCoefficient(int n,int r){
    int bc = factorial(n)/(factorial(r)*factorial(n-r));
    return bc;
}

bool checkPrime(int n){
    if (n<=1) return false;
    if (n==2 || n==3) return true;
    if (n%2==0) return false;
    for (int i=3; i<=sqrt(n);i+=2){
        if(n%i==0) return false;
    }
    return true;
}

int main()
{

    // cout << min(14, 12) << endl;
    //cout << sumFromOne(10) << endl;
    //cout <<factorial(10)<<endl;
    //cout <<sumOfDigits(5899)<<endl;
    //cout<<binomialCoefficient(8,2)<<endl;
    cout << (checkPrime(31)?"Prime":"Not Prime")<<endl;
    return 0;
}