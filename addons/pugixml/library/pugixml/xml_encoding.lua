---AUTO GENERATED, DO NOT MODIFY!
---@meta pugixml.xml_encoding

---@type pugixml.xml_encoding
local VALUE

---
---@enum pugixml.xml_encoding
local xml_encoding = {
    ---Auto-detect input encoding using BOM or < / <? detection; use UTF8 if BOM is not found
    encoding_auto = 0,
    encoding_latin1 = 9,
    ---UTF16 with native endianness
    encoding_utf16 = 4,
    ---Big-endian UTF16
    encoding_utf16_be = 3,
    ---Little-endian UTF16
    encoding_utf16_le = 2,
    ---UTF32 with native endianness
    encoding_utf32 = 7,
    ---Big-endian UTF32
    encoding_utf32_be = 6,
    ---Little-endian UTF32
    encoding_utf32_le = 5,
    ---UTF8 encoding
    encoding_utf8 = 1,
    ---The same encoding wchar_t has (either UTF16 or UTF32)
    encoding_wchar = 8,
}

return xml_encoding