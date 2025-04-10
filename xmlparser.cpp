#include <string>
#include <stack>
#include "xmlparser.hpp"

namespace MeowEXI {

XmlParser::XmlParser(std::string str) : str(str) {
    pos = 0;
    stack.push(Event::START_DOCUMENT);
}

void XmlParser::next() {
    
}

} // MeowEXI

int main(int argc, char* argv[]) {}