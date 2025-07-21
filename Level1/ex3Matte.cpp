#include <iostream>
#include <vector>

using namespace std;

int main () {
    vector<float> numeri={34.5,67.4,70.3,39.5};
    float media=numeri.at(0)+numeri.at(1)+numeri.at(2)+numeri.at(3);
    media= media/numeri.size();
    cout<<media;

    return 0;

}