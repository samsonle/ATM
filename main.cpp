#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

class ATM {
public:
    void run();
    void welcome_screen();
    void input_account_number(){}
    void input_account_password(){}
    int get_command(){return 0;}
    void run_command(){}
};

int main() {
    ATM{}.run();
}

void ATM::run()
{
    while (true) {
        welcome_screen();
        input_account_number();
        input_account_password();
        get_command();
        run_command();
    }
}

void ATM::welcome_screen()
{
    cout << "Welcome to ATM - world thinnest" << endl;
}
