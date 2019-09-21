#ifndef TESTCHANNEL_H
#define TESTCHANNEL_H

#include "nml.hh"
#include "TestNmlMsg.h"

class TestChannel : public NML {
public:
    TestChannel(NML_FORMAT_PTR my_format, const char *buffer, const char *process, const char *nml_cfg, int set_to_server = 0);
    TestNmlMsg *get_address() {
        return ((TestNmlMsg *) NML::get_address());
    };
};

#endif // TESTCHANNEL_H
