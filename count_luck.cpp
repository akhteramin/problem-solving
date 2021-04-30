#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);
int count_route=0;
pair<int,int> init, target;
// vector<pair<int,int>> path_way;
void dfs(vector<string>& matrix, int i, int j, vector<pair<int,int>>& path, int count_f){
    if(target.first == i && target.second == j){
        // for(auto k=0;k<path.size();k++)
            // cout<<"path:"<<path[k].first<<" "<<path[k].second<<" "<<count_f <<endl;
        // for(auto k=0;k<path_way.size();k++)
            // cout<<"Flag data:"<<path_way[k].first<<" "<<path_way[k].second <<endl;
        count_route = count_f;
        return;
    }

    matrix[i][j] = '1';
    path.push_back(make_pair(i,j));
    int count_v=0;
    if(i>0 && (matrix[i-1][j]=='.' ||  matrix[i-1][j]=='*')){
        count_v++;
    }
    if(j>0 && (matrix[i][j-1]=='.' ||  matrix[i][j-1]=='*')){
        count_v++;
    }
    if(i<matrix.size()-1 && (matrix[i+1][j]=='.' ||  matrix[i+1][j]=='*')){
        count_v++;
    }
    if(j<matrix[i].length()-1 && (matrix[i][j+1]=='.' ||  matrix[i][j+1]=='*')){
        count_v++;
    }
    // if(count_v>1)
        // path_way.push_back(make_pair(i,j));
    if(i>0 && (matrix[i-1][j]=='.' ||  matrix[i-1][j]=='*')){
        if(count_v>1)
            dfs(matrix,i-1,j,path,count_f+1);
        else {
            dfs(matrix,i-1,j,path,count_f);
        }
    }
    if(j>0 && (matrix[i][j-1]=='.' ||  matrix[i][j-1]=='*')){
        if(count_v>1)
            dfs(matrix,i,j-1,path,count_f+1);
        else {
            dfs(matrix,i,j-1,path,count_f);
        }
    }
    if(i<matrix.size()-1 && (matrix[i+1][j]=='.' ||  matrix[i+1][j]=='*')){
        if(count_v>1)
            dfs(matrix,i+1,j,path,count_f+1);
        else {
            dfs(matrix,i+1,j,path,count_f);
        }
    }
    if(j<matrix[i].length()-1 && (matrix[i][j+1]=='.' ||  matrix[i][j+1]=='*')){
        if(count_v>1)
            dfs(matrix,i,j+1,path,count_f+1);
        else {
            dfs(matrix,i,j+1,path,count_f);
        }
    }
    path.pop_back();
    // if(count_v>1)
        // path_way.pop_back();
}
// Complete the countLuck function below.
string countLuck(vector<string> matrix, int k) {
    for(auto i=0;i<matrix.size();i++){
        for(auto j=0;j<matrix[i].length();j++){
            if(matrix[i][j]=='M')
                init=make_pair(i, j);
            if(matrix[i][j]=='*')
                target=make_pair(i, j);
        }
    }
    vector<pair<int,int>> path;
    dfs(matrix,init.first,init.second, path,0);
    if(count_route == k)
        return "Impressed";
    return "Oops!";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string nm_temp;
        getline(cin, nm_temp);

        vector<string> nm = split_string(nm_temp);

        int n = stoi(nm[0]);

        int m = stoi(nm[1]);

        vector<string> matrix(n);

        for (int i = 0; i < n; i++) {
            string matrix_item;
            getline(cin, matrix_item);

            matrix[i] = matrix_item;
        }

        int k;
        cin >> k;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string result = countLuck(matrix, k);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
