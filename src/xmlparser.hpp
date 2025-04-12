#include <string>
#include <stack>

#pragma once

namespace MeowEXI {

enum class Event {
    START_DOCUMENT,
    VERSION_INFO,
    ENCODING_DECL,
    STANDALONE_DECL,
    DOCTYPE_DECL,
    START_ELEMENT,
    CHARS,
    PREDEF_REF,
    UCS2_REF,
    UNKNOWN_REF,
    END_ELEMENT,
    ATTR_NAME,
    ATTR_CHARS,
    ATTR_PREDEF_REF,
    ATTR_UCS2_REF,
    UNKNOWN_ATTR_REF,
    END_ATTR,
    PI_TARGET,
    PI_DATA,
    START_CDATA,
    END_CDATA,
    COMMENT,
    EXCEPTION,
    END_DOCUMENT
};

class XmlParser {
public:
    XmlParser(std::string str);

    void next();

    std::string str;
    std::size_t pos;
    std::stack<Event> stack;
};

} // MeowEXI