#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n=0,m=0;
    const int burger=69;
    const int fries=39;
    const int cokecola=19;
    vector <int> order;
    while (true){
        cout<<"pls input number 1=burger 2=fries 3=cokecola 0=end : ";
        cin>>n;
        if (n == 0){
            break;
        }
        else if (n<1 || n>3){
            continue;
        }
        else{
            order.push_back(n);
        }
    }
    for (int i=0;i<order.size();i++){
        switch (order[i]){
        case 1:
            m += 69;
        case 2:
            m += 39;
        case 3:
            m += 19;
        }
    }
    cout<<m;
}