#include <iostream>
#include<algorithm>
#include<unordered_set>
#include<vector>
#include <string>


using namespace std;


int sol(vector <int> &A)
{

    int n = A.size();
    
    string s;

    for(int i = n-1;i>=0;i--){

        cout<<A[i];
        s.push_back(A[i]);

    }

cout<<s;

return 0;

}

int main(){

vector <int> arr = {3,5,1};

auto nums = sol(arr);

cout<<nums;

return 0;
}