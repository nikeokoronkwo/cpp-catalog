====
ANSI
====

Welcome to the C++ ANSI Colour library, designed to make it easier to use ANSI in your code.

One special feature that this has is the ability to make your own **custom colours**. 

.. code-block:: c++

    #include <ansi.h>
    #include <iostream>

    int main() {
        std::cout << red("Hello") << std::endl;
        return 0;
    }

Building This Pro