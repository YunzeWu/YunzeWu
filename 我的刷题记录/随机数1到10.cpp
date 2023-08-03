#include<bits/stdc++.h> 

using namespace std;

int main()
{
   srand(time(nullptr)); // 初始化随机种子
   int random_num = rand() % 10 + 1; // 生成1到10之间的随机数
   cout << "随机数是：" << random_num << endl;
   return 0;
}


