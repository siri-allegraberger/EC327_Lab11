//include headers and libraries
#include <string>
#include <iostream>
#include "Library.h"
using namespace std;

//implement class functions
Library::Library(){
    //constructor
    //creates a library with no books
    for(int i = 0; i < 10; i++){
        books[i] = "";
    }
}

bool Library::addBook(string bookName){
    //Adds the given book to the library and returns zero
    //returns false if the book already exists or if the library
    //  already has 10 books
    for(int i = 0; i < 10; i++){
        if(books[i] == bookName){
            return false;
        }
    }
    for(int i = 0; i < 10; i++){
        if(books[i] == ""){
            books[i] = bookName;
            return true;
        }
    }
    return false;
}

bool Library::removeBook(string bookName){
    //Removes the given book name from the library by setting the 
    //  corresponding string to "", and returns true
    //returns false if the library does not have the given book
    for(int i = 0; i < 10; i++){
        if(books[i] == bookName){
            books[i] = "";
            return true;
        }
    }
    return false;
}

void Library::print(){
    //prints the book names
    for(int i = 0; i < 10; i++){
        if(books[i] != ""){
            cout << books[i] << endl;
        }
    }
}