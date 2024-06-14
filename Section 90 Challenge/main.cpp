#include <iostream>
#include <cctype>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> list = {1, 2, 3, 4, 5, 6, 7, 8};

void average()
{
    int total = 0;
    int count = 0;
    for (int num:list)
    {
        total+=num;
        count++;
    }
    int averageOut = total/count;
    cout<<"The average is "<< averageOut <<endl;
}

void smallest()
{
    int largestNum = *min_element(list.begin(), list.end());
    cout<<"The largest number is "<< largestNum << endl;
}

void largest()
{
    int largestNum = *max_element(list.begin(), list.end());
    cout<<"The largest number is "<< largestNum << endl;
}

void printList()
{
    for (int num:list)
    {
    cout<<num<<" ";
    }
    cout<<endl;
}

void addList(int newNumber)
{
    list.push_back(newNumber);
}

int main() {
    char input;
    char lowerInput;

    do {
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;

        cin >> input;
        lowerInput = tolower(input);

        switch (lowerInput) {
            case 'p':
                cout << "printed list: " << endl;
                printList();
                break;
            case 'a':
                cout << "enter new number:" << endl;
                int newNumber;
                cin>>newNumber;
                addList(newNumber);
                break;
            case 'm':
                average();
                break;
            case 's':
                smallest();
                break;
            case 'l':
               largest();
                break;
            case 'q':
                cout<<"Good bye" << endl;
        }
    } while (lowerInput != 'q');
}
