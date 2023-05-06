#include<iostream>
#include<string>
using namespace std;

int main()
{
    int border_x, border_y;
    int x, y;
    char ori;
    string sequence;
    cin >> border_x >> border_y;
    int lost_List[border_x+1][border_y+1];
        for(int i=0; i<=border_x; i++)
            for(int j=0; j<=border_y; j++)
                lost_List[i][j] = 0;
    while(cin >> x >> y >> ori >> sequence)
    {     
        bool lost = false;
        for(int i=0; i<sequence.length() && lost==false; i++)
        {
            if(sequence[i]=='F')
            {
                switch (ori)
                {
                case 'N':
                    y++;
                    
                    if(y>border_y && lost_List[x][y-1]==1)
                    {
                        y--;
                        
                        continue;
                    }
                    else if(y>border_y)
                    {
                        y--;
                        
                        lost_List[x][y]++;
                        lost = true;
                        continue;
                    }
                    break;
                case 'S':
                    y--;
                    if(y<0 && lost_List[x][y+1]==1)
                    {
                        y++;
                        continue;
                    }
                    else if(y<0)
                    {
                        y++;
                        lost_List[x][y]++;
                        lost = true;
                        continue;
                    }
                    break;
                case 'E':
                    x++;
                    if(x>border_x && lost_List[x-1][y]==1)
                    {
                        x--;
                        continue;
                    }
                    else if(x>border_x)
                    {
                        x--;
                        lost_List[x][y]++;
                        lost = true;
                        continue;
                    }
                    break;
                case 'W':
                    x--;
                    if(x<0 && lost_List[x+1][y]==1)
                    {
                        x++;
                        continue;
                    }
                    else if(x<0)
                    {
                        x++;
                        lost_List[x][y]++;
                        lost = true;
                        continue;
                    }
                    break;
                }

            }
            else if(sequence[i]=='R')
            {
                switch (ori)
                {
                case 'N':
                    ori = 'E';
                    break;
                case 'S':
                    ori = 'W';
                    break;
                case 'E':
                    ori = 'S';
                    break;
                case 'W':
                    ori = 'N';
                    break;
                }
            }
            else if(sequence[i]=='L')
            {
                switch (ori)
                {
                case 'N':
                    ori = 'W';
                    break;
                case 'S':
                    ori = 'E';
                    break;
                case 'E':
                    ori = 'N';
                    break;
                case 'W':
                    ori = 'S';
                    break;
                }
            }
                
        }//end for
        string s = "";
        if(lost==true)
            s = " LOST";
        cout << x << ' ' << y << ' ' << ori << s << endl;
    }
}