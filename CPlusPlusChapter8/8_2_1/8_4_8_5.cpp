#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

void ReadFileInVector(string filename){
    ifstream filestream;
    filestream.open(filename);
    vector<string> file_vector;
    string temp_string;
    //遇到文件结束符的时候可以停止循环
    // 注意该读取函数会忽略掉回车换行
    while(getline(filestream, temp_string)){
        file_vector.push_back(temp_string);
    }
    for(unsigned int i =0; i < file_vector.size(); i++){
        cout << file_vector[i] << endl;
    }
    //cout << endl;

}

void ReadFileInVectorBySpace(string filename){
    ifstream filestream;
    filestream.open(filename);
    vector<string> file_vector;
    string temp_string;
    //遇到文件结束符的时候可以停止循环
    // 注意该读取函数会忽略掉回车换行
    while(filestream >> temp_string){
        file_vector.push_back(temp_string);
    }
    //如果采用的是 getline 函数的方式，一空格为结束符，会读取到空格到vector里面
    for(unsigned int i =0; i < file_vector.size(); i++){
        cout << file_vector[i] << endl;
    }
    //cout << endl;
}
int main(int argc, char* argv[])
{
    //cout << "Hello world!" << endl;
    if(argc != 2){
        cout << "Please input the like this:\nprogram filename\n";
        return 0;
    }
    ReadFileInVector(argv[1]);
    ReadFileInVectorBySpace(argv[1]);
    return 0;
}
