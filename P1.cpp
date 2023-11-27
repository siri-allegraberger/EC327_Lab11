//include headers and libraries
#include <string>
#include <iostream>
#include "Library.h"
using namespace std;

int main(){
    Library library;
    
    //ask for commands and execute
    /*
    a bookName //add the book named bookName to the library if not already existing and if there is availability
    r bookName //remove the book bookName if it exists in the library
    p //print the library contents
    q //quit the program
    */
    string command;
    string bookName;
    cout << "Enter command: \n";
    //while 
    while(true){
        cin >> command;
        if(command == "a"){
            cin >> bookName;
            if(!library.addBook(bookName)){
                cout << "Book already exists or library is full" << endl;
            }
        }else if(command == "r"){
            cin >> bookName;
            if(!library.removeBook(bookName)){
                cout << "Book does not exist" << endl;
            }
        }else if(command == "p"){
            library.print();
        }else if(command == "q"){
            cout << "Exiting \n";
            break;
        }else{
            cout << "Invalid command" << endl;
        }
    }

}
