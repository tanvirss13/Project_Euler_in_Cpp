#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main(){
    std::vector<int> x;
    std::list<int> dest(x.begin(), x.end()) ;
    int sum;
    for(int i=1; i<1000; i++){
        if(i%3==0 || i%5==0){
            dest.push_back(i);
        }
    }
    for(const int &e: dest){
        sum += e;
    }
    cout << sum << " ";
    return 0;
}
