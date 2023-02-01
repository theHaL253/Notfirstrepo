#include <iostream>
#include <vector>
#include <stdio.h>
#include <windows.h>
#include <conio.h>

using namespace std;

#define WIDTH 60
#define HEIGHT 30

int ground2[60][30] = {};

void gotoxy(int x, int y)
{
	HANDLE hConsoleOutput;
	COORD Cursor_an_Pos = {(short) x,(short) y };
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsoleOutput, Cursor_an_Pos);
}

void Setcolor(WORD color)
{
	HANDLE hConsoleOutput;
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);

	CONSOLE_SCREEN_BUFFER_INFO screen_buffer_info;
	GetConsoleScreenBufferInfo(hConsoleOutput, &screen_buffer_info);

	WORD wAttributes = screen_buffer_info.wAttributes;
	color &= 0x000f;
	wAttributes &= 0xfff0;
	wAttributes |= color;

	SetConsoleTextAttribute(hConsoleOutput, wAttributes);
}
int main()
{
    system("CLS");
    char t = 219;
    Setcolor(5);
    // WIDTH và HEIGHT là kích thước hộp được đặt trước
    for (int i = 0; i < WIDTH + 1; i++)
    {
        ground2[i][0] = 1;
        cout << t;
    }
    gotoxy(0, HEIGHT);
    for (int i = 0; i < WIDTH + 1; i++)
    {
        ground2[0+i][HEIGHT] = 1;
        cout << t;
    }
    for (int i = 1; i < HEIGHT; i++)
    {
        gotoxy(0, i);
        ground2[0][i] = 1;
        cout << t;
    }

    for (int i = 1; i < HEIGHT; i++)
    {
        gotoxy(WIDTH, i);
        ground2[WIDTH][i] = 1;
        cout << t;
    }

    for (int i = 0; i <= WIDTH+1; i++)
    {
        gotoxy(i, HEIGHT + 2); cout << t;
        gotoxy(i, HEIGHT + 4); cout << t;
    }

    gotoxy(0, HEIGHT + 3); cout << t;
    gotoxy(WIDTH+1, HEIGHT + 3); cout << t;

    /*Màn 4
    for (int i=1; i< HEIGHT; i++)
    {
        gotoxy(30, i);
        if (i < 10  i > 20) {
            ground2[30][i] = 1;
            cout << t;
        }
    }

    for (int i = 1; i< WIDTH-1; i++)
    {
        gotoxy(i, 9);
        if(i < 21  (i>30 && i<50)){
            ground2[i][9] = 1;
            cout << t;
        }
    }

    for (int i = 10; i< WIDTH; i++)
    {
        gotoxy(i, 21);
        if(i < 30 || i>40){
            ground2[i][21] = 1;
            cout << t;
        }
    }*/

/*Màn 6
    for (int i = 1; i< WIDTH; i++)
    {
        gotoxy(i, 1);
        if(i < 18 || i>42){
            ground2[i][1] = 1;
            cout << t;
        }
    }

    for (int i = 1; i< WIDTH; i++)
    {
        gotoxy(i, 29);
        if(i < 18 || i>42){
            ground2[i][29] = 1;
            cout << t;
        }
    }
    for (int i = 3; i< HEIGHT-3; i++)
    {
        gotoxy(30, i);
        if(i < 8 || i> 22){
            ground2[30][i] = 1;
            cout << t;
        }
    }

    for (int i = 18; i< WIDTH; i++)
    {
        gotoxy(i, 11);
        if(i < 43){
            ground2[i][11] = 1;
            cout << t;
        }
    }

    for (int i = 18; i< WIDTH; i++)
    {
        gotoxy(i, 18);
        if(i < 43){
            ground2[i][18] = 1;
            cout << t;
        }
    }

    for (int i = 1; i< HEIGHT-1; i++)
    {
        gotoxy(1, i);
        if(i < 11 || i> 19){
            ground2[1][i] = 1;
            cout << t;
        }
    }

    for (int i = 1; i< HEIGHT-1; i++)
    {
        gotoxy(59, i);
        if(i < 11 || i> 19){
            ground2[59][i] = 1;
            cout << t;
        }
    }
*/
/* Màn 7 */
 /*   for (int i = 1; i< HEIGHT; i++)
    {
        gotoxy(20, i);
        if(i < 19 || i> 23){
            ground2[20][i] = 1;
            cout << t;
        }
    }

    for (int i = 17; i< HEIGHT; i++)
    {
        gotoxy(40, i);
        ground2[40][i] = 1;
        cout << t;
    }

    for (int i = 20; i< WIDTH; i++)
    {
        gotoxy(i, 10);
        if(i < 35 || i> 45){
            ground2[i][10] = 1;
            cout << t;
        }
    }
*/

/* Màn 8
    for (int i = 10; i< WIDTH; i++)
    {
        gotoxy(i, 5);
        if(i < 50){
            ground2[i][5] = 1;
            cout << t;
        }
    }

    for (int i = 10; i< WIDTH; i++)
    {
        gotoxy(i, 25);
        if(i < 50){
            ground2[i][25] = 1;
            cout << t;
        }
    }

    for (int i = 5; i< HEIGHT-4; i++)
    {
        gotoxy(10, i);
        if(i < 8 || i> 12){
            ground2[10][i] = 1;
            cout << t;
        }
    }

    for (int i = 5; i< HEIGHT-4; i++)
    {
        gotoxy(30, i);
        if(i < 13 || i> 17){
            ground2[30][i] = 1;
            cout << t;
        }
    }

    for (int i = 5; i< HEIGHT-4; i++)
    {
        gotoxy(50, i);
        if(i < 18 || i> 22){
            ground2[50][i] = 1;
            cout << t;
        }
    }
*/

/* Màn 9
   for (int i= 7; i < WIDTH; i++)
    {   
        gotoxy(i, 6);
        if ((i<15) || (i>19 && i<28) || (i>32 && i<41) || (i>45 && i<54)){
            for (int j=6; j < HEIGHT - 5; j++)
            {
                if(j < 13 || j> 17){
                    gotoxy(i, j);
                    ground2[i][j] = 1;
                    cout << t;
                }
            }
        }
    }
*/

/* Màn 10 */
    for (int i = 5; i< HEIGHT-4; i++)
    {
        gotoxy(25, i);
        if(i < 13 || i> 17){
            ground2[25][i] = 1;
            cout << t;
        }
    }

    for (int i = 5; i< HEIGHT-4; i++)
    {
        gotoxy(35, i);
        if(i < 13 || i> 17){
            ground2[35][i] = 1;
            cout << t;
        }
    }


    for (int i = 10; i< WIDTH - 9; i++)
    {
        gotoxy(i, 12);
        if(i < 25 || i > 35){
            ground2[i][12] = 1;
            cout << t;
        }
    }

    for (int i = 10; i< WIDTH - 9; i++)
    {
        gotoxy(i, 18);
        if(i < 25 || i > 35){
            ground2[i][18] = 1;
            cout << t;
        }
    }

    gotoxy(1, 11); cout << t;
    gotoxy(2, 10); cout << t;
    gotoxy(3, 9); cout << t;
    gotoxy(4, 8); cout << t;
    /*gotoxy(5, 7); cout << t;
    gotoxy(6, 6); cout << t;
    gotoxy(7, 5); cout << t;*/
    gotoxy(8, 4); cout << t;
    gotoxy(9, 3); cout << t;
    gotoxy(10, 2); cout << t;
    gotoxy(11, 1); cout << t;

    gotoxy(1, 19); cout << t;
    gotoxy(2, 20); cout << t;
    gotoxy(3, 21); cout << t;
    gotoxy(4, 22); cout << t;
    /*gotoxy(5, 7); cout << t;
    gotoxy(6, 6); cout << t;
    gotoxy(7, 5); cout << t;*/
    gotoxy(8, 26); cout << t;
    gotoxy(9, 27); cout << t;
    gotoxy(10, 28); cout << t;
    gotoxy(11, 29); cout << t;

    gotoxy(49, 1); cout << t;
    gotoxy(50, 2); cout << t;
    gotoxy(51, 3); cout << t;
    gotoxy(52, 4); cout << t;
    /*gotoxy(5, 7); cout << t;
    gotoxy(6, 6); cout << t;
    gotoxy(7, 5); cout << t;*/
    gotoxy(56, 8); cout << t;
    gotoxy(57, 9); cout << t;
    gotoxy(58, 10); cout << t;
    gotoxy(59, 11); cout << t;

    gotoxy(49, 29); cout << t;
    gotoxy(50, 28); cout << t;
    gotoxy(51, 27); cout << t;
    gotoxy(52, 26); cout << t;
    /*gotoxy(5, 7); cout << t;
    gotoxy(6, 6); cout << t;
    gotoxy(7, 5); cout << t;*/
    gotoxy(56, 22); cout << t;
    gotoxy(57, 21); cout << t;
    gotoxy(58, 20); cout << t;
    gotoxy(59, 19); cout << t;
    
    cin.ignore();

    return 0;
}