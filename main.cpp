#include<iostream>
using namespace std;
int main()
{
   /// Drawing a shape
    cout << "|     |" << endl;
    cout << "|     |" << endl;
    cout << "|_____|" << endl;
    cout << "      |" << endl;
    cout << "      |" << endl;
    cout << "      |" << endl;


// taking variable
    string name = "Samira";
    int age = 21;
    cout << "There is a girl, her name is: " << name << endl;
    cout << "She is " << age << " years old and supremely lazy" << endl;
    cout << "She wanted to do something good but can't do it she is good for nothing" << endl;
    cout << "She don't like her name : " << name << " at all" << endl;



/// data type;

    char ch = 'A';
    string s = "Samira";
    int i = 10;
    float f = 10.5;
    bool is_female  = true;
    cout << ch << endl;
    cout << s << endl;
    cout << i << endl;
    cout << f << endl;
    cout << is_female << endl;




///working with strings

    string s = "Happy Coding";
              //  ||||||||||||\\
               // 0123456789101112
    cout << s << endl;
    // printing length of this string
    cout << s.length() << endl;
    cout << s[0] <<endl; // 1st index
    s[0] = 'Y';
    cout << s << endl;
    cout << s.find("Coding", 0) << endl;
    string subs;
    subs = s.substr(6,3);
    cout << subs << endl;






   int a = 10;
   int mul= 10*5;
   a++;
   cout << a <<endl;
   cout << mul <<endl;
   float f  = 5.5;
   float mul1 = 5.5 * 1.2;
   cout << mul1 << endl;
   float b = 7.5;
   b++;
   cout << b << endl;

    return 0;
}
