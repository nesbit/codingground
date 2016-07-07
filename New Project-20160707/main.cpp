#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char name[100] = {};
    int count=1;
    string textString;
    string testString;
    //cout << "Hello World" << endl; 
    ifstream inputFile;
    inputFile.open("file3.txt");
    inputFile >> textString;
    //cout << textString;
    while (inputFile >> testString) {
        count++;
    }
    cout << "Has " << count << " spaces" << endl;
    /*
    inputFile >> name;
    cout << name[5];
    inputFile.close();
    */
    inputFile.close();
    return 0;
}

