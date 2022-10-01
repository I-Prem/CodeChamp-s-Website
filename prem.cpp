#include <iostream>
using namespace std;

int main()
{
    class student
    {
    private:
        int id;
        float fee;

    public:
        void get()
        {
            cout << "Enter your id,name ,fee" << endl;
            cin >> id ;
            cin >> fee;
            cout << "ID = " << id << endl;
            cout << "FEE=" << fee << endl;
        }
    };

    return 0;
}