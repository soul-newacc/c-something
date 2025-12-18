#include "iostream"
#include "chrono"
#include "thread"
#include "string"

using namespace std;

int main() {
    int i=0, o=0;
    char asd[256];
    char chars[]=" ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefhijklmnopqrstuvwxyz1234567890";
    string asdd;
    cout << "Insert text: ";
    cin.getline(asd, sizeof(asd));
    cout << "\033[2J\033[H";
    do {
        if (chars[i]!=asd[o]) {
            cout<<asdd<<chars[i];
            i++;
            this_thread::sleep_for(chrono::milliseconds(40));
            cout << "\033[2J\033[H";
        } else {
            asdd+=chars[i];
            i=0;
            o++;
        }
    } while (asdd!=asd);
    cout<<asdd<<endl;
}
