#include <iostream>

using namespace std;

int main(void) {

	int matrix[10][10] = { };

	for(int i=1;i<=100;i++)
    {
       cout<<i/10*i%10<<" ";
       if(i%10==0)
       cout<<endl;
    }

	return 0;
}