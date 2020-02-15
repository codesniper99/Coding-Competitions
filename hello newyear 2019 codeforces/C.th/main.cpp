#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>


using namespace __gnu_pbds;

#define ll long long int
#define li long int
using namespace std;

typedef vector<long long int> vi;
typedef pair<ll, ll> pi;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;


#define EB emplace_back
#define REP(i, x, y) for(long long int i=x ; i<y ; i++)
#define F first
#define PB push_back
#define S second
#define MP make_pair
#define MT make_tuple
#define INF 9999999
#define MOD 1000000007


bool areParanthesisBalanced(string expr)
{
    stack<char> s;
    char x;

    // Traversing the Expression
    for (ll i=0; i<expr.length(); i++)
    {
        if (expr[i]=='('||expr[i]=='['||expr[i]=='{')
        {
            // Push the element in the stack
            s.push(expr[i]);
            continue;
        }

        // IF current current character is not opening
        // bracket, then it must be closing. So stack
        // cannot be empty at this point.
        if (s.empty())
           return false;

        switch (expr[i])
        {
        case ')':

            // Store the top element in a
            x = s.top();
            s.pop();
            if (x=='{' || x=='[')
                return false;
            break;

        case '}':

            // Store the top element in b
            x = s.top();
            s.pop();
            if (x=='(' || x=='[')
                return false;
            break;

        case ']':

            // Store the top element in c
            x = s.top();
            s.pop();
            if (x =='(' || x == '{')
                return false;
            break;
        }
    }

    // Check Empty Stack
    return (s.empty());
}


int main()
{
    ios::sync_with_stdio(0);

    ll n;
    cin>>n;

    vector<pair<ll,ll> > zero;
    vector<pair<ll,ll> > left;
    vector<pair<ll,ll> > right;
    vector<string > a(n);
    map<string,ll>m;
    vector<string>b;
    REP(i,0,n)
    {
        cin>>a[i];
                b.PB(a[i]);
    }
    ll len=b.size();
ll counte=0;
    REP(i,0,len)
    {
                string r=b[i];
                ll len7=r.size();
                 ll x=0;
                    REP(j,0,len7)
                    {
                        if(r[j]==')')
                        {
                            x--;
                        }
                        else
                        {
                            x++;
                        }

                    }
                    if(x<0)
                    left.PB(make_pair(x,i));

                    else if(x>0)
                        right.PB(make_pair(x,i));

                    else
                    {
                        zero.push_back(make_pair(0,i));
                    }


    }
    ll len2=left.size();
    ll len3=right.size();
    vector<string> ans;
    map<string ,ll> m2;
    map<pair<ll,ll>,ll>pa2;
    ll answer=0;

    REP(i,0,len2){
        //cout<<b[left[i].second]<<"\n k ";

        REP(j,0,len3)
        {
           // cout<<b[right[j].second]<<"\n";
           // cout<<"\n"<<right[j].first<<" "<<left[i].first<<"\n";
            if((right[j].first+left[i].first )==0 && (right[j].first!=0 && left[i].first!=0))
            {
                string g=b[right[j].second]+b[left[i].second];
              //  cout<<"ooh "<<g<<"  oh";
               if(areParanthesisBalanced(g) )
             {
               //  string y=b[left[i].second]+b[right[j].second];
               //  cout<<"\n balanced  = "<<g<<"\n";
                    if(m2[g]!=1&& pa2[make_pair(i,j)]!=1&&pa2[make_pair(j,i)]!=1 )//&& m2[y]!=1)
                {
                    m2[g]=1;
                     pa2[make_pair(i,j)]=1;pa2[make_pair(j,i)]=1;
                   // m2[y]=1;
                    answer++;
                }
            }
                else
                {

                    ;
                }

            }
        }
    }

    ll len5=zero.size();
    map<pair<ll,ll> ,ll>pa;
    //cout<<len5<<" ";
   REP(i,0,len5-1)
    {
        REP(j,0,len5)
        {
            if(i!=j){
            string g=b[zero[j].second]+b[zero[i].second];
            string y=b[zero[i].second]+b[zero[j].second];
            //cout<<g<<" "<<y<<" \n";
            if(areParanthesisBalanced(g)&& areParanthesisBalanced(y)){
            if(m2[g]!=1 &&pa[make_pair(i,j)]!=1&& pa[make_pair(j,i)]!=1  )//&& m2[y]!=1)
            {
                //cout<<"yo!! \n\n";
                answer++;
                m2[g]=1;
                pa[make_pair(i,j)]=1; pa[make_pair(j,i)]=1;
                //m2[y]=1;
            }
            }
            }

        }

    }


        cout<<answer<<"\n";
    /*REP(i,0,len4)
    {
        cout<<ans[i]<<"\n";
    }*/






    return 0;
}
