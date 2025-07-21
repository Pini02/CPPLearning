#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<float> numbers={1.1,2.3,2.4,5.6};
    float average= numbers.at(0)+numbers.at(1)+numbers.at(2)+numbers.at(3);
    average= average/numbers.size();
    cout<<average<<"\n";
    return 0;
}