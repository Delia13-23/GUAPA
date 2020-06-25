    #include<iostream>

    using namespace std;

    long long invertir(long long n);
    bool isPalindrome(long long sum);

    int main()
    {
        long long num;
        int n;
        cin>>n;
        while(n--)
        {
        cin>>num;
        long long sum,cont=1;
        while(num<=4294967295)
        {
        sum=0;
        sum=num+invertir(num);
        if(isPalindrome(sum)==true)
        {
            cout<<cont<<" "<<sum;
            break;
        }
        else
            num=sum;
        cont++;
        }
        cout<<"\n";
        }
    return 0;
    }

    //Funcion para invertir números
    long long invertir(long long n)
    {
        long long num_invertido=0;
        while(n>0)
        {
        num_invertido+=n%10;
        num_invertido*=10;
        n=n/10;
        }
        return num_invertido/10;
    }
    //Funcion para saber si un número es palindromo
    bool isPalindrome(long long sum)
    {
        if(sum==invertir(sum))
        {
            return true;
        }
        else
            return false;
    }
