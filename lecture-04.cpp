#include <iostream>
using namespace std;

/*Square patterns*/

// int main(){
//     cout<<"Enter the value of n: ";
//     int n;
//     cin>>n;

//     // for (int i=1; i<=n; i++){
//     //     for (int j=1; j<=n;j++){
//     //         cout<<j <<" ";
//     //     }
//     //    cout << endl;
//     // }

//     for (int i=1; i<=n; i++){
//         for (int j=1; j<=n;j++){
//             cout<<j <<(j==n ? "\n" : " ");
//         }
//     }
// }


/*Square patterns but numbers are changing each line*/

// int main(){
//     cout<<"n?: ";
//     int n;
//     cin>>n;
//     int start=1;
//     for (int i=0; i<n; i++){
//         for (int j=start; j<(start+n);j++){
//             cout <<j;
//         }
//         start+=n;
//         cout<<endl;
//     }

//     cout <<"n?: ";
//     int n;
//     cin>>n;

//     // int num=1;
//     // for (int i=0; i<n; i++){
//     //     for (int j=0; j<n; j++){
//     //         cout<<num;
//     //         num++;
//     //     }
//     //     cout<<endl;
//     // }

//     // cout <<"Enter n: ";
//     // int n;
//     // cin>>n;

//     // char letter='A';

//     // for (int i=0; i<n; i++){
//     //     for (int j=0; j<n; j++){
//     //         cout <<letter<<" ";
//     //         letter++;
//     //     }
//     //     cout<<endl;
//     // }
    
// }

/*Triangle Loop*/

int main(){
    cout<<"n?: ";
    int n;
    cin>>n;

    // for (int i=1; i<=n; i++){
    //     for (int j=0; j<i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    /*Loop for characters*/

    // char letter='A';
    // for (int i=1; i<=n;i++){
    //     for (int j=0;j<i;j++){
    //         cout<<letter<<" ";
    //     }
    //     letter++;
    //     cout<<endl;
    // }

    /*Reverse loop*/
    
    // for (int i=1; i<=n; i++){
    //     for (int j=i; j>0;j--){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    /*Floyed's triangle*/
    // char num='A';
    // for (int i=0;i<n;i++){
    //     for (int j=0; j<i+1;j++){
    //         cout<<num<<" ";
    //         num++;
    //     }
    //     cout<<endl;
    // }

    /*Inverse trinagle*/
    for (int i=0; i<n;i++){
        for (int j=0; j<i;j++){
            cout<<" ";
        }
        for (int k=0;k<n-i;k++){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
}