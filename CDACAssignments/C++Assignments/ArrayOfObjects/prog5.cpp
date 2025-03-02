#include <iostream>
using namespace std;
class Room
{
private:
    int roomNo;
    string roomType;
    string guestName;
    string checkInDate;
    string checkOutDate;

public:
    void getDetails()
    {
        cout << "Enter Room Number : " << endl;
        cin >> roomNo;
        cout << "Enter Room Type : " << endl;
        cin >> roomType;
        cout << "Enter Guest Name : " << endl;
        cin >> guestName;
        cout << "Enter CheckIn Date : " << endl;
        cin >> checkInDate;
        cout << "Enter CheckOut Date : " << endl;
        cin >> checkOutDate;
    }
    void displayDetails()
    {
        cout << "Room Details -----------" << endl;
        cout << "\nRoom Number : " << endl;
        cout << roomNo;
        cout << "\nRoom Type : " << endl;
        cout << roomType;
        cout << "\nGuest Name : " << endl;
        cout << guestName;
        cout << "\nCheckIn Date : " << endl;
        cout << checkInDate;
        cout << "\nCheckOut Date : " << endl;
        cout << checkOutDate;
    }

    int getRoomNo()
    {
        return roomNo;
    }
    void updateGuest(Room *r)
    {
        int rn;
        cout << "Enter room no you want to change the guest : " << endl;
        cin >> rn;

        for (int i = 0; i < 5; i++)
        {
            if (r[i].roomNo == rn)
            {
                string gs;
                cout << "\nEnter new Guest Name  : " << endl;
                cin >> gs;
                string co;
                cout << "\nEnter new Check Out Date : " << endl;
                cin >> co;
                r[i].guestName = gs;
                r[i].checkOutDate = co;
            }
        }

        for (int i = 0; i < 5; i++)
        {
            r[i].displayDetails();
        }
    }

    void searchRoom(Room *r)
    {
        int rn;
        cout << "Enter room to search : " << endl;
        cin >> rn;
        for (int i = 0; i < 5; i++)
        {
            if (rn == r[i].getRoomNo())
            {
                r[i].displayDetails();
                // string gs;
                // cout << "\nEnter new Guest Name  : " << endl;
                // cin >> gs;
                // string co;
                // cout << "\nEnter new Check Out Date : " << endl;
                // cin >> co;
                // r[i].guestName = gs;
                // r[i].checkOutDate = co;
                // r[i].displayDetails();
            }
        }
    }
};
int main()
{
    Room *r;
    r = new Room[5];
    for (int i = 0; i < 5; i++)
    {
        r[i].getDetails();
    }
    for (int i = 0; i < 5; i++)
    {
        r[i].displayDetails();
    }
    r->searchRoom(r);
    r->updateGuest(r);
}
