// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
class Casino{
    public:
        int l;
        int r;
        int real;
};
bool comparator(Casino& a, Casino& b) {return a.real > b.real;}
bool path_to_source(vector<Casino>& casinoes, int k, int vis[], int ind, int start_ind){
    vis[ind]=true;
    if(casinoes[ind].l <= k && k <= casinoes[ind].r) {
        //path.push_back(casinoes[ind]); 
        return true;
    };
    for(int i = start_ind; i < casinoes.size();i++){
        bool found_path=false;
        if(casinoes[ind].l <= casinoes[i].real && casinoes[i].real <= casinoes[ind].r && !vis[i]){
            found_path=path_to_source(casinoes,k,vis,i,start_ind);
            //if(found_path) path.push_back(casinoes[ind]);
        }
        if(found_path) return true;
        continue;
    }
    return false;
}

int main() {
    int t, n,k;
    cin >> t;
    while(t--){
        cin >> n >>k;
        vector<Casino>casinoes(n);
        int vis[n];
        for(int i=0;i<n;i++){
            cin>>casinoes[i].l >> casinoes[i].r >> casinoes[i].real;
            vis[i]=0;
        }
        sort(casinoes.begin(), casinoes.end(), comparator);

        bool exit=false;
        for(int j=0;j<casinoes.size();j++){
            exit = path_to_source(casinoes,k,vis,j,j);
            if(exit){
                cout << casinoes[j].real << '\n';
                break;
            }
        }
        if(!exit){
            cout << "0\n";
        }
        // for(Casino& l:casinoes) cout <<"#"<<l.l<<"#"<<l.r<<"#"<<l.real<<"\n";
        // vector<Casino> path; 
        // cout << "i can play :" << path_to_source(casinoes,k,vis,4,path,4)<<"\n";
        // cout <<"\nhere is the path\n";
        // for(Casino& l : path){
        //     cout <<"#"<<l.l<<"#"<<l.r<<"#"<<l.real<<"\n|\n";
        // }
    }

    return 0;
}
