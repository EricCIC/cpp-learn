#include <iostream>
#include <map>
using namespace std;
int main(int argc, char const *argv[])
{
    map<string, string> mapStudent;
    // 用 insert 函數插入 pair
    mapStudent.insert(pair<string, string>("r000", "student_zero"));

//用 "array" 方式插入
    mapStudent["r123"] = "student_first";
    mapStudent["r456"] = "student_second";
    return 0;
}
