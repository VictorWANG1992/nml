#include "TestChannel.h"
#include "linklist.hh"

TestChannel::TestChannel(NML_FORMAT_PTR my_format, const char *buffer,
                         const char *process, const char *nml_cfg, int set_to_server ) :
    NML(my_format, buffer, process, nml_cfg) {
    format_chain = new LinkedList;
    prefix_format_chain(my_format);
    channel_type = RCS_CMD_CHANNEL_TYPE;

    register_with_server();
}

