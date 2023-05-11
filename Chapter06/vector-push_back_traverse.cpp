#include <stdio.h>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    int n;

    // 输入
    scanf("%d", &n);
    int tmp;
    for (int i=0; i < n; i++){
        scanf("%d", &tmp);
        v.push_back(tmp);
    }
    // 输出
    for (int i=0; i < n-1; i++)
        printf("%d ", v[i]);
    printf("%d", v[n-1]);
    return 0;
}