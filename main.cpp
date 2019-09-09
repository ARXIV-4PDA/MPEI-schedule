#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main()
{
    ofstream foutr("D:\\url.txt");
    for(int inta=3000;inta<10001;inta++){
        std::string html;
        std::ifstream html_file;
        std::stringstream a;
        a<<inta;

    foutr<<"https://mpei.ru/Education/timetable/Pages/table.aspx?groupoid="+a.str()<<endl;
    };
    foutr.close();
    cout << "Hello World!" << endl;
    return 0;
}
