#include "iostream"
using namespace std;


int main(){
    // char letter;
    // cout<<"Enter character: ";
    // cin>>letter;

    // if (letter >='a' && letter <='z'){
    //     cout<<"The character is Lowercase\n";
    // } else{
    //     cout<<"The character is Uppercase\n";
    // }
    //cout << ((letter >='a' && letter <='z') ? "The character is Lowercase\n" : "The character is Uppercase\n");

    // int count=1;
    
    // while (count<=5)
    // {
    //     cout<<count<<" "<<endl;
    //     count++;
    // }
    
    // for (int i=1; i<=10; i++){
    //     cout<<"Hello " <<i<<" times\n";
    // }

    // int n,i;
    // cout<<"Enter number n: ";
    // cin>>n;
    // int sum=0;

    // while(i<=n){
    //     sum+=i;
    //     i++;
    // }
    // cout<<"The sum is "<<sum<<endl;

    int n;
    cout<<"Enter number to check: ";
    cin>>n;
    bool isPrime;
    for (int i=2; i<=(n-1); i++){
        if(n%i==0){
            isPrime = false;
            break;
        } else {
            isPrime = true;
        }
    }
    cout << (isPrime? "It's Prime": "It's not prime") <<endl;
    return 0;
}