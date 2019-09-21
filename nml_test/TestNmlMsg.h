#ifndef TESTNMLMSG_H
#define TESTNMLMSG_H

#include "nml.hh"
#include "nmlmsg.hh"

#define TEST_NML_MSG_TYPE 101
class CMS;

class TestNmlMsg : public NMLmsg  {
public:
    TestNmlMsg();

    void update(CMS *);

    char c;
    double d;
};

int test_format(NMLTYPE type, void *buf, CMS *cms);

#endif // TESTNMLMSG_H
