
    t
    t=input()
    while(t--)

        map<ll,ll>m;
        ll n,a,b;
        cin>>n>>a>>b;
        vector<ll>num(n);
        for(ll i=0;i<n;i++)
                cin>>num[i];
                m[num[i]]++;

        double pa,pb;
        pa=(double)m[a]/(double)n;
        pb=(double)m[b]/(double)n;
        cout<<fixed<<setprecision(10)<<pa*pb<<'\n';


