#include <iostream>
#include <string>
#include <unistd.h>
#include "TestNmlMsg.h"
#include "TestChannel.h"
#include "nml_srv.hh"

using namespace std;

int main()
{

    cout << "nml SERVER starts ..., press anykey to continue ..." << endl;

    char cc;
    std::cin >> cc;

    std::string nml_cfg = "/home/debian/codes/test/nml/test.nml";
    TestChannel *test_channel = new TestChannel(test_format, "TestBuffer", "TestProcess", nml_cfg.c_str());
    if (0 == test_channel) {
        sleep(1);
        test_channel = new TestChannel(test_format, "TestBuffer", "TestProcess", nml_cfg.c_str());
        if (0 == test_channel) {
            std::cout<<"Channel initialze failed !!!" << std::endl;
        } else {
            std::cout << "Channel initialze successfully ^-^ ^-^ ^-^" << std::endl;
        }
    }

    cout << "SERVER starts ..." << endl;
    run_nml_servers();

}
