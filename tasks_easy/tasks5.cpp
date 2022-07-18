#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main ()
{
    int n[2][9]={
                     {201,203,203,203,203,203,203,203,187}, // массив  рисунка из символов таблицы ASCII
                 {200,202,202,202,202,202,202,202,188}
                      };
        for(int i=0; i<2;i++)  //цикл вывода рисунка
        {
        for(int j=0;j<9;j++) cout<<static_cast<char>(n[i][j]); //явное приведение типа (в старом стиле (char)n[i][j])
        cout<<endl;
        };
        cin.get();//строчно-ориентированная функция(метод) объекта cin, чтобы заморозить экран вывода
        return 0;
}
