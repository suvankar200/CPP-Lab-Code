    #include <iostream>
    using namespace std;
    int main()
    {


    int n=5;
    int i;
    int p=10;
    for(i=1;i<n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<p<<" ";
            p--;
        }
        cout<<endl;
    }
    return 0;
    }
