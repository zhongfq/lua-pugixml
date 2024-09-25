---@format disable

package.path = "./?.lua;./?/init.lua;" .. package.path

require "olua"

olua.ENABLE_EXCEPTION = true
olua.CAPTURE_MAINTHREAD = true
olua.PARSE_ALL_COMMENTS = true

-------------------------------------------------------------------------------
--- clang compile options
-------------------------------------------------------------------------------
clang {
    "-DOLUA_DEBUG",
    "-I./olua",
    "-I./lua",
    "-I./pugixml/src",
    "-I./src",
}

-------------------------------------------------------------------------------
--- clang wrapper
-------------------------------------------------------------------------------
module "pugixml"

output_dir "src"

api_dir "addons/pugixml"

headers [[
#include "pugixml.hpp"
#include "pugixml_lua.h"
#include "olua.hpp"
]]

luacls(function (cxxcls)
    return cxxcls:gsub("pugi::", "pugixml."):gsub("::", ".")
end)

entry "pugi::xml_document"

exclude_type "pugi::xpath_node_set::const_iterator"
exclude_type "pugi::xml_attribute_struct"
exclude_type "pugi::xml_node_struct"
exclude_type "std::basic_ostream"
exclude_type "std::deque"
exclude_type "wchar_t"
exclude_type "std::basic_istream"

typedef "pugi::string_t"
    .conv "olua_$$_string"
    .luatype "string"

typeonly "pugi::xml_object_range<pugi::xml_node_iterator>"
    .iterator "pugi::xml_node_iterator"
typeonly "pugi::xml_object_range<pugi::xml_attribute_iterator>"
    .iterator "pugi::xml_attribute_iterator"
typeonly "pugi::xml_object_range<pugi::xml_named_node_iterator>"
    .iterator "pugi::xml_named_node_iterator"

typeconf "pugi::xpath_value_type"
typeconf "pugi::xpath_node_set::type_t"
typeconf "pugi::xpath_query"
typeconf "pugi::xpath_node"
typeconf "pugi::xpath_parse_result"
typeconf "pugi::xpath_node_set"
typeconf "pugi::xpath_variable_set"
typeconf "pugi::xpath_variable"
typeconf "pugi::xml_node_type"
typeconf "pugi::xml_encoding"
typeconf "pugi::xml_parse_status"
typeconf "pugi::xml_parse_result"
typeconf "pugi::xml_attribute"
    .func "set_value(int)" .luafn "set_int_value"
    .func "set_value(unsigned int)" .luafn "set_uint_value"
    .func "set_value(long)" .luafn "set_long_value"
    .func "set_value(unsigned long)" .luafn "set_ulong_value"
    .func "set_value(double)" .luafn "set_double_value"
    .func "set_value(double, int)" .luafn "set_double_value"
    .func "set_value(float)" .luafn "set_float_value"
    .func "set_value(float, int)" .luafn "set_float_value"
    .func "set_value(bool)" .luafn "set_bool_value"
    .macro "#ifdef PUGIXML_HAS_LONG_LONG"
    .func "set_value(long long)" .luafn "set_llong_value"
    .func "set_value(unsigned long long)" .luafn "set_ullong_value"
    .macro "#endif"
typeconf "pugi::xml_tree_walker"
typeconf "pugi::lua_xml_tree_walker"
typeconf "pugi::xml_writer"
typeconf "pugi::xml_writer_file"
typeconf "pugi::lua_xml_writer"
typeconf "pugi::xml_text"
    .func "set(int)" .luafn "set_int"
    .func "set(unsigned int)" .luafn "set_uint"
    .func "set(long)" .luafn "set_long"
    .func "set(unsigned long)" .luafn "set_ulong"
    .func "set(double)" .luafn "set_double"
    .func "set(double, int)" .luafn "set_double"
    .func "set(float)" .luafn "set_float"
    .func "set(float, int)" .luafn "set_float"
    .func "set(bool)" .luafn "set_bool"
    .macro "#ifdef PUGIXML_HAS_LONG_LONG"
    .func "set(long long)" .luafn "set_llong"
    .func "set(unsigned long long)" .luafn "set_ullong"
    .macro "#endif"
typeconf "pugi::xml_node"
    .iterator "pugi::xml_node::iterator"
    .func "find_attribute"
        .inst "find_attribute<std::function<bool(const pugi::xml_attribute &)>>"
        .tag_scope "invoker"
    .func "find_child"
        .inst "find_child<std::function<bool(const pugi::xml_node &)>>"
        .tag_scope "invoker"
    .func "find_node"
        .inst "find_node<std::function<bool(const pugi::xml_node &)>>"
        .tag_scope "invoker"
typeconf "pugi::xml_document"
