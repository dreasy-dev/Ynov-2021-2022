#include "qstd.h"
using namespace qstd;
#include "section.h"

void testsection() {
    Section s(10, 18);
    cout<<"s="<<s.toString()<<"\n";
    s.setR_e(15);
    cout<<"s="<<s.toString()<<"\n";
}

int main()
{
    cout<<"projet section \n";
    testsection();
}
