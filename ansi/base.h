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
    char* code;
public:
    Ansi(char* m_code);
    Ansi(std::string m_code);

    static Ansi custom(int rgbcode);

    char* operator()(char* str);
    std::string operator()(std::string str);
}
#endif

