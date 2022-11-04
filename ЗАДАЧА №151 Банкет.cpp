#include <fstream>
#include <vector>

using namespace std;
ifstream in("INPUT.TXT");      // просто легче отладку делать при больших вводах
ofstream out("OUTPUT.TXT");

vector <int> col;                 // в этом массиве будем раскрашивать ВИПов
vector <pair<int,int>> pr;        // а сюда загрузим пары врагов
int m;  // число пар врагов

bool analiz(int t, vector <int> color) {  // в этой рекурсивной процедуре будем пробовать рассаживать (красить)
       for (int z = t; z < m; z++) { // начиная с пары врагов t
             int a = pr[z].first;
             int b = pr[z].second;
             if (color[a - 1] == 0) {          // первый не окрашен
                    if (color[b - 1] == 0) {   // второй тоже
                           color[a - 1] = 1;   // попробуем такой вариант раскраски
                           color[b - 1] = -1;
                           if (!analiz(z+1, color)) { // ежели не получилось, раскрасим наоборот
                                  color[a - 1] = -1;
                                  color[b - 1] = 1;
                                  return analiz(z+1, color); // и вернем результат
                           }
                    }
                    else color[a - 1] = -color[b - 1]; // за другой стол, батенька №1 из пары
             }
             else { // первый окрашен
                    if (color[b - 1] == 0) color[b - 1] = -color[a - 1]; // за другой стол вражина №2 из пары
                    else { // второй тоже
                           if (color[b - 1] == color[a - 1]) // скандал обеспечен
                                  return false;
                    }
             }
       }
       return true;
}

int main() {
       out.clear();
       int n;  // количество ОВП
       in >> n >> m;
       int a, b;
       for (int z = 0; z < n; z++) col.push_back(0); // зануляем массив окраски
       for (int z = 0; z < m; z++) {
             in >> a >> b;
             pr.push_back(make_pair(a, b));    // загружаем пары врагов
       }
       if (n < 2) { out << "YES"; return 0; }  // можно было и двух, но алгоритм справится

       if (analiz(0,col)) out << "YES";         // с Богом. Начинаем анализ
       else out << "NO";
       return 0;
}
