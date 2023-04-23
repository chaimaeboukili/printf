printf project

DESCRIPTION
------------------------------------------------------------------------------------------------
_printf() is a variadic function that performs formatted output conversion and prints data. This function is declared and defined in the header "stdio.h" Its prototype is the following:
          int _printf(const char *format, ...)
The format tags prototype is the following:
                                           %specifier
SPECIFIERS
-----------------------------------------------------------------------------------------------------
The conversion specifier is a single letter determining which argument type is expected and how it is formatted.
|  Specifier  |  Output                                  |
|:---:|:---:|
| c           |  Character                               |
| d or i	| Signed integer   |
|s	|String of characters|
|b	|Binary Representation of unsigned integer|
|u	|Unsigned integer|
|o	|Unsigned octal|
|x	|Unsigned hexadecimal integer|
|X	|Unsigned hexadecimal integer (uppercase)|
|S	|String with hex-ascii value replacing special chars|
|p	|Pointer address|
|r	|Reversed string of characters|
|%	|A literal percent character|

AUTHORS
-------------------------------------------
BOUKILI Chaimae
BELBSIR Mohamed Salah
