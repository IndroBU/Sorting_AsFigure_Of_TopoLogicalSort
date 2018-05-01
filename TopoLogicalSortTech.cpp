/// God Help Me
/// I am Indrojit Mondal, Dept of CSE, University of Barisal
/*
   Input :
   5
   5 5 3
   1 1 2
   3 2 4
   2 3 5
   4 4 1
   Output :
   2 3 5
   3 2 4
   5 5 3
   1 1 2
   4 4 1
                     */


#include<bits/stdc++.h>
using namespace std;
bool sortbyOutDegere(const pair<int,pair<int, int> > &a , const pair <int, pair<int, int> > &b)
{
    return a.second.second > b. second.second ;
}
int main()
{
    vector< pair<int, pair< int, int > > >V;
    int D,F,N,Node;
    cin>>N;
    for(int I=1; I<=N; I++)
    {
         cin>>Node>>D>>F;
         V.push_back(make_pair(Node,make_pair(D,F)));
    }
    cout<<endl;
    ///Befor Sorting....

    for(int I=1; I<=N; I++)
    {
        cout<<V[I-1].first<<" "<<V[I-1].second.first<<" "<<V[I-1].second.second<<endl;
    }
    cout<<endl;
    /// After Sorting.....

    sort(V.begin(), V.end(), sortbyOutDegere);

    for(int I=1; I<=N; I++)
    {
        cout<<V[I-1].first<<" "<<V[I-1].second.first<<" "<<V[I-1].second.second<<endl;
    }


    return 0;
}



