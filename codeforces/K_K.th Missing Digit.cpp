#include <bits/stdc++.h>

using namespace std;
int N, N2, N3;
long long Num1, Num2, Num3, C;
string Num, Num_1, Num_3, Salto;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
while(cin >> N >> N2 >> N3)
{

cin >>Num;
cin>>Num_1;
cin>>Num_3;

for(int i = 0; i < Num.size(); i++)
Num1 = (Num1 + (Num[i] - '0')) % 9;

for(int i = 0; i < Num_1.size(); i++)
Num2 = (Num2 + (Num_1[i] - '0')) % 9;

for(int i = 0; i < Num_3.size(); i++)
if(Num_3[i] != '*')
Num3 = (Num3 + (Num_3[i] - '0')) % 9;

C = (Num1*Num2) % 9;
       
        if(C != Num3)
            cout << ((C - Num3) + 9) % 9 << "\n";
        else
            cout << 9 << "\n";
}

return 0;

}

