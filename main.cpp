#include <iostream>
int  Fibonachi(int n)
{
    if (n==1 || n==2)
        return 1;
    if (n==0)
        return  0;

    return Fibonachi(n - 1) + Fibonachi(n  - 2);

}
int main() {
    int n;
    std::cout << "Enter n Fibonachi\n";
    std::cin >> n;
for ( int i =0; i < n; i++)
{
    std::cout << Fibonachi(i) << " ";
}
    return 0;
}
