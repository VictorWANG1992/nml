#include <iostream>
#include <unistd.h>
#include "TestChannel.h"
#include "TestNmlMsg.h"

using namespace std;

int main()
{
    cout << "nml CLIENT starts ..., press anykey to continue ..." << endl;
    char cc;
    cin >> cc;

    std::string nml_cfg = "/home/debian/codes/test/nml/test.nml";
    TestChannel *test_channel = new TestChannel(test_format, "TestBuffer", "TestProcess", nml_cfg.c_str());

    if (!test_channel->valid()) {
        std::cout << "test channel is not valid !!! return ..." << std::endl;
        return 0;
    }

    sleep(1);

    TestNmlMsg *test_msg = test_channel->get_address();
    char s_c = test_msg->c;
    double s_d = test_msg->d;

    std::cout << "Server c: " << s_c << "\tServer d: " << s_d <<std::endl;

    TestNmlMsg my_msg;
    my_msg.c = '@';
    my_msg.d = 56.78;

    if (0 != test_channel->write(&my_msg)) {
        std::cout << "Channel write error !!" << std::endl;
    }

    sleep(5);

    return 0;
}

