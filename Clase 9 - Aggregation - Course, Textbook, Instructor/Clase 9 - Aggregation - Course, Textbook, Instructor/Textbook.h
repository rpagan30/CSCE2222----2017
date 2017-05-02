#ifndef TEXTBOOK_H_
#define TEXTBOOK_H_

#include <iostream>
#include <string>

using namespace std;

// TextBook class
class TextBook {
    
    string title;       // Book title
    string author;      // Author name
    string publisher;   // Publisher name
    
public:
    
    // The default constructor stores empty strings in the string objects.
    TextBook() {
        
        set("", "", "");
    }

    // Constructor
    TextBook(string textTitle, string auth, string pub) {
        
        set(textTitle, auth, pub);
    }
    
    // set function
    void set(string textTitle, string auth, string pub);
    
    // print function
    void print() const;
        
};

#endif
