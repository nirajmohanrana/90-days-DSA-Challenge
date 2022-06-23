#include <bits/stdc++.h>
#define N 4
using namespace std;
string ans;

bool isSafe(int m[N][N], int visited[N][N], int srcX, int srcY) {
    if(srcX>=0 && srcY>=0 && srcX<N && srcY<N && m[srcX][srcY] == 1 && !visited[srcX][srcY]) {
        return true;
    }

    return false;
}

void helper(int m[N][N], int visited[N][N], int srcX, int srcY, string temp) {
    ;
    if(srcX == N-1 && srcY == N-1){ //BASECASE
        temp+=" ";
        ans.append(temp);
        return;
    }

    visited[srcX][srcY] = 1;

    
    // RECURSIVE CALLS
    if(isSafe(m,visited, srcX+1, srcY))
        helper(m,visited, srcX+1, srcY, temp+='D');
        
    if(isSafe(m,visited, srcX, srcY-1))
        helper(m,visited, srcX, srcY-1, temp+='L');

    if(isSafe(m,visited, srcX, srcY+1))
        helper(m,visited, srcX, srcY+1, temp+='R');

    if(isSafe(m,visited, srcX-1, srcY))
        helper(m,visited, srcX-1, srcY, temp+='U');
    
    visited[srcX][srcY] = 0; //BACKTRACK
    

}

string findPath(int m[N][N]) {
    if(m[0][0] = 0)
        return ans;
    
    int visited[N][N] ={0};
    helper(m, visited, 0, 0, "");

    return ans;
}

int main()
{
    int maze[N][N] = { { 1, 0, 0, 0 },
                       { 1, 1, 0, 1 },
                       { 1, 1, 0, 0 },
                       { 0, 1, 1, 1 } };
    findPath(maze);
    cout<<ans<<endl;
    return 0;
}