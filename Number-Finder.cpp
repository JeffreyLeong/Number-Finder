#include <iostream>
#include <fstream>

using namespace std;

int main() {
    char ans;
   
    cout << "Welcome to Number Finder!\n";
    cout << "============================\n";
    do{
        char in_file_name[20];
        char c;
        ifstream in_stream;
        
        cout << "Which file do you want us to find numbers at?\n";
        cin >> in_file_name;
        cout << endl;
        cout << "We found the follow magic numbers in " << in_file_name << ": \n";

        in_stream.open(in_file_name);
        if(in_stream.fail()){
            cout << in_file_name << " is not found.\n";
        }
        // in_stream.get(c);
        // while (!in_stream.eof()){
        //     if(isdigit(c)){
        //         cout << fixed;
        //         cout.precision(2);
        //         cout << c << " ";
        //     }
        //     in_stream.get(c);
        // }
        double num;
        while(in_stream >> num){
            cout << fixed;
            cout.precision(2);
            cout << num << " ";
        }
        cout << endl;
        cout << "-----";
        cout << endl;
        cout << "Do you want to process another file? \n";
        cin >> ans;
        in_stream.close();
    } while (ans== 'Y' || ans=='y');
    cout << "Thank you for using the Number Finder! Bye for now!";
    return 0;
}


/* ==========================================================
Problems I had working on this assignment (and how I overcame these problems)
1.
2.
Other Things I wish to share
1.
2.
========================================================== */