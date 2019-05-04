# include <iostream>
# include <windows.h>
# include <time.h>
// библиотека, нужна для использования функции Sleep()
# include <conio.h>
// библиотека, нужна для использования функций kbhit() и getch()
using namespace std;char main_color[] = "color ##";
// шаблон для цвета
int snake_size, change_x, change_y, coordinates_x[1000], coordinates_y[1000], food_x = -1, food_y = -1;
/*
    snake_size - размер змейки
    change_x, change_y - в какую сторону движется змейка
    coordinates_x[1000], coordinates_y[1000] - массивы, хранящие координаты частей тела змейки
    food_x, food_y - координаты еды
    PS: координаты головы змейки хранятся в coordinates_x[1], coordinates_y[1]
*/
char symbol, a[1000][1000];
/*
    symbol - хранит в себе ASCII код нажатой клавиши
    a[1000][1000] - наша таблица, в которой происходит вся игра
*/
const int N = 20, M = 30, INTERVAL = 200;
/*
    константы,
    N - размер таблицы, а именно высота
    M - ширина таблицы
    INTERVAL - интервал в миллисекундах, через каждый этот промежуток времени змейка будет передвигаться
*/
void change_color()
// функция изменения цвета консоли
{
     char x = rand() % 16, y = rand() % 16;
     if (x == y)
      ++y;
     y %= 16;
     if (x > 9)
      x += 'A' - 10;
     else
      x += '0';
     if (y > 9)
      y += 'A' - 10;
     else
      y += '0';
     // выбираем рандомные цвета
     main_color[6] = x;
     main_color[7] = y;
     system(main_color);
     // меняем цвет
}
void change_direction()
// функция, считывающая нажатую клавишу
{
     symbol = getch();
     // считываем нажатую клавишу с помощью функции getch()
     switch (symbol)
     {
         case 'w': if(change_x != 1 || change_y != 0) { change_x = -1; change_y = 0; } break;
         case 'a': if(change_x != 0 || change_y != 1) { change_x = 0; change_y = -1; } break;
         case 's': if(change_x != -1 || change_y != 0) { change_x = 1; change_y = 0; } break;
         case 'd': if(change_x != 0 || change_y != -1) { change_x = 0; change_y = 1; } break;
         // управление змейкой у нас через wasd 
         case 32 : change_color(); break;
         // если нажат пробел, то меняем цвет консоли
         default : break; 
     }
}
void show_table()
// функция для вывода таблицы
{
    system("cls");
    // очищаем консоль
    for (int i = 0; i <= N + 1; ++i)
     for (int j = 0; j <= M + 1; ++j)
      cout << (i == 0 || j == 0 || i == N + 1 || j == M + 1 ? '#' : a[i][j]) << (j <= M ? "" : "\n");
    // выводим таблицу и края
}
void clear_snake_on_table()
// очищаем координаты, в которых располагалась змейка
{
     for (int i = 1; i <= snake_size; ++i)
      a[coordinates_x[i]][coordinates_y[i]] = ' ';
}
void show_snake_on_table()
// красим координаты змейки
{
     if(change_x == 1 && change_y == 0) a[coordinates_x[1]][coordinates_y[1]] = 'v';
     if(change_x == -1 && change_y == 0) a[coordinates_x[1]][coordinates_y[1]] = '^';
     if(change_x == 0 && change_y == 1) a[coordinates_x[1]][coordinates_y[1]] = '>';
     if(change_x == 0 && change_y == -1) a[coordinates_x[1]][coordinates_y[1]] = '<';
     // изменяем тип головы
 
     for (int i = 2; i <= snake_size; ++i)
      a[coordinates_x[i]][coordinates_y[i]] = '@';
     // красим змейку
}
bool game_over()
// проверяем, съела ли змейка саму себя
{
     for (int i = 2; i <= snake_size; ++i)
      if (coordinates_x[1] == coordinates_x[i] && coordinates_y[1] == coordinates_y[i]) return true;
     // если координаты головы змейки равны координате какой-либо части тела змейки, то змейка съела саму себя
     return false;
     // если все координаты различны, то все в порядке - играем дальше
}
void check_coordinates()
// проверяем, не вышла ли змейка за поле, если да то возвращаем ее обратно
{
    if (coordinates_x[1] > N) coordinates_x[1] = 1;
    if (coordinates_x[1] < 1) coordinates_x[1] = N;
    if (coordinates_y[1] > M) coordinates_y[1] = 1;
    if (coordinates_y[1] < 1) coordinates_y[1] = M;
}
void next_step()
// функция следующего хода, в которой наша змейка сдвигается в сторону на 1 ячейку
{
     clear_snake_on_table();
     // чистим таблицу от змейки
 
     for (int i = snake_size; i >= 2; --i)
     {
         coordinates_x[i] = coordinates_x[i - 1];
         coordinates_y[i] = coordinates_y[i - 1];
     }
     // передвигаем тело змейки
 
     coordinates_x[1] += change_x;
     coordinates_y[1] += change_y;
     // передвигаем голову змейки
 
     check_coordinates();
     // проверяем в порядке ли координаты
 
     if(coordinates_x[1] == food_x && coordinates_y[1] == food_y)
     {
         snake_size++;
         food_x = -1;
         food_y = -1;
     }
     // если голова змейки там же где и еда, то увеличиваем размер змейки и очищаем координаты змейки
 
     show_snake_on_table();
     // рисуем змейку
 
     if (game_over() == true)
     // если змея укусила себя
     {
         cout << "You're looser! \n";
         // сообщаем всю правду о игроке
         system("pause");
         // приостанавливаем игру
         exit(0);
         // завершаем программу
     }
}
bool food_check()
// функция проверки на наличие еды на карте
{
     if(food_x == -1 && food_y == -1) return false;
     // если координаты еды неопределенны то возвращаем true
     return true;
     // в остальных случаях false
}
void place_food()
// функция добавления еды на карту
{
     srand(time(NULL));
     for (int i = 1; i <= 9; ++i)
     {
         int x = rand(), y = rand();
         if(x < 0) x *= -1;
         if(y < 0) y *= -1;
         x %= (N + 1);
         y %= (M + 1);
         if(x == 0) ++x;
         if(y == 0) ++y;
         if(a[x][y] != '@' && a[x][y] != 'v' && a[x][y] != '^' && a[x][y] != '<' && a[x][y] != '>')
         {
             food_x = x;
             food_y = y;
             a[x][y] = '+';
             return;
         }
     }
     // ставим в рандомное место еду
}
void standart_settings()
// начальные установки
{
     snake_size = 2;
     // размер змеи - 2
 
     coordinates_x[1] = 1;
     coordinates_y[1] = 2;
     coordinates_x[2] = 1;
     coordinates_y[2] = 1;
     // змейка занимает две клетки вправо от координаты {1,1}
 
     change_x = 0;
     change_y = 1;
     // змейка движется вправо
}
int main ()
{
    standart_settings();
    // задаем стандартные настройки
 
    while (1)
    // бесконечный цикл
    {
        if (kbhit() == true)
        // если нажата клавиша
         change_direction();
         // обрабатываем нажатую клавишу
 
        next_step();
        // двигаем змейку
 
        if(food_check() == false)
         place_food();
        // если нет еды, то ставим ее
 
        show_table();
        // рисуем змейку
 
        Sleep(20);
    }
}
        // "усыпляем" программу на заданный интервал
