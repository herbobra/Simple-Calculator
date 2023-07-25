#include <iostream>


using namespace std;

bool check_prime();


int main() {
    string input;
    double base;
    bool error = 0;
    cout << "First number -> ";
    cin >> base;
    while (not error)
    {
        double number;
        char operation;
        cout << "operation -> ";
        cin >> operation;
        if (operation == '=') {
            cout << base;
            break;
        }
        else {
            cout << "number -> ";
            cin >> number;
            switch (operation)
            {
            case '+':
                base += number;
                break;
            case '-':
                base -= number;
                break;
            case '*':
                base = base * number;
                break;
            case '/':
                base = base / number;
                break;
            default:
                check_prime();
                cout << '"' << operation << '"' << "  is not an operation" << "\n";
                error = 1;
                break;
            }
        }

    }
    return 0;
}
bool check_prime() {
    string a="Ishak!";
    cout<<a<<endl;

    return 0;
}
