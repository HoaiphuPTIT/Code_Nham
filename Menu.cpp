// phim nong
#define ENTER 13
#define ESC 27
#define TAB 9
#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77
#define SPACE 32

void gotoxy(int x, int y)
{
  static HANDLE h = NULL;  
  if(!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD c = { x, y };  
  SetConsoleCursorPosition(h,c);
}

void Menu()
{
	int numOfItem = 12;
	int thaoTac = 0;
	string *item = new string[numOfItem];
	item[0] = "Them vat tu";
	item[1] = "Xoa vat tu";
	item[2] = "Hieu chinh vat tu";
	item[3] = "In danh sach vat tu ton kho";
	item[4] = "Them nhan vien";
	item[5] = "Xoa nhan vien";
	item[6] = "Sua thong tin nhan vien";
	item[7] = "In danh sach nhan vien";
	item[8] = "Lap hoa don";
	item[9] = "In hoa don";
	item[10] = "Thong ke hoa don";
	item[11] = "Vat tu co doanh thu cao nhat trong khoang thoi gian";
	int *mau = new int[numOfItem];

	bool exit = false;
	
	while (!exit)
	{
		system("cls");
		gotoxy(3, 14);
		cout << "ESC: Thoat - ENTER: Chon";
    
		//in menu ra man hinh
		for (int i = 0; i < numOfItem; i++)
		{
			gotoxy(15, i + 1);
			cout << item[i] << endl;
		}
		char key;
		key = _getch();
		if (key == UP)
		{
			if (thaoTac == 0)
				thaoTac = numOfItem - 1;
			else thaoTac--;			
		}
		else if (key == DOWN)
		{
			if (thaoTac == numOfItem - 1)
				thaoTac = 0;
			else thaoTac++;			
		}
		else if (key == ESC)
		{
			exit = true;
			gotoxy(3, 15);
			cout << "Nhan phim bat ki de thoat!";
		}
		else if (key == ENTER)
		{
			if (thaoTac == 0)
			{
				system("cls");
				
				_getch();
			}
			else if (thaoTac == 1)
			{
				system("cls");
		
				_getch();
			}
			else if (thaoTac == 2)
			{
				system("cls");
				
				_getch();
			}
			else if (thaoTac == 3)
			{
				system("cls");
				
				_getch();
			}
			else if (thaoTac == 4)
			{
				system("cls");
  
				_getch();
			}
			else if (thaoTac == 5)
			{
				system("cls");
				
				_getch();
			}
			else if (thaoTac == 6)
			{
				system("cls");
				
				_getch();
			}
			else if (thaoTac == 7)
			{
				system("cls");				
				
				_getch();
			}
			else if (thaoTac == 8)
			{
				system("cls");
				
				
				_getch();
			}
			else if (thaoTac == 9)
			{
				system("cls");
				
				_getch();
			}
			else if (thaoTac == 10)
			{
				system("cls");
				_getch();
			}
			else if (thaoTac == 11)
			{
				system("cls");
				_getch();
			}
		}
  }
}
