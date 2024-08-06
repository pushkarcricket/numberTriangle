//     1
//   1 2 1
//  1 2 3 2 1
// 1 2 3 4 3 2 1  






#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int space=n-row;
        while(space){
            cout<<" ";
            space=space-1;

        }
        int star=1;
        while(star<=row){
            cout<<"star";
            star=star+1;
        }
        int start=row-1;
        while(start){
            cout<<"start";
            start=start-1;
        }
        cout<<endl;
        row=row+1;

    }
}