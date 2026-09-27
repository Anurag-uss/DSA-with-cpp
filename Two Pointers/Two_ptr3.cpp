/*sort the array in such a way that all the even numbers must be place at the
begining and odds at the end of the array
*/

#include<iostream>
#include<vector>
using namespace std;

void sortZeros(vector<int> &v){
    
    int l_ptr=0;
    int r_ptr=v.size()-1;
    while(l_ptr<r_ptr){
        if(v[l_ptr]%2!=0 && v[r_ptr]%2==0){
            int temp=v[l_ptr];
            v[l_ptr++]=v[r_ptr];
            v[r_ptr--]=temp;
        }
        if(v[l_ptr]%2==0){
            l_ptr++;
        }
        if(v[r_ptr]%2!=0){
            r_ptr--;
        }
    }
    return;
}

int main(){
    vector<int> v;
    int n;
    cout<<"Enter the size of the array: "<<endl; cin>>n;
    cout<<"Enter your array: "<<endl;
    for(int i=0;i<n;i++){
        int ele; cin>>ele;
        v.push_back(ele);
    }

    sortZeros(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

