#include <iostream>
#include <string>
using namespace std;

//测试输入流的函数
istream& TestIstream(istream& testistream){
    string inputstring;
    while(testistream >> inputstring){
        cout << inputstring << endl;
    }
    testistream.clear();
    return testistream;
}
int main()
{
    //cout << "Hello world!" << endl;
    TestIstream(cin);
    return 0;
}
