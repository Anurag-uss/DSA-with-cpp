// sort an arry consisting of zeros and ones
#include<iostream>
#include<vector>
using namespace std;

void sortZeros(vector<int> &v){
    int zeros=0;
    int n=v.size();
    for(int ele:v){
        if(ele == 0){
            zeros++;
        }
    }
    for(int i=0;i<n;i++){
        if(i<zeros){
            v[i]=0;
        }
        else v[i]=1;
    }
   
}

int main(){
    int n;
    cout<<"enter the size of array: "<<endl; cin>>n;  //Taking  the size of array.

    vector<int> v;

    //Loop for initializing the array
    cout<<"Enter your Array: "<<endl;
    for(int i=0;i<n;i++){     
        int ele; cin>>ele;
        v.push_back(ele);
    }
    sortZeros(v);

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    return 0;
}