#include<iostream>
using namespace std;
namespace ns1{
int i;
namespace ns2{
int j;
}
}
int main()
{
ns1::i=19;
ns1::ns2::j=10;
cout<<ns1::i<<" "<<ns1::ns2::j<<"\n";
using namespace ns1;
using namespace ns2;
cout<<i*j;
return 0;
}
