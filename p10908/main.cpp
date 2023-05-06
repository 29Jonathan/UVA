#include<iostream>
#include<string>
using namespace std;

int main()
{
    string grid[105];
    int T, h, w, Q;
    int r, c;
    cin >> T;
    while(T--)
    {
        cin >> h >> w >> Q;
        cout << h << ' ' << w << ' ' << Q << endl;

        for(int i=0; i<h; i++)
            for(int j=0; j<w; j++)
                cin >> grid[i][j];
        
        while(Q--)
        {
            cin >> r >> c;
            int length = 1;
            while(true)
            {
                for(int i=r-length; i<=r+length; i++)
                    for(int j=c-length; j<=c+length; j++)
                        if(grid[r][c] != grid[i][j] || i < 0 || i>=h || j < 0 || j>=w)
                            goto out;
                length++;
            }
            out:
            cout << length*2-1 << endl;
        }
    }

}



// #include<iostream>
// #include<string>
// using namespace std;

// string grid[100];
// int height, width;

// int isSquare(int r, int c, int length)
// {
//     if(r-length < 0 || r+length > height || c-length < 0 || c+length > width)
//         return 0;
       
//     for(int i = r-length; i <= r+length; i++)
//         for(int j = c-length; j <= c+length; j++)
//         {
//             if(grid[i][j] != grid[r][c])
//                 return 0;
//         }
//     return 1;
// }

// int main()
// {
//     int T;
//     cin >> T;
//     while(T)
//     {
//         int numOfCenter;
//         cin >> height >> width >> numOfCenter;
//         cout << height << ' ' << width << ' ' << numOfCenter << endl;

//         for(int i = 0; i < height; i++)
//             cin >> grid[i];

//         for(int i = 0; i < numOfCenter; i++)
//         {
//             int length = 1;
//             int r, c;
//             cin >> r >> c;
//             while(isSquare(r, c, length))
//                 length++;

//             cout << length*2-1 << endl;
//         }
        
//         T--;
//     }
// }