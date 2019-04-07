// Problem's name : 10452 - Marcus
// Problem's link : https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1393
#include<iostream>
#include<vector>
using namespace std;

// Declaring the parameters that we're gonna use throughout the code;
int dx[] = {-1, 0, 0};
int dy[] = {0, 1, -1};
string dir[] = {"forth", "right", "left"};
string path = "IEHOVA#";
int x, m;
char a[9][9];
vector<string> res;

bool valid(int i, int j) {
    return 1 >= 0 && i < x && j >= 0 && j < m;
}

// the function for the path;
void dfs(int i, int j, int idx){
    if(idx > path.size()) return;
    for(int k=0; k < 3; k++){
        int tox = i + dx[k];
        int toy = j + dy[k];
        if(valid(tox, toy) && a[tox][toy] == path[idx]){
            res.push_back(dir[k]);
            dfs(tox, toy, idx+1);
        }
    }
}

int main(){

    int n;
    cin >> n;

    // Loop to get the needed arrays; Then the algorithm to solve the problem;
    for(int i=0; i < n; i++){
        cin >> x >> m;
        pair<int,int> st;
        char arr[x][m];

        // Getting the 2 dimentional array from the user;
        for(int j=0; j < x; j++){
            for(int k=0; k < m; k++){
                cin >> arr[j][k];
                if(arr[j][k] == '@') st = {i, j};
            }
        }
        res.clear();
        dfs(st.first, st.second, 0); // sending the row and the coloumn to the function, 
        for(int i=0; i < res.size(); i++)
            cout << res[0] << " ";
        cout << endl;

        return 0;
    }
}