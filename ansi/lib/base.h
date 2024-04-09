#ifndef ANSI_BASE_H
#define ANSI_BASE_H

#ifdef __cplusplus
#include <string>
#endif

#ifdef __cplusplus
extern "C" {
#endif

char* format(char* str, char* code);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
std::string format(std::string str, char* code); 

class Ansi {
    std::string code;
public:
    Ansi(const char* m_code);
    Ansi(std::string m_code);

    static Ansi custom(int rgbcode);

    std::string get_code() const;

    std::string operator()(std::string str) const;
};
#endif

#endif