#include <iostream>
using namespace std;

int main() {
    int t,n,i;
    cin>>t;
    while(t--){
        cin>>n;
        char arr[n+1];

        cin>>arr;

        bool check =1;

        for(i-0;i<n;i++){
            if(arr[i]!=arr[n-1-i]){
                check =0;
                break;
            }
        }
        if(check==1)
        {
            cout<<"palindrome"<<endl;
        }
        else{
            cout<<"Not palindrome"<<endl;
        }
    }


	return 0;
}

