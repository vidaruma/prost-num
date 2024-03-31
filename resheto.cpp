#include <iostream>
#include <vector>
#include <ctime>
using namespace std;


vector<int> func(int max_num) {
    int p=2;
    vector<int> prost_num = {};
    for (int i=2;i<max_num;i++) {
    prost_num.push_back(i);
    }
    for (int w = 0 ; w < max_num ; w++) {
        int o=p*p;
        for (int f = 0 ; f<prost_num.size();f++) {
            cout<<o<<" , "<<prost_num[f]<<"\n";
            if (prost_num[f]==o) {
                prost_num.erase(prost_num.begin()+f);
                cout<<o<<"\n";
                o+=p;
                }
            if (prost_num[f] > o) {
                o+=p;
                }
            if (o>max_num) {
                break;
            }
        }
        p+=1;
        if (p*p > max_num) {
            break;
        }
    }
return prost_num;
}



int main() {


int ctime_1 = time(NULL);

int max_num = 30;

vector<int> end_nums = func(max_num);

int ctime_2 = time(NULL);

for (int l=0;l<end_nums.size();l++) {
    cout<<end_nums[l]<<"\n";
    }
cout<<ctime_2-ctime_1;

}
