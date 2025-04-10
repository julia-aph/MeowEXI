#include <string>
#include <stack>

enum class Event {
    start_document, version_info, encoding_decl, standalone_decl,
    doctype_decl,

    start_element, chars, predef_ref, ucs2_ref, unknown_ref, end_element,

    attr_name, attr_chars, attr_predef_ref, attr_ucs2_ref, unknown_attr_ref,
    end_attr,

    pi_target, pi_data,

    start_cdata, end_cdata,

    comment, exception, end_document
};

class XmlParser {
    std::string str;
    std::size_t pos;
    std::stack<Event> stack;

public:
    XmlParser(std::string str) : str(str) {
        pos = 0;
        stack.push(Event::start_document);
    }

    void next() {
        
    }
};

int main() {
    return 0;
}