#include <iostream>
using namespace std;

class teacher
{
public:
    string name;
    int ages;
    double weight;
    int height;

    void setinfo(int n, teacher t[])
    {
        for (int i = 0; i < n; i++)
        {
            cout << "enter name of teacher: " << i + 1 << endl;
            cin >> t[i].name;
            cout << "enter age of teacher: " << i + 1 << endl;
            cin >> t[i].ages;
            cout << "enter weight of teacher: " << i + 1 << endl;
            cin >> t[i].weight;
            cout << "enter height of teacher: " << i + 1 << endl;
            cin >> t[i].height;
        }
    }

    void getinfo(int n, teacher t[])
    {
        for (int i = 0; i < n; i++)
        {
            cout << "name = " << t[i].name << endl;
            cout << "age = " << t[i].ages << endl;
            cout << "weight = " << t[i].weight << endl;
            cout << "height = " << t[i].height << endl;
        }
    }
};
int main()
{
    int n;
    cout << "enter the number of teacher : ";
    cin >> n;
    cout << endl;
    teacher t[n];
    t[n].setinfo(n, t);
    t[n].getinfo(n, t);
    return 0;
}