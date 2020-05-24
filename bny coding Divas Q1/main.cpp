#include<bits/stdc++.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> h{2,3,1,5,3,1,1};
    vector<int> pos{5,6,9,11,12,16,20};
    for(int i=0; i<pos.size(); i++){
        int temp = pos.at(i) + h.at(i);
        int j = i;
        for(int j=i+1; j<pos.size(); j++){
            if(pos.at(j) > temp){
                break;
            }else if(pos.at(j) == temp){
                temp += h.at(j);
            }else{
                if(h.at(j) > h.at(i)){
                    temp += h.at(j);
                }
            }
        }
        cout << temp << endl;
    }
    return 0;
}
