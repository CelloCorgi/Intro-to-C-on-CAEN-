#include <iostream>
#include <cstring> //Need this to use c-string functions
using namespace std;

int main(int argc, char **argv) { //or char *argv[]
    //C-strings = cstyle strings = array of characters
    
    //Check that two additional commandline arguments passed
    if (argc != 3) {
        cerr << "Wrong number of command line arguments" << endl;
        return 1;
    }
    
    //First, print the two c-strings passed
    cout << "First string: " << argv[1] << " Second String: " << argv[2] << endl;

    //Now check if the strings are the same
    //Does this work?
    if (!strcmp(argv[1], argv[2])) {
        cout << "The two strings are the same!" << endl;
    } else {
        cout << "The two strings are not the same!" << endl;
    }

    //Now, concatenate the c_strings into a new string 
    char new_cstring[1024];

    //First, make sure the lengths combined aren't too long for the buffer
    if (strlen(argv[1]) + strlen(argv[2]) + 1 > 1024) {
        cout << "The c-strings are too long for the buffer!!" << endl;
        return 1;
    }

    //Other wise, copy in the strings
    //You can also use strcat to do this
    strcpy(new_cstring, argv[1]);
    strcpy(new_cstring + strlen(argv[1]), argv[2]); 
    
    cout << "The two strings together are: " << new_cstring << endl;

}






