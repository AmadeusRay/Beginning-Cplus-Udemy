// We start with a list of arrays. We have a menu that can average, add, show the smallest number, largest number.
// The menu should repeat and with input validation.
// Each command from the user should follow up with a message corresponding to what their command is.
// If the list is empty, it'll show [ ]. And commands from the user will output that it can't be done.

//Finished but also added a clear function.

#include <iostream>
#include <cctype>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> list = {1, 2, 3, 4, 5, 6, 7, 8};
//vector<int> list = {};

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
    if (list.empty())
    {
        cout<<"[ ]"<<endl;
    }
    else {
        cout<<"[ ";
        for (int num: list) {
            if (num == 1) // why is it 1 and no 0?
            {

            }
            cout << num << " ";\
        }
        cout << "]";
    }

    cout<<endl;
}

void addList(int newNumber)
{
    list.push_back(newNumber);
}

void clearList()
{
    list.clear();
}

int main() {
    char input;
    char lowerInput;

    do {
        cout << "\nP - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "C - Clear List" << endl;
        cout << "Q - Quit" << endl;
        cout << "\nEnter your choice: ";
        cin >> input;
        lowerInput = tolower(input);

        switch (lowerInput) {
            case 'p':
                cout << "Printed list: " << endl;
                printList();
                break;
            case 'a':
                cout << "\nEnter new number:" << endl;
                int newNumber;
                cin>>newNumber;
                addList(newNumber);
                cout<<newNumber<< " was added to the list."<<endl;
                break;
            case 'm':
                if (list.empty())
                {
                    cout<<"Unable to find the average. List is empty."<<endl;
                    break;
                }
                average();
                break;
            case 's':
                if (list.empty())
                {
                    cout<<"Unable to find the smallest. List is empty."<<endl;
                    break;
                }
                smallest();
                break;
            case 'l':
                if (list.empty())
                {
                    cout<<"Unable to find the largest. List is empty."<<endl;
                    break;
                }
               largest();

                break;
            case 'c':
                if (list.empty())
                {
                    cout<<"Unable to clear. List is already empty."<<endl;
                    break;
                }
                list.clear();
                break;
            case 'q':
                cout<<"Goodbye" << endl;
                break;
            default:
                cout<<"Unknown selection, please try again"<< endl;
        }
    } while (lowerInput != 'q');
}
