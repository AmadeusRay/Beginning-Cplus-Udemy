#include <iostream>

using namespace std;

int smallRooms;
int largeRooms;

const double largeRoomPrice{35};
const double smallRoomPrice{25};

const float tax {.06};

int main()
{
    cout<<"Welcome to Frank's Carpet Cleaning Service" << endl;
    cout<<"How many small and large rooms would you like cleaned?"<< endl;
    cin>>smallRooms>>largeRooms;

    int cost = ((smallRooms*smallRoomPrice)+(largeRooms*largeRoomPrice));
    int total = cost + (cost*tax);

    cout<<"Your total is "<< total<<endl;
}
