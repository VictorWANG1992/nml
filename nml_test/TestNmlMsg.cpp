#include "TestNmlMsg.h"

#include "rcs.hh"
#include "cms.hh"

#include <iostream>

TestNmlMsg::TestNmlMsg() : NMLmsg(TEST_NML_MSG_TYPE, sizeof(TestNmlMsg)) {
    c = '&';
    d = 12.34;
}

void TestNmlMsg::update(CMS *cms) {
    std::cout << "UPDATE informations here ..." << std::endl;
    cms->update(c);
    cms->update(d);
}

int test_format(NMLTYPE type, void *buf, CMS *cms) {
    switch(type) {
    case TEST_NML_MSG_TYPE:
        ((TestNmlMsg *)buf)->update(cms);
        break;
     default:
        return -1;
    }

    return 0;
}
