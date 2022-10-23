#include "../include/aSimpleProject_bits/test.hpp"
#include "../include/aSimpleProject_bits/standard.hpp"

using namespace std;

static void message()
{
    cout << endl;
    cout << "aSimpleProject which calls another home made project." << endl;
}

void testStart()
{
    TEST(message);
}
