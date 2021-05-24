#if 0
Write a C++ class that implements each of the following functions.
        These must provide output so that you can see when objects of your class are created, copied, or destroyed.
                Default constructor
                Copy constructor
                at least one other constructor
                Destructor
Be sure to properly create your class in separate .hpp and .cpp files.
        Write another .cpp file which uses objects of your class in the following ways.
    Create a local variable of an object of your class
    Create a local variable that is a copy of another object of your class
    Pass an object by value
    Pass an object by reference
    Pass an object by reference to const
    Return an object by value
    Create a vector of 5 objects
Easier if you include other output in your program, such as "about to return an object by value."
Does your compiler implement (N)RVO?
Continue to work on your class by giving it a data member, and member functions that modify and return that member.
        Don't forget that your copy constructor will now need to copy that member!
Pay special attention to how you pass parameters and return values, and whether your member functions should be const or not.
#endif

#include <iostream>
#include <vector>
#include "Name.h"
using std::cout;
using std::endl;

int main() {
    Name timothy;
    Name andrew = timothy;
    Name caroline(34);
    cout << andrew.getAge() << endl;
    std::vector<Name> list(5);
//    for (int i=0; i<5; i++) { // this for loop works but doesn't start off knowing size
//        list.push_back(3);    // ...and thus allocates size 1, then descructs and builds bigger
//    }                         // ...then continues doing this till reach desired size
    // ... so it shows more construction and destruction than youd expect
    return 0;
}