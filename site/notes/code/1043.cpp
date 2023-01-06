    #include<iostream> 
    #include<iomanip>
    using namespace std;
    long double a,b;
    char c;

    int main()
    {
        cin>>a>>b;
        if(a>b)cout<<'>';
        if(a=b)cout<<'=';
        if(a<b)cout<<'<';

        return 0;
    }