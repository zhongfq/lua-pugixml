//
// AUTO GENERATED, DO NOT MODIFY!
//
#include "lua_pugixml.h"
#include "pugixml.hpp"
#include "pugixml_lua.h"
#include "olua.hpp"

static int _olua_module_pugixml(lua_State *L);

static int _olua_cls_pugixml_xpath_value_type(lua_State *L)
{
    oluacls_class<pugi::xpath_value_type>(L, "pugixml.xpath_value_type");
    oluacls_func(L, "__index", olua_indexerror);
    oluacls_func(L, "__newindex", olua_newindexerror);
    oluacls_enum(L, "xpath_type_boolean", (lua_Integer)pugi::xpath_value_type::xpath_type_boolean);
    oluacls_enum(L, "xpath_type_node_set", (lua_Integer)pugi::xpath_value_type::xpath_type_node_set);
    oluacls_enum(L, "xpath_type_none", (lua_Integer)pugi::xpath_value_type::xpath_type_none);
    oluacls_enum(L, "xpath_type_number", (lua_Integer)pugi::xpath_value_type::xpath_type_number);
    oluacls_enum(L, "xpath_type_string", (lua_Integer)pugi::xpath_value_type::xpath_type_string);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_pugixml_xpath_value_type(lua_State *L)
{
    olua_require(L, "pugixml",  _olua_module_pugixml);
    if (!olua_getclass(L, "pugixml.xpath_value_type")) {
        luaL_error(L, "class not found: pugi::xpath_value_type");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_cls_pugixml_xpath_node_set_type_t(lua_State *L)
{
    oluacls_class<pugi::xpath_node_set::type_t>(L, "pugixml.xpath_node_set.type_t");
    oluacls_func(L, "__index", olua_indexerror);
    oluacls_func(L, "__newindex", olua_newindexerror);
    oluacls_enum(L, "type_sorted", (lua_Integer)pugi::xpath_node_set::type_t::type_sorted);
    oluacls_enum(L, "type_sorted_reverse", (lua_Integer)pugi::xpath_node_set::type_t::type_sorted_reverse);
    oluacls_enum(L, "type_unsorted", (lua_Integer)pugi::xpath_node_set::type_t::type_unsorted);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_pugixml_xpath_node_set_type_t(lua_State *L)
{
    olua_require(L, "pugixml",  _olua_module_pugixml);
    if (!olua_getclass(L, "pugixml.xpath_node_set.type_t")) {
        luaL_error(L, "class not found: pugi::xpath_node_set::type_t");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_pugi_xpath_query___gc(lua_State *L)
{
    olua_startinvoke(L);

    auto self = (pugi::xpath_query *)olua_toobj(L, 1, "pugixml.xpath_query");
    olua_postgc(L, self);

    olua_endinvoke(L);

    return 0;
}

static int _olua_fun_pugi_xpath_query_evaluate_boolean(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xpath_query *self = nullptr;
        pugi::xpath_node *arg1;       /** n */

        olua_to_object(L, 1, &self, "pugixml.xpath_query");
        olua_check_object(L, 2, &arg1, "pugixml.xpath_node");

        // bool evaluate_boolean(const pugi::xpath_node &n)
        bool ret = self->evaluate_boolean(*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xpath_query::evaluate_boolean(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xpath_query_evaluate_node(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xpath_query *self = nullptr;
        pugi::xpath_node *arg1;       /** n */

        olua_to_object(L, 1, &self, "pugixml.xpath_query");
        olua_check_object(L, 2, &arg1, "pugixml.xpath_node");

        // pugi::xpath_node evaluate_node(const pugi::xpath_node &n)
        pugi::xpath_node ret = self->evaluate_node(*arg1);
        int num_ret = olua_copy_object(L, ret, "pugixml.xpath_node");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xpath_query::evaluate_node(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xpath_query_evaluate_node_set(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xpath_query *self = nullptr;
        pugi::xpath_node *arg1;       /** n */

        olua_to_object(L, 1, &self, "pugixml.xpath_query");
        olua_check_object(L, 2, &arg1, "pugixml.xpath_node");

        // pugi::xpath_node_set evaluate_node_set(const pugi::xpath_node &n)
        pugi::xpath_node_set ret = self->evaluate_node_set(*arg1);
        int num_ret = olua_copy_object(L, ret, "pugixml.xpath_node_set");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xpath_query::evaluate_node_set(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xpath_query_evaluate_number(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xpath_query *self = nullptr;
        pugi::xpath_node *arg1;       /** n */

        olua_to_object(L, 1, &self, "pugixml.xpath_query");
        olua_check_object(L, 2, &arg1, "pugixml.xpath_node");

        // double evaluate_number(const pugi::xpath_node &n)
        double ret = self->evaluate_number(*arg1);
        int num_ret = olua_push_number(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xpath_query::evaluate_number(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xpath_query_evaluate_string$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xpath_query *self = nullptr;
        pugi::xpath_node *arg1;       /** n */

        olua_to_object(L, 1, &self, "pugixml.xpath_query");
        olua_check_object(L, 2, &arg1, "pugixml.xpath_node");

        // pugi::string_t evaluate_string(const pugi::xpath_node &n)
        pugi::string_t ret = self->evaluate_string(*arg1);
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xpath_query::evaluate_string(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xpath_query_evaluate_string$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xpath_query *self = nullptr;
        pugi::char_t *arg1 = nullptr;       /** buffer */
        size_t arg2 = 0;       /** capacity */
        pugi::xpath_node *arg3;       /** n */

        olua_to_object(L, 1, &self, "pugixml.xpath_query");
        olua_check_string(L, 2, &arg1);
        olua_check_integer(L, 3, &arg2);
        olua_check_object(L, 4, &arg3, "pugixml.xpath_node");

        // size_t evaluate_string(pugi::char_t *buffer, size_t capacity, const pugi::xpath_node &n)
        size_t ret = self->evaluate_string(arg1, arg2, *arg3);
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xpath_query::evaluate_string(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xpath_query_evaluate_string(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "pugixml.xpath_query")) && (olua_is_object(L, 2, "pugixml.xpath_node"))) {
            // pugi::string_t evaluate_string(const pugi::xpath_node &n)
            return _olua_fun_pugi_xpath_query_evaluate_string$1(L);
        // }
    }

    if (num_args == 4) {
        // if ((olua_is_object(L, 1, "pugixml.xpath_query")) && (olua_is_string(L, 2)) && (olua_is_integer(L, 3)) && (olua_is_object(L, 4, "pugixml.xpath_node"))) {
            // size_t evaluate_string(pugi::char_t *buffer, size_t capacity, const pugi::xpath_node &n)
            return _olua_fun_pugi_xpath_query_evaluate_string$2(L);
        // }
    }

    luaL_error(L, "method 'pugi::xpath_query::evaluate_string' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xpath_query_new$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        const pugi::char_t *arg1 = nullptr;       /** query */
        pugi::xpath_variable_set *arg2 = nullptr;       /** variables */

        olua_check_string(L, 1, &arg1);
        olua_check_object(L, 2, &arg2, "pugixml.xpath_variable_set");

        // pugi::xpath_query(const pugi::char_t *query, @optional pugi::xpath_variable_set *variables)
        pugi::xpath_query *ret = new pugi::xpath_query(arg1, arg2);
        int num_ret = olua_push_object(L, ret, "pugixml.xpath_query");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xpath_query::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xpath_query_new$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        const pugi::char_t *arg1 = nullptr;       /** query */

        olua_check_string(L, 1, &arg1);

        // pugi::xpath_query(const pugi::char_t *query)
        pugi::xpath_query *ret = new pugi::xpath_query(arg1);
        int num_ret = olua_push_object(L, ret, "pugixml.xpath_query");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xpath_query::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xpath_query_new$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // pugi::xpath_query()
        pugi::xpath_query *ret = new pugi::xpath_query();
        int num_ret = olua_push_object(L, ret, "pugixml.xpath_query");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xpath_query::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xpath_query_new(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 0) {
        // pugi::xpath_query()
        return _olua_fun_pugi_xpath_query_new$3(L);
    }

    if (num_args == 1) {
        // if ((olua_is_string(L, 1))) {
            // pugi::xpath_query(const pugi::char_t *query)
            return _olua_fun_pugi_xpath_query_new$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_string(L, 1)) && (olua_is_object(L, 2, "pugixml.xpath_variable_set"))) {
            // pugi::xpath_query(const pugi::char_t *query, @optional pugi::xpath_variable_set *variables)
            return _olua_fun_pugi_xpath_query_new$1(L);
        // }
    }

    luaL_error(L, "method 'pugi::xpath_query::new' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xpath_query_result(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xpath_query *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xpath_query");

        // const pugi::xpath_parse_result &result()
        const pugi::xpath_parse_result &ret = self->result();
        int num_ret = olua_push_object(L, ret, "pugixml.xpath_parse_result");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xpath_query::result(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xpath_query_return_type(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xpath_query *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xpath_query");

        // pugi::xpath_value_type return_type()
        pugi::xpath_value_type ret = self->return_type();
        int num_ret = olua_push_enum(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xpath_query::return_type(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_pugixml_xpath_query(lua_State *L)
{
    oluacls_class<pugi::xpath_query>(L, "pugixml.xpath_query");
    oluacls_func(L, "__gc", _olua_fun_pugi_xpath_query___gc);
    oluacls_func(L, "evaluate_boolean", _olua_fun_pugi_xpath_query_evaluate_boolean);
    oluacls_func(L, "evaluate_node", _olua_fun_pugi_xpath_query_evaluate_node);
    oluacls_func(L, "evaluate_node_set", _olua_fun_pugi_xpath_query_evaluate_node_set);
    oluacls_func(L, "evaluate_number", _olua_fun_pugi_xpath_query_evaluate_number);
    oluacls_func(L, "evaluate_string", _olua_fun_pugi_xpath_query_evaluate_string);
    oluacls_func(L, "new", _olua_fun_pugi_xpath_query_new);
    oluacls_func(L, "result", _olua_fun_pugi_xpath_query_result);
    oluacls_func(L, "return_type", _olua_fun_pugi_xpath_query_return_type);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_pugixml_xpath_query(lua_State *L)
{
    olua_require(L, "pugixml",  _olua_module_pugixml);
    if (!olua_getclass(L, "pugixml.xpath_query")) {
        luaL_error(L, "class not found: pugi::xpath_query");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_pugi_xpath_node___eq(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xpath_node *self = nullptr;
        pugi::xpath_node *arg1;       /** n */

        olua_to_object(L, 1, &self, "pugixml.xpath_node");
        olua_check_object(L, 2, &arg1, "pugixml.xpath_node");

        // @operator(operator==) bool operator==(const pugi::xpath_node &n)
        bool ret = (*self) == (*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xpath_node::__eq(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xpath_node___gc(lua_State *L)
{
    olua_startinvoke(L);

    auto self = (pugi::xpath_node *)olua_toobj(L, 1, "pugixml.xpath_node");
    olua_postgc(L, self);

    olua_endinvoke(L);

    return 0;
}

static int _olua_fun_pugi_xpath_node_attribute(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xpath_node *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xpath_node");

        // pugi::xml_attribute attribute()
        pugi::xml_attribute ret = self->attribute();
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_attribute");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xpath_node::attribute(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xpath_node_new$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // pugi::xpath_node()
        pugi::xpath_node *ret = new pugi::xpath_node();
        int num_ret = olua_push_object(L, ret, "pugixml.xpath_node");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xpath_node::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xpath_node_new$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *arg1;       /** node */

        olua_check_object(L, 1, &arg1, "pugixml.xml_node");

        // pugi::xpath_node(const pugi::xml_node &node)
        pugi::xpath_node *ret = new pugi::xpath_node(*arg1);
        int num_ret = olua_push_object(L, ret, "pugixml.xpath_node");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xpath_node::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xpath_node_new$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_attribute *arg1;       /** attribute */
        pugi::xml_node *arg2;       /** parent */

        olua_check_object(L, 1, &arg1, "pugixml.xml_attribute");
        olua_check_object(L, 2, &arg2, "pugixml.xml_node");

        // pugi::xpath_node(const pugi::xml_attribute &attribute, const pugi::xml_node &parent)
        pugi::xpath_node *ret = new pugi::xpath_node(*arg1, *arg2);
        int num_ret = olua_push_object(L, ret, "pugixml.xpath_node");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xpath_node::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xpath_node_new(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 0) {
        // pugi::xpath_node()
        return _olua_fun_pugi_xpath_node_new$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_object(L, 1, "pugixml.xml_node"))) {
            // pugi::xpath_node(const pugi::xml_node &node)
            return _olua_fun_pugi_xpath_node_new$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "pugixml.xml_attribute")) && (olua_is_object(L, 2, "pugixml.xml_node"))) {
            // pugi::xpath_node(const pugi::xml_attribute &attribute, const pugi::xml_node &parent)
            return _olua_fun_pugi_xpath_node_new$3(L);
        // }
    }

    luaL_error(L, "method 'pugi::xpath_node::new' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xpath_node_node(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xpath_node *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xpath_node");

        // pugi::xml_node node()
        pugi::xml_node ret = self->node();
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_node");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xpath_node::node(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xpath_node_parent(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xpath_node *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xpath_node");

        // pugi::xml_node parent()
        pugi::xml_node ret = self->parent();
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_node");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xpath_node::parent(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_pugixml_xpath_node(lua_State *L)
{
    oluacls_class<pugi::xpath_node>(L, "pugixml.xpath_node");
    oluacls_func(L, "__eq", _olua_fun_pugi_xpath_node___eq);
    oluacls_func(L, "__gc", _olua_fun_pugi_xpath_node___gc);
    oluacls_func(L, "attribute", _olua_fun_pugi_xpath_node_attribute);
    oluacls_func(L, "new", _olua_fun_pugi_xpath_node_new);
    oluacls_func(L, "node", _olua_fun_pugi_xpath_node_node);
    oluacls_func(L, "parent", _olua_fun_pugi_xpath_node_parent);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_pugixml_xpath_node(lua_State *L)
{
    olua_require(L, "pugixml",  _olua_module_pugixml);
    if (!olua_getclass(L, "pugixml.xpath_node")) {
        luaL_error(L, "class not found: pugi::xpath_node");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_pugi_xpath_parse_result___gc(lua_State *L)
{
    olua_startinvoke(L);

    auto self = (pugi::xpath_parse_result *)olua_toobj(L, 1, "pugixml.xpath_parse_result");
    olua_postgc(L, self);

    olua_endinvoke(L);

    return 0;
}

static int _olua_fun_pugi_xpath_parse_result_description(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xpath_parse_result *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xpath_parse_result");

        // const char *description()
        const char *ret = self->description();
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xpath_parse_result::description(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xpath_parse_result_error$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xpath_parse_result *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xpath_parse_result");

        // const char *error
        const char *ret = self->error;
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xpath_parse_result::error(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xpath_parse_result_error$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xpath_parse_result *self = nullptr;
        const char *arg1 = nullptr;       /** error */

        olua_to_object(L, 1, &self, "pugixml.xpath_parse_result");
        olua_check_string(L, 2, &arg1);

        // const char *error
        self->error = arg1;

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xpath_parse_result::error(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xpath_parse_result_error(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // const char *error
        return _olua_fun_pugi_xpath_parse_result_error$1(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "pugixml.xpath_parse_result")) && (olua_is_string(L, 2))) {
            // const char *error
            return _olua_fun_pugi_xpath_parse_result_error$2(L);
        // }
    }

    luaL_error(L, "method 'pugi::xpath_parse_result::error' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xpath_parse_result_new(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // pugi::xpath_parse_result()
        pugi::xpath_parse_result *ret = new pugi::xpath_parse_result();
        int num_ret = olua_push_object(L, ret, "pugixml.xpath_parse_result");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xpath_parse_result::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xpath_parse_result_offset$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xpath_parse_result *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xpath_parse_result");

        // ptrdiff_t offset
        ptrdiff_t ret = self->offset;
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xpath_parse_result::offset(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xpath_parse_result_offset$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xpath_parse_result *self = nullptr;
        ptrdiff_t arg1 = 0;       /** offset */

        olua_to_object(L, 1, &self, "pugixml.xpath_parse_result");
        olua_check_integer(L, 2, &arg1);

        // ptrdiff_t offset
        self->offset = arg1;

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xpath_parse_result::offset(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xpath_parse_result_offset(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // ptrdiff_t offset
        return _olua_fun_pugi_xpath_parse_result_offset$1(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "pugixml.xpath_parse_result")) && (olua_is_integer(L, 2))) {
            // ptrdiff_t offset
            return _olua_fun_pugi_xpath_parse_result_offset$2(L);
        // }
    }

    luaL_error(L, "method 'pugi::xpath_parse_result::offset' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_cls_pugixml_xpath_parse_result(lua_State *L)
{
    oluacls_class<pugi::xpath_parse_result>(L, "pugixml.xpath_parse_result");
    oluacls_func(L, "__gc", _olua_fun_pugi_xpath_parse_result___gc);
    oluacls_func(L, "description", _olua_fun_pugi_xpath_parse_result_description);
    oluacls_func(L, "new", _olua_fun_pugi_xpath_parse_result_new);
    oluacls_prop(L, "error", _olua_fun_pugi_xpath_parse_result_error, _olua_fun_pugi_xpath_parse_result_error);
    oluacls_prop(L, "offset", _olua_fun_pugi_xpath_parse_result_offset, _olua_fun_pugi_xpath_parse_result_offset);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_pugixml_xpath_parse_result(lua_State *L)
{
    olua_require(L, "pugixml",  _olua_module_pugixml);
    if (!olua_getclass(L, "pugixml.xpath_parse_result")) {
        luaL_error(L, "class not found: pugi::xpath_parse_result");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_pugi_xpath_node_set___gc(lua_State *L)
{
    olua_startinvoke(L);

    auto self = (pugi::xpath_node_set *)olua_toobj(L, 1, "pugixml.xpath_node_set");
    olua_postgc(L, self);

    olua_endinvoke(L);

    return 0;
}

static int _olua_fun_pugi_xpath_node_set_empty(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xpath_node_set *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xpath_node_set");

        // bool empty()
        bool ret = self->empty();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xpath_node_set::empty(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xpath_node_set_first(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xpath_node_set *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xpath_node_set");

        // pugi::xpath_node first()
        pugi::xpath_node ret = self->first();
        int num_ret = olua_copy_object(L, ret, "pugixml.xpath_node");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xpath_node_set::first(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xpath_node_set_new(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // pugi::xpath_node_set()
        pugi::xpath_node_set *ret = new pugi::xpath_node_set();
        int num_ret = olua_push_object(L, ret, "pugixml.xpath_node_set");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xpath_node_set::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xpath_node_set_size(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xpath_node_set *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xpath_node_set");

        // size_t size()
        size_t ret = self->size();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xpath_node_set::size(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xpath_node_set_sort$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xpath_node_set *self = nullptr;
        bool arg1 = false;       /** reverse */

        olua_to_object(L, 1, &self, "pugixml.xpath_node_set");
        olua_check_bool(L, 2, &arg1);

        // void sort(@optional bool reverse)
        self->sort(arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xpath_node_set::sort(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xpath_node_set_sort$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xpath_node_set *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xpath_node_set");

        // void sort()
        self->sort();

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xpath_node_set::sort(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xpath_node_set_sort(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // void sort()
        return _olua_fun_pugi_xpath_node_set_sort$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "pugixml.xpath_node_set")) && (olua_is_bool(L, 2))) {
            // void sort(@optional bool reverse)
            return _olua_fun_pugi_xpath_node_set_sort$1(L);
        // }
    }

    luaL_error(L, "method 'pugi::xpath_node_set::sort' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xpath_node_set_type(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xpath_node_set *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xpath_node_set");

        // pugi::xpath_node_set::type_t type()
        pugi::xpath_node_set::type_t ret = self->type();
        int num_ret = olua_push_enum(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xpath_node_set::type(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_pugixml_xpath_node_set(lua_State *L)
{
    oluacls_class<pugi::xpath_node_set>(L, "pugixml.xpath_node_set");
    oluacls_func(L, "__gc", _olua_fun_pugi_xpath_node_set___gc);
    oluacls_func(L, "empty", _olua_fun_pugi_xpath_node_set_empty);
    oluacls_func(L, "first", _olua_fun_pugi_xpath_node_set_first);
    oluacls_func(L, "new", _olua_fun_pugi_xpath_node_set_new);
    oluacls_func(L, "size", _olua_fun_pugi_xpath_node_set_size);
    oluacls_func(L, "sort", _olua_fun_pugi_xpath_node_set_sort);
    oluacls_func(L, "type", _olua_fun_pugi_xpath_node_set_type);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_pugixml_xpath_node_set(lua_State *L)
{
    olua_require(L, "pugixml",  _olua_module_pugixml);
    if (!olua_getclass(L, "pugixml.xpath_node_set")) {
        luaL_error(L, "class not found: pugi::xpath_node_set");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_pugi_xpath_variable_set___gc(lua_State *L)
{
    olua_startinvoke(L);

    auto self = (pugi::xpath_variable_set *)olua_toobj(L, 1, "pugixml.xpath_variable_set");
    olua_postgc(L, self);

    olua_endinvoke(L);

    return 0;
}

static int _olua_fun_pugi_xpath_variable_set_add(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xpath_variable_set *self = nullptr;
        const pugi::char_t *arg1 = nullptr;       /** name */
        pugi::xpath_value_type arg2 = (pugi::xpath_value_type)0;       /** type */

        olua_to_object(L, 1, &self, "pugixml.xpath_variable_set");
        olua_check_string(L, 2, &arg1);
        olua_check_enum(L, 3, &arg2);

        // pugi::xpath_variable *add(const pugi::char_t *name, pugi::xpath_value_type type)
        pugi::xpath_variable *ret = self->add(arg1, arg2);
        int num_ret = olua_push_object(L, ret, "pugixml.xpath_variable");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xpath_variable_set::add(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xpath_variable_set_get(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xpath_variable_set *self = nullptr;
        const pugi::char_t *arg1 = nullptr;       /** name */

        olua_to_object(L, 1, &self, "pugixml.xpath_variable_set");
        olua_check_string(L, 2, &arg1);

        // pugi::xpath_variable *get(const pugi::char_t *name)
        pugi::xpath_variable *ret = self->get(arg1);
        int num_ret = olua_push_object(L, ret, "pugixml.xpath_variable");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xpath_variable_set::get(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xpath_variable_set_new(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // pugi::xpath_variable_set()
        pugi::xpath_variable_set *ret = new pugi::xpath_variable_set();
        int num_ret = olua_push_object(L, ret, "pugixml.xpath_variable_set");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xpath_variable_set::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xpath_variable_set_set$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xpath_variable_set *self = nullptr;
        const pugi::char_t *arg1 = nullptr;       /** name */
        bool arg2 = false;       /** value */

        olua_to_object(L, 1, &self, "pugixml.xpath_variable_set");
        olua_check_string(L, 2, &arg1);
        olua_check_bool(L, 3, &arg2);

        // bool set(const pugi::char_t *name, bool value)
        bool ret = self->set(arg1, arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xpath_variable_set::set(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xpath_variable_set_set$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xpath_variable_set *self = nullptr;
        const pugi::char_t *arg1 = nullptr;       /** name */
        double arg2 = 0;       /** value */

        olua_to_object(L, 1, &self, "pugixml.xpath_variable_set");
        olua_check_string(L, 2, &arg1);
        olua_check_number(L, 3, &arg2);

        // bool set(const pugi::char_t *name, double value)
        bool ret = self->set(arg1, arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xpath_variable_set::set(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xpath_variable_set_set$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xpath_variable_set *self = nullptr;
        const pugi::char_t *arg1 = nullptr;       /** name */
        const pugi::char_t *arg2 = nullptr;       /** value */

        olua_to_object(L, 1, &self, "pugixml.xpath_variable_set");
        olua_check_string(L, 2, &arg1);
        olua_check_string(L, 3, &arg2);

        // bool set(const pugi::char_t *name, const pugi::char_t *value)
        bool ret = self->set(arg1, arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xpath_variable_set::set(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xpath_variable_set_set$4(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xpath_variable_set *self = nullptr;
        const pugi::char_t *arg1 = nullptr;       /** name */
        pugi::xpath_node_set *arg2;       /** value */

        olua_to_object(L, 1, &self, "pugixml.xpath_variable_set");
        olua_check_string(L, 2, &arg1);
        olua_check_object(L, 3, &arg2, "pugixml.xpath_node_set");

        // bool set(const pugi::char_t *name, const pugi::xpath_node_set &value)
        bool ret = self->set(arg1, *arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xpath_variable_set::set(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xpath_variable_set_set(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 3) {
        if ((olua_is_object(L, 1, "pugixml.xpath_variable_set")) && (olua_is_string(L, 2)) && (olua_is_bool(L, 3))) {
            // bool set(const pugi::char_t *name, bool value)
            return _olua_fun_pugi_xpath_variable_set_set$1(L);
        }

        if ((olua_is_object(L, 1, "pugixml.xpath_variable_set")) && (olua_is_string(L, 2)) && (olua_is_string(L, 3))) {
            // bool set(const pugi::char_t *name, const pugi::char_t *value)
            return _olua_fun_pugi_xpath_variable_set_set$3(L);
        }

        if ((olua_is_object(L, 1, "pugixml.xpath_variable_set")) && (olua_is_string(L, 2)) && (olua_is_number(L, 3))) {
            // bool set(const pugi::char_t *name, double value)
            return _olua_fun_pugi_xpath_variable_set_set$2(L);
        }

        // if ((olua_is_object(L, 1, "pugixml.xpath_variable_set")) && (olua_is_string(L, 2)) && (olua_is_object(L, 3, "pugixml.xpath_node_set"))) {
            // bool set(const pugi::char_t *name, const pugi::xpath_node_set &value)
            return _olua_fun_pugi_xpath_variable_set_set$4(L);
        // }
    }

    luaL_error(L, "method 'pugi::xpath_variable_set::set' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_cls_pugixml_xpath_variable_set(lua_State *L)
{
    oluacls_class<pugi::xpath_variable_set>(L, "pugixml.xpath_variable_set");
    oluacls_func(L, "__gc", _olua_fun_pugi_xpath_variable_set___gc);
    oluacls_func(L, "add", _olua_fun_pugi_xpath_variable_set_add);
    oluacls_func(L, "get", _olua_fun_pugi_xpath_variable_set_get);
    oluacls_func(L, "new", _olua_fun_pugi_xpath_variable_set_new);
    oluacls_func(L, "set", _olua_fun_pugi_xpath_variable_set_set);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_pugixml_xpath_variable_set(lua_State *L)
{
    olua_require(L, "pugixml",  _olua_module_pugixml);
    if (!olua_getclass(L, "pugixml.xpath_variable_set")) {
        luaL_error(L, "class not found: pugi::xpath_variable_set");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_pugi_xpath_variable___gc(lua_State *L)
{
    olua_startinvoke(L);

    auto self = (pugi::xpath_variable *)olua_toobj(L, 1, "pugixml.xpath_variable");
    olua_postgc(L, self);

    olua_endinvoke(L);

    return 0;
}

static int _olua_fun_pugi_xpath_variable_get_boolean(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xpath_variable *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xpath_variable");

        // bool get_boolean()
        bool ret = self->get_boolean();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xpath_variable::get_boolean(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xpath_variable_get_node_set(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xpath_variable *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xpath_variable");

        // const pugi::xpath_node_set &get_node_set()
        const pugi::xpath_node_set &ret = self->get_node_set();
        int num_ret = olua_push_object(L, ret, "pugixml.xpath_node_set");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xpath_variable::get_node_set(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xpath_variable_get_number(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xpath_variable *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xpath_variable");

        // double get_number()
        double ret = self->get_number();
        int num_ret = olua_push_number(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xpath_variable::get_number(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xpath_variable_get_string(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xpath_variable *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xpath_variable");

        // const pugi::char_t *get_string()
        const pugi::char_t *ret = self->get_string();
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xpath_variable::get_string(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xpath_variable_name(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xpath_variable *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xpath_variable");

        // const pugi::char_t *name()
        const pugi::char_t *ret = self->name();
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xpath_variable::name(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xpath_variable_set$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xpath_variable *self = nullptr;
        bool arg1 = false;       /** value */

        olua_to_object(L, 1, &self, "pugixml.xpath_variable");
        olua_check_bool(L, 2, &arg1);

        // bool set(bool value)
        bool ret = self->set(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xpath_variable::set(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xpath_variable_set$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xpath_variable *self = nullptr;
        double arg1 = 0;       /** value */

        olua_to_object(L, 1, &self, "pugixml.xpath_variable");
        olua_check_number(L, 2, &arg1);

        // bool set(double value)
        bool ret = self->set(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xpath_variable::set(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xpath_variable_set$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xpath_variable *self = nullptr;
        const pugi::char_t *arg1 = nullptr;       /** value */

        olua_to_object(L, 1, &self, "pugixml.xpath_variable");
        olua_check_string(L, 2, &arg1);

        // bool set(const pugi::char_t *value)
        bool ret = self->set(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xpath_variable::set(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xpath_variable_set$4(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xpath_variable *self = nullptr;
        pugi::xpath_node_set *arg1;       /** value */

        olua_to_object(L, 1, &self, "pugixml.xpath_variable");
        olua_check_object(L, 2, &arg1, "pugixml.xpath_node_set");

        // bool set(const pugi::xpath_node_set &value)
        bool ret = self->set(*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xpath_variable::set(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xpath_variable_set(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 2) {
        if ((olua_is_object(L, 1, "pugixml.xpath_variable")) && (olua_is_bool(L, 2))) {
            // bool set(bool value)
            return _olua_fun_pugi_xpath_variable_set$1(L);
        }

        if ((olua_is_object(L, 1, "pugixml.xpath_variable")) && (olua_is_string(L, 2))) {
            // bool set(const pugi::char_t *value)
            return _olua_fun_pugi_xpath_variable_set$3(L);
        }

        if ((olua_is_object(L, 1, "pugixml.xpath_variable")) && (olua_is_number(L, 2))) {
            // bool set(double value)
            return _olua_fun_pugi_xpath_variable_set$2(L);
        }

        // if ((olua_is_object(L, 1, "pugixml.xpath_variable")) && (olua_is_object(L, 2, "pugixml.xpath_node_set"))) {
            // bool set(const pugi::xpath_node_set &value)
            return _olua_fun_pugi_xpath_variable_set$4(L);
        // }
    }

    luaL_error(L, "method 'pugi::xpath_variable::set' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xpath_variable_type(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xpath_variable *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xpath_variable");

        // pugi::xpath_value_type type()
        pugi::xpath_value_type ret = self->type();
        int num_ret = olua_push_enum(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xpath_variable::type(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_pugixml_xpath_variable(lua_State *L)
{
    oluacls_class<pugi::xpath_variable>(L, "pugixml.xpath_variable");
    oluacls_func(L, "__gc", _olua_fun_pugi_xpath_variable___gc);
    oluacls_func(L, "get_boolean", _olua_fun_pugi_xpath_variable_get_boolean);
    oluacls_func(L, "get_node_set", _olua_fun_pugi_xpath_variable_get_node_set);
    oluacls_func(L, "get_number", _olua_fun_pugi_xpath_variable_get_number);
    oluacls_func(L, "get_string", _olua_fun_pugi_xpath_variable_get_string);
    oluacls_func(L, "name", _olua_fun_pugi_xpath_variable_name);
    oluacls_func(L, "set", _olua_fun_pugi_xpath_variable_set);
    oluacls_func(L, "type", _olua_fun_pugi_xpath_variable_type);
    oluacls_prop(L, "boolean", _olua_fun_pugi_xpath_variable_get_boolean, nullptr);
    oluacls_prop(L, "node_set", _olua_fun_pugi_xpath_variable_get_node_set, nullptr);
    oluacls_prop(L, "number", _olua_fun_pugi_xpath_variable_get_number, nullptr);
    oluacls_prop(L, "string", _olua_fun_pugi_xpath_variable_get_string, nullptr);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_pugixml_xpath_variable(lua_State *L)
{
    olua_require(L, "pugixml",  _olua_module_pugixml);
    if (!olua_getclass(L, "pugixml.xpath_variable")) {
        luaL_error(L, "class not found: pugi::xpath_variable");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_cls_pugixml_xml_node_type(lua_State *L)
{
    oluacls_class<pugi::xml_node_type>(L, "pugixml.xml_node_type");
    oluacls_func(L, "__index", olua_indexerror);
    oluacls_func(L, "__newindex", olua_newindexerror);
    oluacls_enum(L, "node_cdata", (lua_Integer)pugi::xml_node_type::node_cdata);
    oluacls_enum(L, "node_comment", (lua_Integer)pugi::xml_node_type::node_comment);
    oluacls_enum(L, "node_declaration", (lua_Integer)pugi::xml_node_type::node_declaration);
    oluacls_enum(L, "node_doctype", (lua_Integer)pugi::xml_node_type::node_doctype);
    oluacls_enum(L, "node_document", (lua_Integer)pugi::xml_node_type::node_document);
    oluacls_enum(L, "node_element", (lua_Integer)pugi::xml_node_type::node_element);
    oluacls_enum(L, "node_null", (lua_Integer)pugi::xml_node_type::node_null);
    oluacls_enum(L, "node_pcdata", (lua_Integer)pugi::xml_node_type::node_pcdata);
    oluacls_enum(L, "node_pi", (lua_Integer)pugi::xml_node_type::node_pi);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_pugixml_xml_node_type(lua_State *L)
{
    olua_require(L, "pugixml",  _olua_module_pugixml);
    if (!olua_getclass(L, "pugixml.xml_node_type")) {
        luaL_error(L, "class not found: pugi::xml_node_type");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_cls_pugixml_xml_encoding(lua_State *L)
{
    oluacls_class<pugi::xml_encoding>(L, "pugixml.xml_encoding");
    oluacls_func(L, "__index", olua_indexerror);
    oluacls_func(L, "__newindex", olua_newindexerror);
    oluacls_enum(L, "encoding_auto", (lua_Integer)pugi::xml_encoding::encoding_auto);
    oluacls_enum(L, "encoding_latin1", (lua_Integer)pugi::xml_encoding::encoding_latin1);
    oluacls_enum(L, "encoding_utf16", (lua_Integer)pugi::xml_encoding::encoding_utf16);
    oluacls_enum(L, "encoding_utf16_be", (lua_Integer)pugi::xml_encoding::encoding_utf16_be);
    oluacls_enum(L, "encoding_utf16_le", (lua_Integer)pugi::xml_encoding::encoding_utf16_le);
    oluacls_enum(L, "encoding_utf32", (lua_Integer)pugi::xml_encoding::encoding_utf32);
    oluacls_enum(L, "encoding_utf32_be", (lua_Integer)pugi::xml_encoding::encoding_utf32_be);
    oluacls_enum(L, "encoding_utf32_le", (lua_Integer)pugi::xml_encoding::encoding_utf32_le);
    oluacls_enum(L, "encoding_utf8", (lua_Integer)pugi::xml_encoding::encoding_utf8);
    oluacls_enum(L, "encoding_wchar", (lua_Integer)pugi::xml_encoding::encoding_wchar);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_pugixml_xml_encoding(lua_State *L)
{
    olua_require(L, "pugixml",  _olua_module_pugixml);
    if (!olua_getclass(L, "pugixml.xml_encoding")) {
        luaL_error(L, "class not found: pugi::xml_encoding");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_cls_pugixml_xml_parse_status(lua_State *L)
{
    oluacls_class<pugi::xml_parse_status>(L, "pugixml.xml_parse_status");
    oluacls_func(L, "__index", olua_indexerror);
    oluacls_func(L, "__newindex", olua_newindexerror);
    oluacls_enum(L, "status_append_invalid_root", (lua_Integer)pugi::xml_parse_status::status_append_invalid_root);
    oluacls_enum(L, "status_bad_attribute", (lua_Integer)pugi::xml_parse_status::status_bad_attribute);
    oluacls_enum(L, "status_bad_cdata", (lua_Integer)pugi::xml_parse_status::status_bad_cdata);
    oluacls_enum(L, "status_bad_comment", (lua_Integer)pugi::xml_parse_status::status_bad_comment);
    oluacls_enum(L, "status_bad_doctype", (lua_Integer)pugi::xml_parse_status::status_bad_doctype);
    oluacls_enum(L, "status_bad_end_element", (lua_Integer)pugi::xml_parse_status::status_bad_end_element);
    oluacls_enum(L, "status_bad_pcdata", (lua_Integer)pugi::xml_parse_status::status_bad_pcdata);
    oluacls_enum(L, "status_bad_pi", (lua_Integer)pugi::xml_parse_status::status_bad_pi);
    oluacls_enum(L, "status_bad_start_element", (lua_Integer)pugi::xml_parse_status::status_bad_start_element);
    oluacls_enum(L, "status_end_element_mismatch", (lua_Integer)pugi::xml_parse_status::status_end_element_mismatch);
    oluacls_enum(L, "status_file_not_found", (lua_Integer)pugi::xml_parse_status::status_file_not_found);
    oluacls_enum(L, "status_internal_error", (lua_Integer)pugi::xml_parse_status::status_internal_error);
    oluacls_enum(L, "status_io_error", (lua_Integer)pugi::xml_parse_status::status_io_error);
    oluacls_enum(L, "status_no_document_element", (lua_Integer)pugi::xml_parse_status::status_no_document_element);
    oluacls_enum(L, "status_ok", (lua_Integer)pugi::xml_parse_status::status_ok);
    oluacls_enum(L, "status_out_of_memory", (lua_Integer)pugi::xml_parse_status::status_out_of_memory);
    oluacls_enum(L, "status_unrecognized_tag", (lua_Integer)pugi::xml_parse_status::status_unrecognized_tag);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_pugixml_xml_parse_status(lua_State *L)
{
    olua_require(L, "pugixml",  _olua_module_pugixml);
    if (!olua_getclass(L, "pugixml.xml_parse_status")) {
        luaL_error(L, "class not found: pugi::xml_parse_status");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_pugi_xml_parse_result___gc(lua_State *L)
{
    olua_startinvoke(L);

    auto self = (pugi::xml_parse_result *)olua_toobj(L, 1, "pugixml.xml_parse_result");
    olua_postgc(L, self);

    olua_endinvoke(L);

    return 0;
}

static int _olua_fun_pugi_xml_parse_result_description(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_parse_result *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xml_parse_result");

        // const char *description()
        const char *ret = self->description();
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_parse_result::description(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_parse_result_encoding$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_parse_result *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xml_parse_result");

        // pugi::xml_encoding encoding
        pugi::xml_encoding ret = self->encoding;
        int num_ret = olua_push_enum(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_parse_result::encoding(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_parse_result_encoding$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_parse_result *self = nullptr;
        pugi::xml_encoding arg1 = (pugi::xml_encoding)0;       /** encoding */

        olua_to_object(L, 1, &self, "pugixml.xml_parse_result");
        olua_check_enum(L, 2, &arg1);

        // pugi::xml_encoding encoding
        self->encoding = arg1;

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_parse_result::encoding(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_parse_result_encoding(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // pugi::xml_encoding encoding
        return _olua_fun_pugi_xml_parse_result_encoding$1(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "pugixml.xml_parse_result")) && (olua_is_enum(L, 2))) {
            // pugi::xml_encoding encoding
            return _olua_fun_pugi_xml_parse_result_encoding$2(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_parse_result::encoding' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_parse_result_new(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // pugi::xml_parse_result()
        pugi::xml_parse_result *ret = new pugi::xml_parse_result();
        int num_ret = olua_push_object(L, ret, "pugixml.xml_parse_result");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_parse_result::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_parse_result_offset$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_parse_result *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xml_parse_result");

        // ptrdiff_t offset
        ptrdiff_t ret = self->offset;
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_parse_result::offset(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_parse_result_offset$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_parse_result *self = nullptr;
        ptrdiff_t arg1 = 0;       /** offset */

        olua_to_object(L, 1, &self, "pugixml.xml_parse_result");
        olua_check_integer(L, 2, &arg1);

        // ptrdiff_t offset
        self->offset = arg1;

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_parse_result::offset(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_parse_result_offset(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // ptrdiff_t offset
        return _olua_fun_pugi_xml_parse_result_offset$1(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "pugixml.xml_parse_result")) && (olua_is_integer(L, 2))) {
            // ptrdiff_t offset
            return _olua_fun_pugi_xml_parse_result_offset$2(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_parse_result::offset' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_parse_result_status$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_parse_result *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xml_parse_result");

        // pugi::xml_parse_status status
        pugi::xml_parse_status ret = self->status;
        int num_ret = olua_push_enum(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_parse_result::status(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_parse_result_status$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_parse_result *self = nullptr;
        pugi::xml_parse_status arg1 = (pugi::xml_parse_status)0;       /** status */

        olua_to_object(L, 1, &self, "pugixml.xml_parse_result");
        olua_check_enum(L, 2, &arg1);

        // pugi::xml_parse_status status
        self->status = arg1;

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_parse_result::status(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_parse_result_status(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // pugi::xml_parse_status status
        return _olua_fun_pugi_xml_parse_result_status$1(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "pugixml.xml_parse_result")) && (olua_is_enum(L, 2))) {
            // pugi::xml_parse_status status
            return _olua_fun_pugi_xml_parse_result_status$2(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_parse_result::status' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_cls_pugixml_xml_parse_result(lua_State *L)
{
    oluacls_class<pugi::xml_parse_result>(L, "pugixml.xml_parse_result");
    oluacls_func(L, "__gc", _olua_fun_pugi_xml_parse_result___gc);
    oluacls_func(L, "description", _olua_fun_pugi_xml_parse_result_description);
    oluacls_func(L, "new", _olua_fun_pugi_xml_parse_result_new);
    oluacls_prop(L, "status", _olua_fun_pugi_xml_parse_result_status, _olua_fun_pugi_xml_parse_result_status);
    oluacls_prop(L, "offset", _olua_fun_pugi_xml_parse_result_offset, _olua_fun_pugi_xml_parse_result_offset);
    oluacls_prop(L, "encoding", _olua_fun_pugi_xml_parse_result_encoding, _olua_fun_pugi_xml_parse_result_encoding);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_pugixml_xml_parse_result(lua_State *L)
{
    olua_require(L, "pugixml",  _olua_module_pugixml);
    if (!olua_getclass(L, "pugixml.xml_parse_result")) {
        luaL_error(L, "class not found: pugi::xml_parse_result");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_pugi_xml_attribute___eq(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_attribute *self = nullptr;
        pugi::xml_attribute *arg1;       /** r */

        olua_to_object(L, 1, &self, "pugixml.xml_attribute");
        olua_check_object(L, 2, &arg1, "pugixml.xml_attribute");

        // @operator(operator==) bool operator==(const pugi::xml_attribute &r)
        bool ret = (*self) == (*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_attribute::__eq(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_attribute___gc(lua_State *L)
{
    olua_startinvoke(L);

    auto self = (pugi::xml_attribute *)olua_toobj(L, 1, "pugixml.xml_attribute");
    olua_postgc(L, self);

    olua_endinvoke(L);

    return 0;
}

static int _olua_fun_pugi_xml_attribute___le(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_attribute *self = nullptr;
        pugi::xml_attribute *arg1;       /** r */

        olua_to_object(L, 1, &self, "pugixml.xml_attribute");
        olua_check_object(L, 2, &arg1, "pugixml.xml_attribute");

        // @operator(operator<=) bool operator<=(const pugi::xml_attribute &r)
        bool ret = (*self) <= (*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_attribute::__le(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_attribute___lt(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_attribute *self = nullptr;
        pugi::xml_attribute *arg1;       /** r */

        olua_to_object(L, 1, &self, "pugixml.xml_attribute");
        olua_check_object(L, 2, &arg1, "pugixml.xml_attribute");

        // @operator(operator<) bool operator<(const pugi::xml_attribute &r)
        bool ret = (*self) < (*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_attribute::__lt(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_attribute_as_bool$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_attribute *self = nullptr;
        bool arg1 = false;       /** def */

        olua_to_object(L, 1, &self, "pugixml.xml_attribute");
        olua_check_bool(L, 2, &arg1);

        // bool as_bool(@optional bool def)
        bool ret = self->as_bool(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_attribute::as_bool(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_attribute_as_bool$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_attribute *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xml_attribute");

        // bool as_bool()
        bool ret = self->as_bool();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_attribute::as_bool(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_attribute_as_bool(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // bool as_bool()
        return _olua_fun_pugi_xml_attribute_as_bool$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "pugixml.xml_attribute")) && (olua_is_bool(L, 2))) {
            // bool as_bool(@optional bool def)
            return _olua_fun_pugi_xml_attribute_as_bool$1(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_attribute::as_bool' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_attribute_as_double$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_attribute *self = nullptr;
        double arg1 = 0;       /** def */

        olua_to_object(L, 1, &self, "pugixml.xml_attribute");
        olua_check_number(L, 2, &arg1);

        // double as_double(@optional double def)
        double ret = self->as_double(arg1);
        int num_ret = olua_push_number(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_attribute::as_double(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_attribute_as_double$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_attribute *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xml_attribute");

        // double as_double()
        double ret = self->as_double();
        int num_ret = olua_push_number(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_attribute::as_double(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_attribute_as_double(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // double as_double()
        return _olua_fun_pugi_xml_attribute_as_double$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "pugixml.xml_attribute")) && (olua_is_number(L, 2))) {
            // double as_double(@optional double def)
            return _olua_fun_pugi_xml_attribute_as_double$1(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_attribute::as_double' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_attribute_as_float$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_attribute *self = nullptr;
        float arg1 = 0;       /** def */

        olua_to_object(L, 1, &self, "pugixml.xml_attribute");
        olua_check_number(L, 2, &arg1);

        // float as_float(@optional float def)
        float ret = self->as_float(arg1);
        int num_ret = olua_push_number(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_attribute::as_float(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_attribute_as_float$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_attribute *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xml_attribute");

        // float as_float()
        float ret = self->as_float();
        int num_ret = olua_push_number(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_attribute::as_float(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_attribute_as_float(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // float as_float()
        return _olua_fun_pugi_xml_attribute_as_float$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "pugixml.xml_attribute")) && (olua_is_number(L, 2))) {
            // float as_float(@optional float def)
            return _olua_fun_pugi_xml_attribute_as_float$1(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_attribute::as_float' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_attribute_as_int$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_attribute *self = nullptr;
        int arg1 = 0;       /** def */

        olua_to_object(L, 1, &self, "pugixml.xml_attribute");
        olua_check_integer(L, 2, &arg1);

        // int as_int(@optional int def)
        int ret = self->as_int(arg1);
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_attribute::as_int(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_attribute_as_int$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_attribute *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xml_attribute");

        // int as_int()
        int ret = self->as_int();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_attribute::as_int(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_attribute_as_int(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // int as_int()
        return _olua_fun_pugi_xml_attribute_as_int$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "pugixml.xml_attribute")) && (olua_is_integer(L, 2))) {
            // int as_int(@optional int def)
            return _olua_fun_pugi_xml_attribute_as_int$1(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_attribute::as_int' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_attribute_as_llong$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_attribute *self = nullptr;
        long long arg1 = 0;       /** def */

        olua_to_object(L, 1, &self, "pugixml.xml_attribute");
        olua_check_integer(L, 2, &arg1);

        // long long as_llong(@optional long long def)
        long long ret = self->as_llong(arg1);
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_attribute::as_llong(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_attribute_as_llong$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_attribute *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xml_attribute");

        // long long as_llong()
        long long ret = self->as_llong();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_attribute::as_llong(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_attribute_as_llong(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // long long as_llong()
        return _olua_fun_pugi_xml_attribute_as_llong$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "pugixml.xml_attribute")) && (olua_is_integer(L, 2))) {
            // long long as_llong(@optional long long def)
            return _olua_fun_pugi_xml_attribute_as_llong$1(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_attribute::as_llong' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_attribute_as_string$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_attribute *self = nullptr;
        const pugi::char_t *arg1 = nullptr;       /** def */

        olua_to_object(L, 1, &self, "pugixml.xml_attribute");
        olua_check_string(L, 2, &arg1);

        // const pugi::char_t *as_string(@optional const pugi::char_t *def)
        const pugi::char_t *ret = self->as_string(arg1);
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_attribute::as_string(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_attribute_as_string$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_attribute *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xml_attribute");

        // const pugi::char_t *as_string()
        const pugi::char_t *ret = self->as_string();
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_attribute::as_string(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_attribute_as_string(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // const pugi::char_t *as_string()
        return _olua_fun_pugi_xml_attribute_as_string$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "pugixml.xml_attribute")) && (olua_is_string(L, 2))) {
            // const pugi::char_t *as_string(@optional const pugi::char_t *def)
            return _olua_fun_pugi_xml_attribute_as_string$1(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_attribute::as_string' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_attribute_as_uint$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_attribute *self = nullptr;
        unsigned int arg1 = 0;       /** def */

        olua_to_object(L, 1, &self, "pugixml.xml_attribute");
        olua_check_integer(L, 2, &arg1);

        // unsigned int as_uint(@optional unsigned int def)
        unsigned int ret = self->as_uint(arg1);
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_attribute::as_uint(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_attribute_as_uint$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_attribute *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xml_attribute");

        // unsigned int as_uint()
        unsigned int ret = self->as_uint();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_attribute::as_uint(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_attribute_as_uint(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // unsigned int as_uint()
        return _olua_fun_pugi_xml_attribute_as_uint$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "pugixml.xml_attribute")) && (olua_is_integer(L, 2))) {
            // unsigned int as_uint(@optional unsigned int def)
            return _olua_fun_pugi_xml_attribute_as_uint$1(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_attribute::as_uint' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_attribute_as_ullong$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_attribute *self = nullptr;
        unsigned long long arg1 = 0;       /** def */

        olua_to_object(L, 1, &self, "pugixml.xml_attribute");
        olua_check_integer(L, 2, &arg1);

        // unsigned long long as_ullong(@optional unsigned long long def)
        unsigned long long ret = self->as_ullong(arg1);
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_attribute::as_ullong(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_attribute_as_ullong$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_attribute *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xml_attribute");

        // unsigned long long as_ullong()
        unsigned long long ret = self->as_ullong();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_attribute::as_ullong(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_attribute_as_ullong(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // unsigned long long as_ullong()
        return _olua_fun_pugi_xml_attribute_as_ullong$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "pugixml.xml_attribute")) && (olua_is_integer(L, 2))) {
            // unsigned long long as_ullong(@optional unsigned long long def)
            return _olua_fun_pugi_xml_attribute_as_ullong$1(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_attribute::as_ullong' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_attribute_empty(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_attribute *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xml_attribute");

        // bool empty()
        bool ret = self->empty();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_attribute::empty(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_attribute_hash_value(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_attribute *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xml_attribute");

        // size_t hash_value()
        size_t ret = self->hash_value();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_attribute::hash_value(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_attribute_name(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_attribute *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xml_attribute");

        // const pugi::char_t *name()
        const pugi::char_t *ret = self->name();
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_attribute::name(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_attribute_new(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // pugi::xml_attribute()
        pugi::xml_attribute *ret = new pugi::xml_attribute();
        int num_ret = olua_push_object(L, ret, "pugixml.xml_attribute");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_attribute::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_attribute_next_attribute(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_attribute *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xml_attribute");

        // pugi::xml_attribute next_attribute()
        pugi::xml_attribute ret = self->next_attribute();
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_attribute");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_attribute::next_attribute(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_attribute_previous_attribute(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_attribute *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xml_attribute");

        // pugi::xml_attribute previous_attribute()
        pugi::xml_attribute ret = self->previous_attribute();
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_attribute");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_attribute::previous_attribute(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_attribute_set_bool_value(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_attribute *self = nullptr;
        bool arg1 = false;       /** rhs */

        olua_to_object(L, 1, &self, "pugixml.xml_attribute");
        olua_check_bool(L, 2, &arg1);

        // bool set_value(bool rhs)
        bool ret = self->set_value(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_attribute::set_value(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_attribute_set_double_value$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_attribute *self = nullptr;
        double arg1 = 0;       /** rhs */

        olua_to_object(L, 1, &self, "pugixml.xml_attribute");
        olua_check_number(L, 2, &arg1);

        // bool set_value(double rhs)
        bool ret = self->set_value(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_attribute::set_value(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_attribute_set_double_value$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_attribute *self = nullptr;
        double arg1 = 0;       /** rhs */
        int arg2 = 0;       /** precision */

        olua_to_object(L, 1, &self, "pugixml.xml_attribute");
        olua_check_number(L, 2, &arg1);
        olua_check_integer(L, 3, &arg2);

        // bool set_value(double rhs, int precision)
        bool ret = self->set_value(arg1, arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_attribute::set_value(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_attribute_set_double_value(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "pugixml.xml_attribute")) && (olua_is_number(L, 2))) {
            // bool set_value(double rhs)
            return _olua_fun_pugi_xml_attribute_set_double_value$1(L);
        // }
    }

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "pugixml.xml_attribute")) && (olua_is_number(L, 2)) && (olua_is_integer(L, 3))) {
            // bool set_value(double rhs, int precision)
            return _olua_fun_pugi_xml_attribute_set_double_value$2(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_attribute::set_double_value' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_attribute_set_float_value$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_attribute *self = nullptr;
        float arg1 = 0;       /** rhs */

        olua_to_object(L, 1, &self, "pugixml.xml_attribute");
        olua_check_number(L, 2, &arg1);

        // bool set_value(float rhs)
        bool ret = self->set_value(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_attribute::set_value(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_attribute_set_float_value$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_attribute *self = nullptr;
        float arg1 = 0;       /** rhs */
        int arg2 = 0;       /** precision */

        olua_to_object(L, 1, &self, "pugixml.xml_attribute");
        olua_check_number(L, 2, &arg1);
        olua_check_integer(L, 3, &arg2);

        // bool set_value(float rhs, int precision)
        bool ret = self->set_value(arg1, arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_attribute::set_value(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_attribute_set_float_value(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "pugixml.xml_attribute")) && (olua_is_number(L, 2))) {
            // bool set_value(float rhs)
            return _olua_fun_pugi_xml_attribute_set_float_value$1(L);
        // }
    }

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "pugixml.xml_attribute")) && (olua_is_number(L, 2)) && (olua_is_integer(L, 3))) {
            // bool set_value(float rhs, int precision)
            return _olua_fun_pugi_xml_attribute_set_float_value$2(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_attribute::set_float_value' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_attribute_set_int_value(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_attribute *self = nullptr;
        int arg1 = 0;       /** rhs */

        olua_to_object(L, 1, &self, "pugixml.xml_attribute");
        olua_check_integer(L, 2, &arg1);

        // bool set_value(int rhs)
        bool ret = self->set_value(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_attribute::set_value(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

#ifdef PUGIXML_HAS_LONG_LONG
static int _olua_fun_pugi_xml_attribute_set_llong_value(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_attribute *self = nullptr;
        long long arg1 = 0;       /** rhs */

        olua_to_object(L, 1, &self, "pugixml.xml_attribute");
        olua_check_integer(L, 2, &arg1);

        // bool set_value(long long rhs)
        bool ret = self->set_value(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_attribute::set_value(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}
#endif

static int _olua_fun_pugi_xml_attribute_set_long_value(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_attribute *self = nullptr;
        long arg1 = 0;       /** rhs */

        olua_to_object(L, 1, &self, "pugixml.xml_attribute");
        olua_check_integer(L, 2, &arg1);

        // bool set_value(long rhs)
        bool ret = self->set_value(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_attribute::set_value(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_attribute_set_name$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_attribute *self = nullptr;
        const pugi::char_t *arg1 = nullptr;       /** rhs */

        olua_to_object(L, 1, &self, "pugixml.xml_attribute");
        olua_check_string(L, 2, &arg1);

        // bool set_name(const pugi::char_t *rhs)
        bool ret = self->set_name(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_attribute::set_name(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_attribute_set_name$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_attribute *self = nullptr;
        const pugi::char_t *arg1 = nullptr;       /** rhs */
        size_t arg2 = 0;       /** size */

        olua_to_object(L, 1, &self, "pugixml.xml_attribute");
        olua_check_string(L, 2, &arg1);
        olua_check_integer(L, 3, &arg2);

        // bool set_name(const pugi::char_t *rhs, size_t size)
        bool ret = self->set_name(arg1, arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_attribute::set_name(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_attribute_set_name(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "pugixml.xml_attribute")) && (olua_is_string(L, 2))) {
            // bool set_name(const pugi::char_t *rhs)
            return _olua_fun_pugi_xml_attribute_set_name$1(L);
        // }
    }

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "pugixml.xml_attribute")) && (olua_is_string(L, 2)) && (olua_is_integer(L, 3))) {
            // bool set_name(const pugi::char_t *rhs, size_t size)
            return _olua_fun_pugi_xml_attribute_set_name$2(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_attribute::set_name' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_attribute_set_uint_value(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_attribute *self = nullptr;
        unsigned int arg1 = 0;       /** rhs */

        olua_to_object(L, 1, &self, "pugixml.xml_attribute");
        olua_check_integer(L, 2, &arg1);

        // bool set_value(unsigned int rhs)
        bool ret = self->set_value(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_attribute::set_value(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

#ifdef PUGIXML_HAS_LONG_LONG
static int _olua_fun_pugi_xml_attribute_set_ullong_value(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_attribute *self = nullptr;
        unsigned long long arg1 = 0;       /** rhs */

        olua_to_object(L, 1, &self, "pugixml.xml_attribute");
        olua_check_integer(L, 2, &arg1);

        // bool set_value(unsigned long long rhs)
        bool ret = self->set_value(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_attribute::set_value(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}
#endif

static int _olua_fun_pugi_xml_attribute_set_ulong_value(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_attribute *self = nullptr;
        unsigned long arg1 = 0;       /** rhs */

        olua_to_object(L, 1, &self, "pugixml.xml_attribute");
        olua_check_integer(L, 2, &arg1);

        // bool set_value(unsigned long rhs)
        bool ret = self->set_value(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_attribute::set_value(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_attribute_set_value$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_attribute *self = nullptr;
        const pugi::char_t *arg1 = nullptr;       /** rhs */

        olua_to_object(L, 1, &self, "pugixml.xml_attribute");
        olua_check_string(L, 2, &arg1);

        // bool set_value(const pugi::char_t *rhs)
        bool ret = self->set_value(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_attribute::set_value(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_attribute_set_value$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_attribute *self = nullptr;
        const pugi::char_t *arg1 = nullptr;       /** rhs */
        size_t arg2 = 0;       /** size */

        olua_to_object(L, 1, &self, "pugixml.xml_attribute");
        olua_check_string(L, 2, &arg1);
        olua_check_integer(L, 3, &arg2);

        // bool set_value(const pugi::char_t *rhs, size_t size)
        bool ret = self->set_value(arg1, arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_attribute::set_value(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_attribute_set_value(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "pugixml.xml_attribute")) && (olua_is_string(L, 2))) {
            // bool set_value(const pugi::char_t *rhs)
            return _olua_fun_pugi_xml_attribute_set_value$1(L);
        // }
    }

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "pugixml.xml_attribute")) && (olua_is_string(L, 2)) && (olua_is_integer(L, 3))) {
            // bool set_value(const pugi::char_t *rhs, size_t size)
            return _olua_fun_pugi_xml_attribute_set_value$2(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_attribute::set_value' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_attribute_value(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_attribute *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xml_attribute");

        // const pugi::char_t *value()
        const pugi::char_t *ret = self->value();
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_attribute::value(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_pugixml_xml_attribute(lua_State *L)
{
    oluacls_class<pugi::xml_attribute>(L, "pugixml.xml_attribute");
    oluacls_func(L, "__eq", _olua_fun_pugi_xml_attribute___eq);
    oluacls_func(L, "__gc", _olua_fun_pugi_xml_attribute___gc);
    oluacls_func(L, "__le", _olua_fun_pugi_xml_attribute___le);
    oluacls_func(L, "__lt", _olua_fun_pugi_xml_attribute___lt);
    oluacls_func(L, "as_bool", _olua_fun_pugi_xml_attribute_as_bool);
    oluacls_func(L, "as_double", _olua_fun_pugi_xml_attribute_as_double);
    oluacls_func(L, "as_float", _olua_fun_pugi_xml_attribute_as_float);
    oluacls_func(L, "as_int", _olua_fun_pugi_xml_attribute_as_int);
    oluacls_func(L, "as_llong", _olua_fun_pugi_xml_attribute_as_llong);
    oluacls_func(L, "as_string", _olua_fun_pugi_xml_attribute_as_string);
    oluacls_func(L, "as_uint", _olua_fun_pugi_xml_attribute_as_uint);
    oluacls_func(L, "as_ullong", _olua_fun_pugi_xml_attribute_as_ullong);
    oluacls_func(L, "empty", _olua_fun_pugi_xml_attribute_empty);
    oluacls_func(L, "hash_value", _olua_fun_pugi_xml_attribute_hash_value);
    oluacls_func(L, "name", _olua_fun_pugi_xml_attribute_name);
    oluacls_func(L, "new", _olua_fun_pugi_xml_attribute_new);
    oluacls_func(L, "next_attribute", _olua_fun_pugi_xml_attribute_next_attribute);
    oluacls_func(L, "previous_attribute", _olua_fun_pugi_xml_attribute_previous_attribute);
    oluacls_func(L, "set_bool_value", _olua_fun_pugi_xml_attribute_set_bool_value);
    oluacls_func(L, "set_double_value", _olua_fun_pugi_xml_attribute_set_double_value);
    oluacls_func(L, "set_float_value", _olua_fun_pugi_xml_attribute_set_float_value);
    oluacls_func(L, "set_int_value", _olua_fun_pugi_xml_attribute_set_int_value);
#ifdef PUGIXML_HAS_LONG_LONG
    oluacls_func(L, "set_llong_value", _olua_fun_pugi_xml_attribute_set_llong_value);
#endif
    oluacls_func(L, "set_long_value", _olua_fun_pugi_xml_attribute_set_long_value);
    oluacls_func(L, "set_name", _olua_fun_pugi_xml_attribute_set_name);
    oluacls_func(L, "set_uint_value", _olua_fun_pugi_xml_attribute_set_uint_value);
#ifdef PUGIXML_HAS_LONG_LONG
    oluacls_func(L, "set_ullong_value", _olua_fun_pugi_xml_attribute_set_ullong_value);
#endif
    oluacls_func(L, "set_ulong_value", _olua_fun_pugi_xml_attribute_set_ulong_value);
    oluacls_func(L, "set_value", _olua_fun_pugi_xml_attribute_set_value);
    oluacls_func(L, "value", _olua_fun_pugi_xml_attribute_value);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_pugixml_xml_attribute(lua_State *L)
{
    olua_require(L, "pugixml",  _olua_module_pugixml);
    if (!olua_getclass(L, "pugixml.xml_attribute")) {
        luaL_error(L, "class not found: pugi::xml_attribute");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_pugi_xml_tree_walker___gc(lua_State *L)
{
    olua_startinvoke(L);

    auto self = (pugi::xml_tree_walker *)olua_toobj(L, 1, "pugixml.xml_tree_walker");
    olua_postgc(L, self);

    olua_endinvoke(L);

    return 0;
}

static int _olua_fun_pugi_xml_tree_walker_begin(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_tree_walker *self = nullptr;
        pugi::xml_node *arg1 = nullptr;       /** node */

        olua_to_object(L, 1, &self, "pugixml.xml_tree_walker");
        olua_check_object(L, 2, &arg1, "pugixml.xml_node");

        // bool begin(pugi::xml_node &node)
        bool ret = self->begin(*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_tree_walker::begin(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_tree_walker_end_(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_tree_walker *self = nullptr;
        pugi::xml_node *arg1 = nullptr;       /** node */

        olua_to_object(L, 1, &self, "pugixml.xml_tree_walker");
        olua_check_object(L, 2, &arg1, "pugixml.xml_node");

        // bool end(pugi::xml_node &node)
        bool ret = self->end(*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_tree_walker::end(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_tree_walker_for_each(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_tree_walker *self = nullptr;
        pugi::xml_node *arg1 = nullptr;       /** node */

        olua_to_object(L, 1, &self, "pugixml.xml_tree_walker");
        olua_check_object(L, 2, &arg1, "pugixml.xml_node");

        // bool for_each(pugi::xml_node &node)
        bool ret = self->for_each(*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_tree_walker::for_each(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_pugixml_xml_tree_walker(lua_State *L)
{
    oluacls_class<pugi::xml_tree_walker>(L, "pugixml.xml_tree_walker");
    oluacls_func(L, "__gc", _olua_fun_pugi_xml_tree_walker___gc);
    oluacls_func(L, "begin", _olua_fun_pugi_xml_tree_walker_begin);
    oluacls_func(L, "end_", _olua_fun_pugi_xml_tree_walker_end_);
    oluacls_func(L, "for_each", _olua_fun_pugi_xml_tree_walker_for_each);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_pugixml_xml_tree_walker(lua_State *L)
{
    olua_require(L, "pugixml",  _olua_module_pugixml);
    if (!olua_getclass(L, "pugixml.xml_tree_walker")) {
        luaL_error(L, "class not found: pugi::xml_tree_walker");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_pugi_lua_xml_tree_walker_new(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // pugi::lua_xml_tree_walker()
        pugi::lua_xml_tree_walker *ret = new pugi::lua_xml_tree_walker();
        int num_ret = olua_push_object(L, ret, "pugixml.lua_xml_tree_walker");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::lua_xml_tree_walker::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_lua_xml_tree_walker_on_begin$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::lua_xml_tree_walker *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.lua_xml_tree_walker");

        void *cb_store = (void *)self;
        std::string cb_tag = "on_begin";
        olua_getcallback(L, cb_store, cb_tag.c_str(), OLUA_TAG_EQUAL);

        // std::function<bool (pugi::xml_node &)> on_begin
        std::function<bool (pugi::xml_node &)> ret = self->on_begin;
        int num_ret = olua_push_callback(L, &ret, "std.function");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::lua_xml_tree_walker::on_begin(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_lua_xml_tree_walker_on_begin$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::lua_xml_tree_walker *self = nullptr;
        std::function<bool (pugi::xml_node &)> arg1;       /** on_begin */

        olua_to_object(L, 1, &self, "pugixml.lua_xml_tree_walker");
        if (!olua_isnoneornil(L, 2)) {
            olua_check_callback(L, 2, &arg1, "std.function");
        }

        void *cb_store = (void *)self;
        std::string cb_tag = "on_begin";
        std::string cb_name;
        if (olua_isfunction(L, 2)) {
            cb_name = olua_setcallback(L, cb_store, 2, cb_tag.c_str(), OLUA_TAG_REPLACE);
            olua_Context cb_ctx = olua_context(L);
            lua_State *ML = olua_mainthread(L);
            arg1 = [cb_store, cb_name, cb_ctx, ML](pugi::xml_node &cb_arg1) {
                lua_State *L = ML;
                olua_checkhostthread();
                bool ret = false;       /** ret */
                if (olua_contextequal(L, cb_ctx)) {
                    int top = lua_gettop(L);
                    size_t last = olua_push_objpool(L);
                    olua_enable_objpool(L);
                    olua_push_object(L, &cb_arg1, "pugixml.xml_node");
                    olua_disable_objpool(L);

                    olua_callback(L, cb_store, cb_name.c_str(), 1);

                    if (olua_is_bool(L, -1)) {
                        olua_check_bool(L, -1, &ret);
                    }

                    //pop stack value
                    olua_pop_objpool(L, last);
                    lua_settop(L, top);
                }
                return ret;
            };
        } else {
            olua_removecallback(L, cb_store, cb_tag.c_str(), OLUA_TAG_EQUAL);
            arg1 = nullptr;
        }

        // std::function<bool (pugi::xml_node &)> on_begin
        self->on_begin = arg1;

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::lua_xml_tree_walker::on_begin(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_lua_xml_tree_walker_on_begin(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // std::function<bool (pugi::xml_node &)> on_begin
        return _olua_fun_pugi_lua_xml_tree_walker_on_begin$1(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "pugixml.lua_xml_tree_walker")) && (olua_is_callback(L, 2, "std.function") || olua_isnil(L, 2))) {
            // std::function<bool (pugi::xml_node &)> on_begin
            return _olua_fun_pugi_lua_xml_tree_walker_on_begin$2(L);
        // }
    }

    luaL_error(L, "method 'pugi::lua_xml_tree_walker::on_begin' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_lua_xml_tree_walker_on_end$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::lua_xml_tree_walker *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.lua_xml_tree_walker");

        void *cb_store = (void *)self;
        std::string cb_tag = "on_end";
        olua_getcallback(L, cb_store, cb_tag.c_str(), OLUA_TAG_EQUAL);

        // std::function<bool (pugi::xml_node &)> on_end
        std::function<bool (pugi::xml_node &)> ret = self->on_end;
        int num_ret = olua_push_callback(L, &ret, "std.function");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::lua_xml_tree_walker::on_end(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_lua_xml_tree_walker_on_end$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::lua_xml_tree_walker *self = nullptr;
        std::function<bool (pugi::xml_node &)> arg1;       /** on_end */

        olua_to_object(L, 1, &self, "pugixml.lua_xml_tree_walker");
        if (!olua_isnoneornil(L, 2)) {
            olua_check_callback(L, 2, &arg1, "std.function");
        }

        void *cb_store = (void *)self;
        std::string cb_tag = "on_end";
        std::string cb_name;
        if (olua_isfunction(L, 2)) {
            cb_name = olua_setcallback(L, cb_store, 2, cb_tag.c_str(), OLUA_TAG_REPLACE);
            olua_Context cb_ctx = olua_context(L);
            lua_State *ML = olua_mainthread(L);
            arg1 = [cb_store, cb_name, cb_ctx, ML](pugi::xml_node &cb_arg1) {
                lua_State *L = ML;
                olua_checkhostthread();
                bool ret = false;       /** ret */
                if (olua_contextequal(L, cb_ctx)) {
                    int top = lua_gettop(L);
                    size_t last = olua_push_objpool(L);
                    olua_enable_objpool(L);
                    olua_push_object(L, &cb_arg1, "pugixml.xml_node");
                    olua_disable_objpool(L);

                    olua_callback(L, cb_store, cb_name.c_str(), 1);

                    if (olua_is_bool(L, -1)) {
                        olua_check_bool(L, -1, &ret);
                    }

                    //pop stack value
                    olua_pop_objpool(L, last);
                    lua_settop(L, top);
                }
                return ret;
            };
        } else {
            olua_removecallback(L, cb_store, cb_tag.c_str(), OLUA_TAG_EQUAL);
            arg1 = nullptr;
        }

        // std::function<bool (pugi::xml_node &)> on_end
        self->on_end = arg1;

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::lua_xml_tree_walker::on_end(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_lua_xml_tree_walker_on_end(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // std::function<bool (pugi::xml_node &)> on_end
        return _olua_fun_pugi_lua_xml_tree_walker_on_end$1(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "pugixml.lua_xml_tree_walker")) && (olua_is_callback(L, 2, "std.function") || olua_isnil(L, 2))) {
            // std::function<bool (pugi::xml_node &)> on_end
            return _olua_fun_pugi_lua_xml_tree_walker_on_end$2(L);
        // }
    }

    luaL_error(L, "method 'pugi::lua_xml_tree_walker::on_end' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_lua_xml_tree_walker_on_for_each$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::lua_xml_tree_walker *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.lua_xml_tree_walker");

        void *cb_store = (void *)self;
        std::string cb_tag = "on_for_each";
        olua_getcallback(L, cb_store, cb_tag.c_str(), OLUA_TAG_EQUAL);

        // std::function<bool (pugi::xml_node &)> on_for_each
        std::function<bool (pugi::xml_node &)> ret = self->on_for_each;
        int num_ret = olua_push_callback(L, &ret, "std.function");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::lua_xml_tree_walker::on_for_each(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_lua_xml_tree_walker_on_for_each$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::lua_xml_tree_walker *self = nullptr;
        std::function<bool (pugi::xml_node &)> arg1;       /** on_for_each */

        olua_to_object(L, 1, &self, "pugixml.lua_xml_tree_walker");
        if (!olua_isnoneornil(L, 2)) {
            olua_check_callback(L, 2, &arg1, "std.function");
        }

        void *cb_store = (void *)self;
        std::string cb_tag = "on_for_each";
        std::string cb_name;
        if (olua_isfunction(L, 2)) {
            cb_name = olua_setcallback(L, cb_store, 2, cb_tag.c_str(), OLUA_TAG_REPLACE);
            olua_Context cb_ctx = olua_context(L);
            lua_State *ML = olua_mainthread(L);
            arg1 = [cb_store, cb_name, cb_ctx, ML](pugi::xml_node &cb_arg1) {
                lua_State *L = ML;
                olua_checkhostthread();
                bool ret = false;       /** ret */
                if (olua_contextequal(L, cb_ctx)) {
                    int top = lua_gettop(L);
                    size_t last = olua_push_objpool(L);
                    olua_enable_objpool(L);
                    olua_push_object(L, &cb_arg1, "pugixml.xml_node");
                    olua_disable_objpool(L);

                    olua_callback(L, cb_store, cb_name.c_str(), 1);

                    if (olua_is_bool(L, -1)) {
                        olua_check_bool(L, -1, &ret);
                    }

                    //pop stack value
                    olua_pop_objpool(L, last);
                    lua_settop(L, top);
                }
                return ret;
            };
        } else {
            olua_removecallback(L, cb_store, cb_tag.c_str(), OLUA_TAG_EQUAL);
            arg1 = nullptr;
        }

        // std::function<bool (pugi::xml_node &)> on_for_each
        self->on_for_each = arg1;

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::lua_xml_tree_walker::on_for_each(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_lua_xml_tree_walker_on_for_each(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // std::function<bool (pugi::xml_node &)> on_for_each
        return _olua_fun_pugi_lua_xml_tree_walker_on_for_each$1(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "pugixml.lua_xml_tree_walker")) && (olua_is_callback(L, 2, "std.function") || olua_isnil(L, 2))) {
            // std::function<bool (pugi::xml_node &)> on_for_each
            return _olua_fun_pugi_lua_xml_tree_walker_on_for_each$2(L);
        // }
    }

    luaL_error(L, "method 'pugi::lua_xml_tree_walker::on_for_each' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_cls_pugixml_lua_xml_tree_walker(lua_State *L)
{
    oluacls_class<pugi::lua_xml_tree_walker, pugi::xml_tree_walker>(L, "pugixml.lua_xml_tree_walker");
    oluacls_func(L, "new", _olua_fun_pugi_lua_xml_tree_walker_new);
    oluacls_prop(L, "on_begin", _olua_fun_pugi_lua_xml_tree_walker_on_begin, _olua_fun_pugi_lua_xml_tree_walker_on_begin);
    oluacls_prop(L, "on_for_each", _olua_fun_pugi_lua_xml_tree_walker_on_for_each, _olua_fun_pugi_lua_xml_tree_walker_on_for_each);
    oluacls_prop(L, "on_end", _olua_fun_pugi_lua_xml_tree_walker_on_end, _olua_fun_pugi_lua_xml_tree_walker_on_end);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_pugixml_lua_xml_tree_walker(lua_State *L)
{
    olua_require(L, "pugixml",  _olua_module_pugixml);
    if (!olua_getclass(L, "pugixml.lua_xml_tree_walker")) {
        luaL_error(L, "class not found: pugi::lua_xml_tree_walker");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_pugi_xml_writer___gc(lua_State *L)
{
    olua_startinvoke(L);

    auto self = (pugi::xml_writer *)olua_toobj(L, 1, "pugixml.xml_writer");
    olua_postgc(L, self);

    olua_endinvoke(L);

    return 0;
}

static int _olua_fun_pugi_xml_writer_write(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_writer *self = nullptr;
        void *arg1 = nullptr;       /** data */
        size_t arg2 = 0;       /** size */

        olua_to_object(L, 1, &self, "pugixml.xml_writer");
        olua_check_object(L, 2, &arg1, "void *");
        olua_check_integer(L, 3, &arg2);

        // void write(const void *data, size_t size)
        self->write(arg1, arg2);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_writer::write(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_pugixml_xml_writer(lua_State *L)
{
    oluacls_class<pugi::xml_writer>(L, "pugixml.xml_writer");
    oluacls_func(L, "__gc", _olua_fun_pugi_xml_writer___gc);
    oluacls_func(L, "write", _olua_fun_pugi_xml_writer_write);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_pugixml_xml_writer(lua_State *L)
{
    olua_require(L, "pugixml",  _olua_module_pugixml);
    if (!olua_getclass(L, "pugixml.xml_writer")) {
        luaL_error(L, "class not found: pugi::xml_writer");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_pugi_xml_writer_file_new(lua_State *L)
{
    try {
        olua_startinvoke(L);

        void *arg1 = nullptr;       /** file */

        olua_check_object(L, 1, &arg1, "void *");

        // pugi::xml_writer_file(void *file)
        pugi::xml_writer_file *ret = new pugi::xml_writer_file(arg1);
        int num_ret = olua_push_object(L, ret, "pugixml.xml_writer_file");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_writer_file::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_pugixml_xml_writer_file(lua_State *L)
{
    oluacls_class<pugi::xml_writer_file, pugi::xml_writer>(L, "pugixml.xml_writer_file");
    oluacls_func(L, "new", _olua_fun_pugi_xml_writer_file_new);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_pugixml_xml_writer_file(lua_State *L)
{
    olua_require(L, "pugixml",  _olua_module_pugixml);
    if (!olua_getclass(L, "pugixml.xml_writer_file")) {
        luaL_error(L, "class not found: pugi::xml_writer_file");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_pugi_lua_xml_writer_new(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // pugi::lua_xml_writer()
        pugi::lua_xml_writer *ret = new pugi::lua_xml_writer();
        int num_ret = olua_push_object(L, ret, "pugixml.lua_xml_writer");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::lua_xml_writer::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_lua_xml_writer_on_write$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::lua_xml_writer *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.lua_xml_writer");

        void *cb_store = (void *)self;
        std::string cb_tag = "on_write";
        olua_getcallback(L, cb_store, cb_tag.c_str(), OLUA_TAG_EQUAL);

        // std::function<void (const std::string &)> on_write
        std::function<void (const std::string &)> ret = self->on_write;
        int num_ret = olua_push_callback(L, &ret, "std.function");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::lua_xml_writer::on_write(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_lua_xml_writer_on_write$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::lua_xml_writer *self = nullptr;
        std::function<void (const std::string &)> arg1;       /** on_write */

        olua_to_object(L, 1, &self, "pugixml.lua_xml_writer");
        if (!olua_isnoneornil(L, 2)) {
            olua_check_callback(L, 2, &arg1, "std.function");
        }

        void *cb_store = (void *)self;
        std::string cb_tag = "on_write";
        std::string cb_name;
        if (olua_isfunction(L, 2)) {
            cb_name = olua_setcallback(L, cb_store, 2, cb_tag.c_str(), OLUA_TAG_REPLACE);
            olua_Context cb_ctx = olua_context(L);
            lua_State *ML = olua_mainthread(L);
            arg1 = [cb_store, cb_name, cb_ctx, ML](const std::string &cb_arg1) {
                lua_State *L = ML;
                olua_checkhostthread();

                if (olua_contextequal(L, cb_ctx)) {
                    int top = lua_gettop(L);
                    olua_push_string(L, cb_arg1);

                    olua_callback(L, cb_store, cb_name.c_str(), 1);

                    lua_settop(L, top);
                }
            };
        } else {
            olua_removecallback(L, cb_store, cb_tag.c_str(), OLUA_TAG_EQUAL);
            arg1 = nullptr;
        }

        // std::function<void (const std::string &)> on_write
        self->on_write = arg1;

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::lua_xml_writer::on_write(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_lua_xml_writer_on_write(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // std::function<void (const std::string &)> on_write
        return _olua_fun_pugi_lua_xml_writer_on_write$1(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "pugixml.lua_xml_writer")) && (olua_is_callback(L, 2, "std.function") || olua_isnil(L, 2))) {
            // std::function<void (const std::string &)> on_write
            return _olua_fun_pugi_lua_xml_writer_on_write$2(L);
        // }
    }

    luaL_error(L, "method 'pugi::lua_xml_writer::on_write' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_cls_pugixml_lua_xml_writer(lua_State *L)
{
    oluacls_class<pugi::lua_xml_writer, pugi::xml_writer>(L, "pugixml.lua_xml_writer");
    oluacls_func(L, "new", _olua_fun_pugi_lua_xml_writer_new);
    oluacls_prop(L, "on_write", _olua_fun_pugi_lua_xml_writer_on_write, _olua_fun_pugi_lua_xml_writer_on_write);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_pugixml_lua_xml_writer(lua_State *L)
{
    olua_require(L, "pugixml",  _olua_module_pugixml);
    if (!olua_getclass(L, "pugixml.lua_xml_writer")) {
        luaL_error(L, "class not found: pugi::lua_xml_writer");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_pugi_xml_text___gc(lua_State *L)
{
    olua_startinvoke(L);

    auto self = (pugi::xml_text *)olua_toobj(L, 1, "pugixml.xml_text");
    olua_postgc(L, self);

    olua_endinvoke(L);

    return 0;
}

static int _olua_fun_pugi_xml_text_as_bool$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_text *self = nullptr;
        bool arg1 = false;       /** def */

        olua_to_object(L, 1, &self, "pugixml.xml_text");
        olua_check_bool(L, 2, &arg1);

        // bool as_bool(@optional bool def)
        bool ret = self->as_bool(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_text::as_bool(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_text_as_bool$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_text *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xml_text");

        // bool as_bool()
        bool ret = self->as_bool();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_text::as_bool(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_text_as_bool(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // bool as_bool()
        return _olua_fun_pugi_xml_text_as_bool$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "pugixml.xml_text")) && (olua_is_bool(L, 2))) {
            // bool as_bool(@optional bool def)
            return _olua_fun_pugi_xml_text_as_bool$1(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_text::as_bool' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_text_as_double$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_text *self = nullptr;
        double arg1 = 0;       /** def */

        olua_to_object(L, 1, &self, "pugixml.xml_text");
        olua_check_number(L, 2, &arg1);

        // double as_double(@optional double def)
        double ret = self->as_double(arg1);
        int num_ret = olua_push_number(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_text::as_double(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_text_as_double$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_text *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xml_text");

        // double as_double()
        double ret = self->as_double();
        int num_ret = olua_push_number(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_text::as_double(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_text_as_double(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // double as_double()
        return _olua_fun_pugi_xml_text_as_double$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "pugixml.xml_text")) && (olua_is_number(L, 2))) {
            // double as_double(@optional double def)
            return _olua_fun_pugi_xml_text_as_double$1(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_text::as_double' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_text_as_float$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_text *self = nullptr;
        float arg1 = 0;       /** def */

        olua_to_object(L, 1, &self, "pugixml.xml_text");
        olua_check_number(L, 2, &arg1);

        // float as_float(@optional float def)
        float ret = self->as_float(arg1);
        int num_ret = olua_push_number(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_text::as_float(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_text_as_float$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_text *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xml_text");

        // float as_float()
        float ret = self->as_float();
        int num_ret = olua_push_number(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_text::as_float(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_text_as_float(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // float as_float()
        return _olua_fun_pugi_xml_text_as_float$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "pugixml.xml_text")) && (olua_is_number(L, 2))) {
            // float as_float(@optional float def)
            return _olua_fun_pugi_xml_text_as_float$1(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_text::as_float' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_text_as_int$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_text *self = nullptr;
        int arg1 = 0;       /** def */

        olua_to_object(L, 1, &self, "pugixml.xml_text");
        olua_check_integer(L, 2, &arg1);

        // int as_int(@optional int def)
        int ret = self->as_int(arg1);
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_text::as_int(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_text_as_int$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_text *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xml_text");

        // int as_int()
        int ret = self->as_int();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_text::as_int(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_text_as_int(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // int as_int()
        return _olua_fun_pugi_xml_text_as_int$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "pugixml.xml_text")) && (olua_is_integer(L, 2))) {
            // int as_int(@optional int def)
            return _olua_fun_pugi_xml_text_as_int$1(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_text::as_int' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_text_as_llong$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_text *self = nullptr;
        long long arg1 = 0;       /** def */

        olua_to_object(L, 1, &self, "pugixml.xml_text");
        olua_check_integer(L, 2, &arg1);

        // long long as_llong(@optional long long def)
        long long ret = self->as_llong(arg1);
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_text::as_llong(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_text_as_llong$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_text *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xml_text");

        // long long as_llong()
        long long ret = self->as_llong();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_text::as_llong(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_text_as_llong(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // long long as_llong()
        return _olua_fun_pugi_xml_text_as_llong$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "pugixml.xml_text")) && (olua_is_integer(L, 2))) {
            // long long as_llong(@optional long long def)
            return _olua_fun_pugi_xml_text_as_llong$1(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_text::as_llong' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_text_as_string$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_text *self = nullptr;
        const pugi::char_t *arg1 = nullptr;       /** def */

        olua_to_object(L, 1, &self, "pugixml.xml_text");
        olua_check_string(L, 2, &arg1);

        // const pugi::char_t *as_string(@optional const pugi::char_t *def)
        const pugi::char_t *ret = self->as_string(arg1);
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_text::as_string(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_text_as_string$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_text *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xml_text");

        // const pugi::char_t *as_string()
        const pugi::char_t *ret = self->as_string();
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_text::as_string(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_text_as_string(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // const pugi::char_t *as_string()
        return _olua_fun_pugi_xml_text_as_string$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "pugixml.xml_text")) && (olua_is_string(L, 2))) {
            // const pugi::char_t *as_string(@optional const pugi::char_t *def)
            return _olua_fun_pugi_xml_text_as_string$1(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_text::as_string' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_text_as_uint$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_text *self = nullptr;
        unsigned int arg1 = 0;       /** def */

        olua_to_object(L, 1, &self, "pugixml.xml_text");
        olua_check_integer(L, 2, &arg1);

        // unsigned int as_uint(@optional unsigned int def)
        unsigned int ret = self->as_uint(arg1);
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_text::as_uint(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_text_as_uint$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_text *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xml_text");

        // unsigned int as_uint()
        unsigned int ret = self->as_uint();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_text::as_uint(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_text_as_uint(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // unsigned int as_uint()
        return _olua_fun_pugi_xml_text_as_uint$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "pugixml.xml_text")) && (olua_is_integer(L, 2))) {
            // unsigned int as_uint(@optional unsigned int def)
            return _olua_fun_pugi_xml_text_as_uint$1(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_text::as_uint' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_text_as_ullong$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_text *self = nullptr;
        unsigned long long arg1 = 0;       /** def */

        olua_to_object(L, 1, &self, "pugixml.xml_text");
        olua_check_integer(L, 2, &arg1);

        // unsigned long long as_ullong(@optional unsigned long long def)
        unsigned long long ret = self->as_ullong(arg1);
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_text::as_ullong(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_text_as_ullong$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_text *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xml_text");

        // unsigned long long as_ullong()
        unsigned long long ret = self->as_ullong();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_text::as_ullong(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_text_as_ullong(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // unsigned long long as_ullong()
        return _olua_fun_pugi_xml_text_as_ullong$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "pugixml.xml_text")) && (olua_is_integer(L, 2))) {
            // unsigned long long as_ullong(@optional unsigned long long def)
            return _olua_fun_pugi_xml_text_as_ullong$1(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_text::as_ullong' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_text_data(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_text *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xml_text");

        // pugi::xml_node data()
        pugi::xml_node ret = self->data();
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_node");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_text::data(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_text_empty(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_text *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xml_text");

        // bool empty()
        bool ret = self->empty();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_text::empty(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_text_get(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_text *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xml_text");

        // const pugi::char_t *get()
        const pugi::char_t *ret = self->get();
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_text::get(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_text_new(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // pugi::xml_text()
        pugi::xml_text *ret = new pugi::xml_text();
        int num_ret = olua_push_object(L, ret, "pugixml.xml_text");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_text::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_text_set$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_text *self = nullptr;
        const pugi::char_t *arg1 = nullptr;       /** rhs */

        olua_to_object(L, 1, &self, "pugixml.xml_text");
        olua_check_string(L, 2, &arg1);

        // bool set(const pugi::char_t *rhs)
        bool ret = self->set(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_text::set(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_text_set$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_text *self = nullptr;
        const pugi::char_t *arg1 = nullptr;       /** rhs */
        size_t arg2 = 0;       /** size */

        olua_to_object(L, 1, &self, "pugixml.xml_text");
        olua_check_string(L, 2, &arg1);
        olua_check_integer(L, 3, &arg2);

        // bool set(const pugi::char_t *rhs, size_t size)
        bool ret = self->set(arg1, arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_text::set(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_text_set(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "pugixml.xml_text")) && (olua_is_string(L, 2))) {
            // bool set(const pugi::char_t *rhs)
            return _olua_fun_pugi_xml_text_set$1(L);
        // }
    }

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "pugixml.xml_text")) && (olua_is_string(L, 2)) && (olua_is_integer(L, 3))) {
            // bool set(const pugi::char_t *rhs, size_t size)
            return _olua_fun_pugi_xml_text_set$2(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_text::set' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_text_set_bool(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_text *self = nullptr;
        bool arg1 = false;       /** rhs */

        olua_to_object(L, 1, &self, "pugixml.xml_text");
        olua_check_bool(L, 2, &arg1);

        // bool set(bool rhs)
        bool ret = self->set(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_text::set(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_text_set_double$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_text *self = nullptr;
        double arg1 = 0;       /** rhs */

        olua_to_object(L, 1, &self, "pugixml.xml_text");
        olua_check_number(L, 2, &arg1);

        // bool set(double rhs)
        bool ret = self->set(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_text::set(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_text_set_double$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_text *self = nullptr;
        double arg1 = 0;       /** rhs */
        int arg2 = 0;       /** precision */

        olua_to_object(L, 1, &self, "pugixml.xml_text");
        olua_check_number(L, 2, &arg1);
        olua_check_integer(L, 3, &arg2);

        // bool set(double rhs, int precision)
        bool ret = self->set(arg1, arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_text::set(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_text_set_double(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "pugixml.xml_text")) && (olua_is_number(L, 2))) {
            // bool set(double rhs)
            return _olua_fun_pugi_xml_text_set_double$1(L);
        // }
    }

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "pugixml.xml_text")) && (olua_is_number(L, 2)) && (olua_is_integer(L, 3))) {
            // bool set(double rhs, int precision)
            return _olua_fun_pugi_xml_text_set_double$2(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_text::set_double' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_text_set_float$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_text *self = nullptr;
        float arg1 = 0;       /** rhs */

        olua_to_object(L, 1, &self, "pugixml.xml_text");
        olua_check_number(L, 2, &arg1);

        // bool set(float rhs)
        bool ret = self->set(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_text::set(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_text_set_float$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_text *self = nullptr;
        float arg1 = 0;       /** rhs */
        int arg2 = 0;       /** precision */

        olua_to_object(L, 1, &self, "pugixml.xml_text");
        olua_check_number(L, 2, &arg1);
        olua_check_integer(L, 3, &arg2);

        // bool set(float rhs, int precision)
        bool ret = self->set(arg1, arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_text::set(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_text_set_float(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "pugixml.xml_text")) && (olua_is_number(L, 2))) {
            // bool set(float rhs)
            return _olua_fun_pugi_xml_text_set_float$1(L);
        // }
    }

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "pugixml.xml_text")) && (olua_is_number(L, 2)) && (olua_is_integer(L, 3))) {
            // bool set(float rhs, int precision)
            return _olua_fun_pugi_xml_text_set_float$2(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_text::set_float' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_text_set_int(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_text *self = nullptr;
        int arg1 = 0;       /** rhs */

        olua_to_object(L, 1, &self, "pugixml.xml_text");
        olua_check_integer(L, 2, &arg1);

        // bool set(int rhs)
        bool ret = self->set(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_text::set(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

#ifdef PUGIXML_HAS_LONG_LONG
static int _olua_fun_pugi_xml_text_set_llong(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_text *self = nullptr;
        long long arg1 = 0;       /** rhs */

        olua_to_object(L, 1, &self, "pugixml.xml_text");
        olua_check_integer(L, 2, &arg1);

        // bool set(long long rhs)
        bool ret = self->set(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_text::set(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}
#endif

static int _olua_fun_pugi_xml_text_set_long(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_text *self = nullptr;
        long arg1 = 0;       /** rhs */

        olua_to_object(L, 1, &self, "pugixml.xml_text");
        olua_check_integer(L, 2, &arg1);

        // bool set(long rhs)
        bool ret = self->set(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_text::set(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_text_set_uint(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_text *self = nullptr;
        unsigned int arg1 = 0;       /** rhs */

        olua_to_object(L, 1, &self, "pugixml.xml_text");
        olua_check_integer(L, 2, &arg1);

        // bool set(unsigned int rhs)
        bool ret = self->set(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_text::set(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

#ifdef PUGIXML_HAS_LONG_LONG
static int _olua_fun_pugi_xml_text_set_ullong(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_text *self = nullptr;
        unsigned long long arg1 = 0;       /** rhs */

        olua_to_object(L, 1, &self, "pugixml.xml_text");
        olua_check_integer(L, 2, &arg1);

        // bool set(unsigned long long rhs)
        bool ret = self->set(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_text::set(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}
#endif

static int _olua_fun_pugi_xml_text_set_ulong(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_text *self = nullptr;
        unsigned long arg1 = 0;       /** rhs */

        olua_to_object(L, 1, &self, "pugixml.xml_text");
        olua_check_integer(L, 2, &arg1);

        // bool set(unsigned long rhs)
        bool ret = self->set(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_text::set(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_pugixml_xml_text(lua_State *L)
{
    oluacls_class<pugi::xml_text>(L, "pugixml.xml_text");
    oluacls_func(L, "__gc", _olua_fun_pugi_xml_text___gc);
    oluacls_func(L, "as_bool", _olua_fun_pugi_xml_text_as_bool);
    oluacls_func(L, "as_double", _olua_fun_pugi_xml_text_as_double);
    oluacls_func(L, "as_float", _olua_fun_pugi_xml_text_as_float);
    oluacls_func(L, "as_int", _olua_fun_pugi_xml_text_as_int);
    oluacls_func(L, "as_llong", _olua_fun_pugi_xml_text_as_llong);
    oluacls_func(L, "as_string", _olua_fun_pugi_xml_text_as_string);
    oluacls_func(L, "as_uint", _olua_fun_pugi_xml_text_as_uint);
    oluacls_func(L, "as_ullong", _olua_fun_pugi_xml_text_as_ullong);
    oluacls_func(L, "data", _olua_fun_pugi_xml_text_data);
    oluacls_func(L, "empty", _olua_fun_pugi_xml_text_empty);
    oluacls_func(L, "get", _olua_fun_pugi_xml_text_get);
    oluacls_func(L, "new", _olua_fun_pugi_xml_text_new);
    oluacls_func(L, "set", _olua_fun_pugi_xml_text_set);
    oluacls_func(L, "set_bool", _olua_fun_pugi_xml_text_set_bool);
    oluacls_func(L, "set_double", _olua_fun_pugi_xml_text_set_double);
    oluacls_func(L, "set_float", _olua_fun_pugi_xml_text_set_float);
    oluacls_func(L, "set_int", _olua_fun_pugi_xml_text_set_int);
#ifdef PUGIXML_HAS_LONG_LONG
    oluacls_func(L, "set_llong", _olua_fun_pugi_xml_text_set_llong);
#endif
    oluacls_func(L, "set_long", _olua_fun_pugi_xml_text_set_long);
    oluacls_func(L, "set_uint", _olua_fun_pugi_xml_text_set_uint);
#ifdef PUGIXML_HAS_LONG_LONG
    oluacls_func(L, "set_ullong", _olua_fun_pugi_xml_text_set_ullong);
#endif
    oluacls_func(L, "set_ulong", _olua_fun_pugi_xml_text_set_ulong);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_pugixml_xml_text(lua_State *L)
{
    olua_require(L, "pugixml",  _olua_module_pugixml);
    if (!olua_getclass(L, "pugixml.xml_text")) {
        luaL_error(L, "class not found: pugi::xml_text");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_pugi_xml_node___eq(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        pugi::xml_node *arg1;       /** r */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_object(L, 2, &arg1, "pugixml.xml_node");

        // @operator(operator==) bool operator==(const pugi::xml_node &r)
        bool ret = (*self) == (*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::__eq(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node___gc(lua_State *L)
{
    olua_startinvoke(L);

    auto self = (pugi::xml_node *)olua_toobj(L, 1, "pugixml.xml_node");
    olua_postgc(L, self);

    olua_endinvoke(L);

    return 0;
}

static int _olua_fun_pugi_xml_node___le(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        pugi::xml_node *arg1;       /** r */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_object(L, 2, &arg1, "pugixml.xml_node");

        // @operator(operator<=) bool operator<=(const pugi::xml_node &r)
        bool ret = (*self) <= (*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::__le(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node___lt(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        pugi::xml_node *arg1;       /** r */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_object(L, 2, &arg1, "pugixml.xml_node");

        // @operator(operator<) bool operator<(const pugi::xml_node &r)
        bool ret = (*self) < (*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::__lt(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_append_attribute(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        const pugi::char_t *arg1 = nullptr;       /** name */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_string(L, 2, &arg1);

        // pugi::xml_attribute append_attribute(const pugi::char_t *name)
        pugi::xml_attribute ret = self->append_attribute(arg1);
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_attribute");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::append_attribute(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_append_buffer$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        void *arg1 = nullptr;       /** contents */
        size_t arg2 = 0;       /** size */
        unsigned int arg3 = 0;       /** options */
        pugi::xml_encoding arg4 = (pugi::xml_encoding)0;       /** encoding */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_object(L, 2, &arg1, "void *");
        olua_check_integer(L, 3, &arg2);
        olua_check_integer(L, 4, &arg3);
        olua_check_enum(L, 5, &arg4);

        // pugi::xml_parse_result append_buffer(const void *contents, size_t size, @optional unsigned int options, @optional pugi::xml_encoding encoding)
        pugi::xml_parse_result ret = self->append_buffer(arg1, arg2, arg3, arg4);
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_parse_result");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::append_buffer(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_append_buffer$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        void *arg1 = nullptr;       /** contents */
        size_t arg2 = 0;       /** size */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_object(L, 2, &arg1, "void *");
        olua_check_integer(L, 3, &arg2);

        // pugi::xml_parse_result append_buffer(const void *contents, size_t size)
        pugi::xml_parse_result ret = self->append_buffer(arg1, arg2);
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_parse_result");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::append_buffer(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_append_buffer$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        void *arg1 = nullptr;       /** contents */
        size_t arg2 = 0;       /** size */
        unsigned int arg3 = 0;       /** options */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_object(L, 2, &arg1, "void *");
        olua_check_integer(L, 3, &arg2);
        olua_check_integer(L, 4, &arg3);

        // pugi::xml_parse_result append_buffer(const void *contents, size_t size, @optional unsigned int options)
        pugi::xml_parse_result ret = self->append_buffer(arg1, arg2, arg3);
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_parse_result");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::append_buffer(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_append_buffer(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "pugixml.xml_node")) && (olua_is_object(L, 2, "void *")) && (olua_is_integer(L, 3))) {
            // pugi::xml_parse_result append_buffer(const void *contents, size_t size)
            return _olua_fun_pugi_xml_node_append_buffer$2(L);
        // }
    }

    if (num_args == 4) {
        // if ((olua_is_object(L, 1, "pugixml.xml_node")) && (olua_is_object(L, 2, "void *")) && (olua_is_integer(L, 3)) && (olua_is_integer(L, 4))) {
            // pugi::xml_parse_result append_buffer(const void *contents, size_t size, @optional unsigned int options)
            return _olua_fun_pugi_xml_node_append_buffer$3(L);
        // }
    }

    if (num_args == 5) {
        // if ((olua_is_object(L, 1, "pugixml.xml_node")) && (olua_is_object(L, 2, "void *")) && (olua_is_integer(L, 3)) && (olua_is_integer(L, 4)) && (olua_is_enum(L, 5))) {
            // pugi::xml_parse_result append_buffer(const void *contents, size_t size, @optional unsigned int options, @optional pugi::xml_encoding encoding)
            return _olua_fun_pugi_xml_node_append_buffer$1(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_node::append_buffer' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_node_append_child$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        pugi::xml_node_type arg1 = (pugi::xml_node_type)0;       /** type */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_enum(L, 2, &arg1);

        // pugi::xml_node append_child(@optional pugi::xml_node_type type)
        pugi::xml_node ret = self->append_child(arg1);
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_node");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::append_child(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_append_child$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xml_node");

        // pugi::xml_node append_child()
        pugi::xml_node ret = self->append_child();
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_node");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::append_child(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_append_child$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        const pugi::char_t *arg1 = nullptr;       /** name */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_string(L, 2, &arg1);

        // pugi::xml_node append_child(const pugi::char_t *name)
        pugi::xml_node ret = self->append_child(arg1);
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_node");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::append_child(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_append_child(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // pugi::xml_node append_child()
        return _olua_fun_pugi_xml_node_append_child$2(L);
    }

    if (num_args == 2) {
        if ((olua_is_object(L, 1, "pugixml.xml_node")) && (olua_is_enum(L, 2))) {
            // pugi::xml_node append_child(@optional pugi::xml_node_type type)
            return _olua_fun_pugi_xml_node_append_child$1(L);
        }

        // if ((olua_is_object(L, 1, "pugixml.xml_node")) && (olua_is_string(L, 2))) {
            // pugi::xml_node append_child(const pugi::char_t *name)
            return _olua_fun_pugi_xml_node_append_child$3(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_node::append_child' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_node_append_copy$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        pugi::xml_attribute *arg1;       /** proto */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_object(L, 2, &arg1, "pugixml.xml_attribute");

        // pugi::xml_attribute append_copy(const pugi::xml_attribute &proto)
        pugi::xml_attribute ret = self->append_copy(*arg1);
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_attribute");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::append_copy(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_append_copy$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        pugi::xml_node *arg1;       /** proto */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_object(L, 2, &arg1, "pugixml.xml_node");

        // pugi::xml_node append_copy(const pugi::xml_node &proto)
        pugi::xml_node ret = self->append_copy(*arg1);
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_node");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::append_copy(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_append_copy(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 2) {
        if ((olua_is_object(L, 1, "pugixml.xml_node")) && (olua_is_object(L, 2, "pugixml.xml_attribute"))) {
            // pugi::xml_attribute append_copy(const pugi::xml_attribute &proto)
            return _olua_fun_pugi_xml_node_append_copy$1(L);
        }

        // if ((olua_is_object(L, 1, "pugixml.xml_node")) && (olua_is_object(L, 2, "pugixml.xml_node"))) {
            // pugi::xml_node append_copy(const pugi::xml_node &proto)
            return _olua_fun_pugi_xml_node_append_copy$2(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_node::append_copy' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_node_append_move(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        pugi::xml_node *arg1;       /** moved */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_object(L, 2, &arg1, "pugixml.xml_node");

        // pugi::xml_node append_move(const pugi::xml_node &moved)
        pugi::xml_node ret = self->append_move(*arg1);
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_node");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::append_move(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_attribute$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        const pugi::char_t *arg1 = nullptr;       /** name */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_string(L, 2, &arg1);

        // pugi::xml_attribute attribute(const pugi::char_t *name)
        pugi::xml_attribute ret = self->attribute(arg1);
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_attribute");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::attribute(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_attribute$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        const pugi::char_t *arg1 = nullptr;       /** name */
        pugi::xml_attribute *arg2 = nullptr;       /** hint */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_string(L, 2, &arg1);
        olua_check_object(L, 3, &arg2, "pugixml.xml_attribute");

        // pugi::xml_attribute attribute(const pugi::char_t *name, pugi::xml_attribute &hint)
        pugi::xml_attribute ret = self->attribute(arg1, *arg2);
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_attribute");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::attribute(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_attribute(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "pugixml.xml_node")) && (olua_is_string(L, 2))) {
            // pugi::xml_attribute attribute(const pugi::char_t *name)
            return _olua_fun_pugi_xml_node_attribute$1(L);
        // }
    }

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "pugixml.xml_node")) && (olua_is_string(L, 2)) && (olua_is_object(L, 3, "pugixml.xml_attribute"))) {
            // pugi::xml_attribute attribute(const pugi::char_t *name, pugi::xml_attribute &hint)
            return _olua_fun_pugi_xml_node_attribute$2(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_node::attribute' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_node_child(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        const pugi::char_t *arg1 = nullptr;       /** name */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_string(L, 2, &arg1);

        // pugi::xml_node child(const pugi::char_t *name)
        pugi::xml_node ret = self->child(arg1);
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_node");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::child(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_child_value$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xml_node");

        // const pugi::char_t *child_value()
        const pugi::char_t *ret = self->child_value();
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::child_value(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_child_value$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        const pugi::char_t *arg1 = nullptr;       /** name */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_string(L, 2, &arg1);

        // const pugi::char_t *child_value(const pugi::char_t *name)
        const pugi::char_t *ret = self->child_value(arg1);
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::child_value(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_child_value(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // const pugi::char_t *child_value()
        return _olua_fun_pugi_xml_node_child_value$1(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "pugixml.xml_node")) && (olua_is_string(L, 2))) {
            // const pugi::char_t *child_value(const pugi::char_t *name)
            return _olua_fun_pugi_xml_node_child_value$2(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_node::child_value' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_node_empty(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xml_node");

        // bool empty()
        bool ret = self->empty();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::empty(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_find_attribute(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        std::function<bool (const pugi::xml_attribute &)> arg1;       /** pred */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_callback(L, 2, &arg1, "std.function");

        void *cb_store = (void *)self;
        std::string cb_tag = "find_attribute";
        std::string cb_name = olua_setcallback(L, cb_store, 2, cb_tag.c_str(), OLUA_TAG_REPLACE);
        olua_Context cb_ctx = olua_context(L);
        lua_State *ML = olua_mainthread(L);
        arg1 = [cb_store, cb_name, cb_ctx, ML](const pugi::xml_attribute &cb_arg1) {
            lua_State *L = ML;
            olua_checkhostthread();
            bool ret = false;       /** ret */
            if (olua_contextequal(L, cb_ctx)) {
                int top = lua_gettop(L);
                size_t last = olua_push_objpool(L);
                olua_enable_objpool(L);
                olua_push_object(L, cb_arg1, "pugixml.xml_attribute");
                olua_disable_objpool(L);

                olua_callback(L, cb_store, cb_name.c_str(), 1);

                if (olua_is_bool(L, -1)) {
                    olua_check_bool(L, -1, &ret);
                }

                //pop stack value
                olua_pop_objpool(L, last);
                lua_settop(L, top);
            }
            return ret;
        };

        // @template(find_attribute<std::function<bool(const pugi::xml_attribute &)>>) pugi::xml_attribute find_attribute(std::function<bool(const pugi::xml_attribute &)> pred)
        pugi::xml_attribute ret = self->find_attribute<std::function<bool(const pugi::xml_attribute &)>>(arg1);
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_attribute");

        olua_removecallback(L, cb_store, cb_name.c_str(), OLUA_TAG_WHOLE);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::find_attribute(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_find_child(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        std::function<bool (const pugi::xml_node &)> arg1;       /** pred */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_callback(L, 2, &arg1, "std.function");

        void *cb_store = (void *)self;
        std::string cb_tag = "find_child";
        std::string cb_name = olua_setcallback(L, cb_store, 2, cb_tag.c_str(), OLUA_TAG_REPLACE);
        olua_Context cb_ctx = olua_context(L);
        lua_State *ML = olua_mainthread(L);
        arg1 = [cb_store, cb_name, cb_ctx, ML](const pugi::xml_node &cb_arg1) {
            lua_State *L = ML;
            olua_checkhostthread();
            bool ret = false;       /** ret */
            if (olua_contextequal(L, cb_ctx)) {
                int top = lua_gettop(L);
                size_t last = olua_push_objpool(L);
                olua_enable_objpool(L);
                olua_push_object(L, cb_arg1, "pugixml.xml_node");
                olua_disable_objpool(L);

                olua_callback(L, cb_store, cb_name.c_str(), 1);

                if (olua_is_bool(L, -1)) {
                    olua_check_bool(L, -1, &ret);
                }

                //pop stack value
                olua_pop_objpool(L, last);
                lua_settop(L, top);
            }
            return ret;
        };

        // @template(find_child<std::function<bool(const pugi::xml_node &)>>) pugi::xml_node find_child(std::function<bool(const pugi::xml_node &)> pred)
        pugi::xml_node ret = self->find_child<std::function<bool(const pugi::xml_node &)>>(arg1);
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_node");

        olua_removecallback(L, cb_store, cb_name.c_str(), OLUA_TAG_WHOLE);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::find_child(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_find_child_by_attribute$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        const pugi::char_t *arg1 = nullptr;       /** name */
        const pugi::char_t *arg2 = nullptr;       /** attr_name */
        const pugi::char_t *arg3 = nullptr;       /** attr_value */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_string(L, 2, &arg1);
        olua_check_string(L, 3, &arg2);
        olua_check_string(L, 4, &arg3);

        // pugi::xml_node find_child_by_attribute(const pugi::char_t *name, const pugi::char_t *attr_name, const pugi::char_t *attr_value)
        pugi::xml_node ret = self->find_child_by_attribute(arg1, arg2, arg3);
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_node");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::find_child_by_attribute(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_find_child_by_attribute$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        const pugi::char_t *arg1 = nullptr;       /** attr_name */
        const pugi::char_t *arg2 = nullptr;       /** attr_value */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_string(L, 2, &arg1);
        olua_check_string(L, 3, &arg2);

        // pugi::xml_node find_child_by_attribute(const pugi::char_t *attr_name, const pugi::char_t *attr_value)
        pugi::xml_node ret = self->find_child_by_attribute(arg1, arg2);
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_node");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::find_child_by_attribute(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_find_child_by_attribute(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "pugixml.xml_node")) && (olua_is_string(L, 2)) && (olua_is_string(L, 3))) {
            // pugi::xml_node find_child_by_attribute(const pugi::char_t *attr_name, const pugi::char_t *attr_value)
            return _olua_fun_pugi_xml_node_find_child_by_attribute$2(L);
        // }
    }

    if (num_args == 4) {
        // if ((olua_is_object(L, 1, "pugixml.xml_node")) && (olua_is_string(L, 2)) && (olua_is_string(L, 3)) && (olua_is_string(L, 4))) {
            // pugi::xml_node find_child_by_attribute(const pugi::char_t *name, const pugi::char_t *attr_name, const pugi::char_t *attr_value)
            return _olua_fun_pugi_xml_node_find_child_by_attribute$1(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_node::find_child_by_attribute' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_node_find_node(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        std::function<bool (const pugi::xml_node &)> arg1;       /** pred */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_callback(L, 2, &arg1, "std.function");

        void *cb_store = (void *)self;
        std::string cb_tag = "find_node";
        std::string cb_name = olua_setcallback(L, cb_store, 2, cb_tag.c_str(), OLUA_TAG_REPLACE);
        olua_Context cb_ctx = olua_context(L);
        lua_State *ML = olua_mainthread(L);
        arg1 = [cb_store, cb_name, cb_ctx, ML](const pugi::xml_node &cb_arg1) {
            lua_State *L = ML;
            olua_checkhostthread();
            bool ret = false;       /** ret */
            if (olua_contextequal(L, cb_ctx)) {
                int top = lua_gettop(L);
                size_t last = olua_push_objpool(L);
                olua_enable_objpool(L);
                olua_push_object(L, cb_arg1, "pugixml.xml_node");
                olua_disable_objpool(L);

                olua_callback(L, cb_store, cb_name.c_str(), 1);

                if (olua_is_bool(L, -1)) {
                    olua_check_bool(L, -1, &ret);
                }

                //pop stack value
                olua_pop_objpool(L, last);
                lua_settop(L, top);
            }
            return ret;
        };

        // @template(find_node<std::function<bool(const pugi::xml_node &)>>) pugi::xml_node find_node(std::function<bool(const pugi::xml_node &)> pred)
        pugi::xml_node ret = self->find_node<std::function<bool(const pugi::xml_node &)>>(arg1);
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_node");

        olua_removecallback(L, cb_store, cb_name.c_str(), OLUA_TAG_WHOLE);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::find_node(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_first_attribute(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xml_node");

        // pugi::xml_attribute first_attribute()
        pugi::xml_attribute ret = self->first_attribute();
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_attribute");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::first_attribute(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_first_child(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xml_node");

        // pugi::xml_node first_child()
        pugi::xml_node ret = self->first_child();
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_node");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::first_child(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_first_element_by_path$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        const pugi::char_t *arg1 = nullptr;       /** path */
        pugi::char_t arg2 = 0;       /** delimiter */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_string(L, 2, &arg1);
        olua_check_integer(L, 3, &arg2);

        // pugi::xml_node first_element_by_path(const pugi::char_t *path, @optional pugi::char_t delimiter)
        pugi::xml_node ret = self->first_element_by_path(arg1, arg2);
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_node");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::first_element_by_path(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_first_element_by_path$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        const pugi::char_t *arg1 = nullptr;       /** path */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_string(L, 2, &arg1);

        // pugi::xml_node first_element_by_path(const pugi::char_t *path)
        pugi::xml_node ret = self->first_element_by_path(arg1);
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_node");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::first_element_by_path(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_first_element_by_path(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "pugixml.xml_node")) && (olua_is_string(L, 2))) {
            // pugi::xml_node first_element_by_path(const pugi::char_t *path)
            return _olua_fun_pugi_xml_node_first_element_by_path$2(L);
        // }
    }

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "pugixml.xml_node")) && (olua_is_string(L, 2)) && (olua_is_integer(L, 3))) {
            // pugi::xml_node first_element_by_path(const pugi::char_t *path, @optional pugi::char_t delimiter)
            return _olua_fun_pugi_xml_node_first_element_by_path$1(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_node::first_element_by_path' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_node_hash_value(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xml_node");

        // size_t hash_value()
        size_t ret = self->hash_value();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::hash_value(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_insert_attribute_after(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        const pugi::char_t *arg1 = nullptr;       /** name */
        pugi::xml_attribute *arg2;       /** attr */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_string(L, 2, &arg1);
        olua_check_object(L, 3, &arg2, "pugixml.xml_attribute");

        // pugi::xml_attribute insert_attribute_after(const pugi::char_t *name, const pugi::xml_attribute &attr)
        pugi::xml_attribute ret = self->insert_attribute_after(arg1, *arg2);
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_attribute");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::insert_attribute_after(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_insert_attribute_before(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        const pugi::char_t *arg1 = nullptr;       /** name */
        pugi::xml_attribute *arg2;       /** attr */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_string(L, 2, &arg1);
        olua_check_object(L, 3, &arg2, "pugixml.xml_attribute");

        // pugi::xml_attribute insert_attribute_before(const pugi::char_t *name, const pugi::xml_attribute &attr)
        pugi::xml_attribute ret = self->insert_attribute_before(arg1, *arg2);
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_attribute");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::insert_attribute_before(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_insert_child_after$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        pugi::xml_node_type arg1 = (pugi::xml_node_type)0;       /** type */
        pugi::xml_node *arg2;       /** node */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_enum(L, 2, &arg1);
        olua_check_object(L, 3, &arg2, "pugixml.xml_node");

        // pugi::xml_node insert_child_after(pugi::xml_node_type type, const pugi::xml_node &node)
        pugi::xml_node ret = self->insert_child_after(arg1, *arg2);
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_node");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::insert_child_after(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_insert_child_after$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        const pugi::char_t *arg1 = nullptr;       /** name */
        pugi::xml_node *arg2;       /** node */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_string(L, 2, &arg1);
        olua_check_object(L, 3, &arg2, "pugixml.xml_node");

        // pugi::xml_node insert_child_after(const pugi::char_t *name, const pugi::xml_node &node)
        pugi::xml_node ret = self->insert_child_after(arg1, *arg2);
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_node");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::insert_child_after(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_insert_child_after(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 3) {
        if ((olua_is_object(L, 1, "pugixml.xml_node")) && (olua_is_enum(L, 2)) && (olua_is_object(L, 3, "pugixml.xml_node"))) {
            // pugi::xml_node insert_child_after(pugi::xml_node_type type, const pugi::xml_node &node)
            return _olua_fun_pugi_xml_node_insert_child_after$1(L);
        }

        // if ((olua_is_object(L, 1, "pugixml.xml_node")) && (olua_is_string(L, 2)) && (olua_is_object(L, 3, "pugixml.xml_node"))) {
            // pugi::xml_node insert_child_after(const pugi::char_t *name, const pugi::xml_node &node)
            return _olua_fun_pugi_xml_node_insert_child_after$2(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_node::insert_child_after' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_node_insert_child_before$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        pugi::xml_node_type arg1 = (pugi::xml_node_type)0;       /** type */
        pugi::xml_node *arg2;       /** node */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_enum(L, 2, &arg1);
        olua_check_object(L, 3, &arg2, "pugixml.xml_node");

        // pugi::xml_node insert_child_before(pugi::xml_node_type type, const pugi::xml_node &node)
        pugi::xml_node ret = self->insert_child_before(arg1, *arg2);
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_node");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::insert_child_before(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_insert_child_before$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        const pugi::char_t *arg1 = nullptr;       /** name */
        pugi::xml_node *arg2;       /** node */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_string(L, 2, &arg1);
        olua_check_object(L, 3, &arg2, "pugixml.xml_node");

        // pugi::xml_node insert_child_before(const pugi::char_t *name, const pugi::xml_node &node)
        pugi::xml_node ret = self->insert_child_before(arg1, *arg2);
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_node");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::insert_child_before(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_insert_child_before(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 3) {
        if ((olua_is_object(L, 1, "pugixml.xml_node")) && (olua_is_enum(L, 2)) && (olua_is_object(L, 3, "pugixml.xml_node"))) {
            // pugi::xml_node insert_child_before(pugi::xml_node_type type, const pugi::xml_node &node)
            return _olua_fun_pugi_xml_node_insert_child_before$1(L);
        }

        // if ((olua_is_object(L, 1, "pugixml.xml_node")) && (olua_is_string(L, 2)) && (olua_is_object(L, 3, "pugixml.xml_node"))) {
            // pugi::xml_node insert_child_before(const pugi::char_t *name, const pugi::xml_node &node)
            return _olua_fun_pugi_xml_node_insert_child_before$2(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_node::insert_child_before' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_node_insert_copy_after$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        pugi::xml_attribute *arg1;       /** proto */
        pugi::xml_attribute *arg2;       /** attr */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_object(L, 2, &arg1, "pugixml.xml_attribute");
        olua_check_object(L, 3, &arg2, "pugixml.xml_attribute");

        // pugi::xml_attribute insert_copy_after(const pugi::xml_attribute &proto, const pugi::xml_attribute &attr)
        pugi::xml_attribute ret = self->insert_copy_after(*arg1, *arg2);
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_attribute");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::insert_copy_after(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_insert_copy_after$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        pugi::xml_node *arg1;       /** proto */
        pugi::xml_node *arg2;       /** node */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_object(L, 2, &arg1, "pugixml.xml_node");
        olua_check_object(L, 3, &arg2, "pugixml.xml_node");

        // pugi::xml_node insert_copy_after(const pugi::xml_node &proto, const pugi::xml_node &node)
        pugi::xml_node ret = self->insert_copy_after(*arg1, *arg2);
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_node");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::insert_copy_after(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_insert_copy_after(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 3) {
        if ((olua_is_object(L, 1, "pugixml.xml_node")) && (olua_is_object(L, 2, "pugixml.xml_attribute")) && (olua_is_object(L, 3, "pugixml.xml_attribute"))) {
            // pugi::xml_attribute insert_copy_after(const pugi::xml_attribute &proto, const pugi::xml_attribute &attr)
            return _olua_fun_pugi_xml_node_insert_copy_after$1(L);
        }

        // if ((olua_is_object(L, 1, "pugixml.xml_node")) && (olua_is_object(L, 2, "pugixml.xml_node")) && (olua_is_object(L, 3, "pugixml.xml_node"))) {
            // pugi::xml_node insert_copy_after(const pugi::xml_node &proto, const pugi::xml_node &node)
            return _olua_fun_pugi_xml_node_insert_copy_after$2(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_node::insert_copy_after' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_node_insert_copy_before$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        pugi::xml_attribute *arg1;       /** proto */
        pugi::xml_attribute *arg2;       /** attr */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_object(L, 2, &arg1, "pugixml.xml_attribute");
        olua_check_object(L, 3, &arg2, "pugixml.xml_attribute");

        // pugi::xml_attribute insert_copy_before(const pugi::xml_attribute &proto, const pugi::xml_attribute &attr)
        pugi::xml_attribute ret = self->insert_copy_before(*arg1, *arg2);
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_attribute");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::insert_copy_before(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_insert_copy_before$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        pugi::xml_node *arg1;       /** proto */
        pugi::xml_node *arg2;       /** node */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_object(L, 2, &arg1, "pugixml.xml_node");
        olua_check_object(L, 3, &arg2, "pugixml.xml_node");

        // pugi::xml_node insert_copy_before(const pugi::xml_node &proto, const pugi::xml_node &node)
        pugi::xml_node ret = self->insert_copy_before(*arg1, *arg2);
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_node");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::insert_copy_before(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_insert_copy_before(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 3) {
        if ((olua_is_object(L, 1, "pugixml.xml_node")) && (olua_is_object(L, 2, "pugixml.xml_attribute")) && (olua_is_object(L, 3, "pugixml.xml_attribute"))) {
            // pugi::xml_attribute insert_copy_before(const pugi::xml_attribute &proto, const pugi::xml_attribute &attr)
            return _olua_fun_pugi_xml_node_insert_copy_before$1(L);
        }

        // if ((olua_is_object(L, 1, "pugixml.xml_node")) && (olua_is_object(L, 2, "pugixml.xml_node")) && (olua_is_object(L, 3, "pugixml.xml_node"))) {
            // pugi::xml_node insert_copy_before(const pugi::xml_node &proto, const pugi::xml_node &node)
            return _olua_fun_pugi_xml_node_insert_copy_before$2(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_node::insert_copy_before' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_node_insert_move_after(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        pugi::xml_node *arg1;       /** moved */
        pugi::xml_node *arg2;       /** node */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_object(L, 2, &arg1, "pugixml.xml_node");
        olua_check_object(L, 3, &arg2, "pugixml.xml_node");

        // pugi::xml_node insert_move_after(const pugi::xml_node &moved, const pugi::xml_node &node)
        pugi::xml_node ret = self->insert_move_after(*arg1, *arg2);
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_node");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::insert_move_after(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_insert_move_before(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        pugi::xml_node *arg1;       /** moved */
        pugi::xml_node *arg2;       /** node */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_object(L, 2, &arg1, "pugixml.xml_node");
        olua_check_object(L, 3, &arg2, "pugixml.xml_node");

        // pugi::xml_node insert_move_before(const pugi::xml_node &moved, const pugi::xml_node &node)
        pugi::xml_node ret = self->insert_move_before(*arg1, *arg2);
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_node");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::insert_move_before(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_last_attribute(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xml_node");

        // pugi::xml_attribute last_attribute()
        pugi::xml_attribute ret = self->last_attribute();
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_attribute");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::last_attribute(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_last_child(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xml_node");

        // pugi::xml_node last_child()
        pugi::xml_node ret = self->last_child();
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_node");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::last_child(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_name(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xml_node");

        // const pugi::char_t *name()
        const pugi::char_t *ret = self->name();
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::name(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_new(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // pugi::xml_node()
        pugi::xml_node *ret = new pugi::xml_node();
        int num_ret = olua_push_object(L, ret, "pugixml.xml_node");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_next_sibling$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xml_node");

        // pugi::xml_node next_sibling()
        pugi::xml_node ret = self->next_sibling();
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_node");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::next_sibling(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_next_sibling$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        const pugi::char_t *arg1 = nullptr;       /** name */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_string(L, 2, &arg1);

        // pugi::xml_node next_sibling(const pugi::char_t *name)
        pugi::xml_node ret = self->next_sibling(arg1);
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_node");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::next_sibling(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_next_sibling(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // pugi::xml_node next_sibling()
        return _olua_fun_pugi_xml_node_next_sibling$1(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "pugixml.xml_node")) && (olua_is_string(L, 2))) {
            // pugi::xml_node next_sibling(const pugi::char_t *name)
            return _olua_fun_pugi_xml_node_next_sibling$2(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_node::next_sibling' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_node_offset_debug(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xml_node");

        // ptrdiff_t offset_debug()
        ptrdiff_t ret = self->offset_debug();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::offset_debug(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_parent(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xml_node");

        // pugi::xml_node parent()
        pugi::xml_node ret = self->parent();
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_node");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::parent(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_path$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        pugi::char_t arg1 = 0;       /** delimiter */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_integer(L, 2, &arg1);

        // pugi::string_t path(@optional pugi::char_t delimiter)
        pugi::string_t ret = self->path(arg1);
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::path(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_path$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xml_node");

        // pugi::string_t path()
        pugi::string_t ret = self->path();
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::path(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_path(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // pugi::string_t path()
        return _olua_fun_pugi_xml_node_path$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "pugixml.xml_node")) && (olua_is_integer(L, 2))) {
            // pugi::string_t path(@optional pugi::char_t delimiter)
            return _olua_fun_pugi_xml_node_path$1(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_node::path' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_node_prepend_attribute(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        const pugi::char_t *arg1 = nullptr;       /** name */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_string(L, 2, &arg1);

        // pugi::xml_attribute prepend_attribute(const pugi::char_t *name)
        pugi::xml_attribute ret = self->prepend_attribute(arg1);
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_attribute");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::prepend_attribute(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_prepend_child$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        pugi::xml_node_type arg1 = (pugi::xml_node_type)0;       /** type */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_enum(L, 2, &arg1);

        // pugi::xml_node prepend_child(@optional pugi::xml_node_type type)
        pugi::xml_node ret = self->prepend_child(arg1);
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_node");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::prepend_child(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_prepend_child$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xml_node");

        // pugi::xml_node prepend_child()
        pugi::xml_node ret = self->prepend_child();
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_node");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::prepend_child(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_prepend_child$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        const pugi::char_t *arg1 = nullptr;       /** name */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_string(L, 2, &arg1);

        // pugi::xml_node prepend_child(const pugi::char_t *name)
        pugi::xml_node ret = self->prepend_child(arg1);
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_node");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::prepend_child(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_prepend_child(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // pugi::xml_node prepend_child()
        return _olua_fun_pugi_xml_node_prepend_child$2(L);
    }

    if (num_args == 2) {
        if ((olua_is_object(L, 1, "pugixml.xml_node")) && (olua_is_enum(L, 2))) {
            // pugi::xml_node prepend_child(@optional pugi::xml_node_type type)
            return _olua_fun_pugi_xml_node_prepend_child$1(L);
        }

        // if ((olua_is_object(L, 1, "pugixml.xml_node")) && (olua_is_string(L, 2))) {
            // pugi::xml_node prepend_child(const pugi::char_t *name)
            return _olua_fun_pugi_xml_node_prepend_child$3(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_node::prepend_child' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_node_prepend_copy$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        pugi::xml_attribute *arg1;       /** proto */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_object(L, 2, &arg1, "pugixml.xml_attribute");

        // pugi::xml_attribute prepend_copy(const pugi::xml_attribute &proto)
        pugi::xml_attribute ret = self->prepend_copy(*arg1);
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_attribute");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::prepend_copy(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_prepend_copy$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        pugi::xml_node *arg1;       /** proto */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_object(L, 2, &arg1, "pugixml.xml_node");

        // pugi::xml_node prepend_copy(const pugi::xml_node &proto)
        pugi::xml_node ret = self->prepend_copy(*arg1);
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_node");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::prepend_copy(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_prepend_copy(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 2) {
        if ((olua_is_object(L, 1, "pugixml.xml_node")) && (olua_is_object(L, 2, "pugixml.xml_attribute"))) {
            // pugi::xml_attribute prepend_copy(const pugi::xml_attribute &proto)
            return _olua_fun_pugi_xml_node_prepend_copy$1(L);
        }

        // if ((olua_is_object(L, 1, "pugixml.xml_node")) && (olua_is_object(L, 2, "pugixml.xml_node"))) {
            // pugi::xml_node prepend_copy(const pugi::xml_node &proto)
            return _olua_fun_pugi_xml_node_prepend_copy$2(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_node::prepend_copy' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_node_prepend_move(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        pugi::xml_node *arg1;       /** moved */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_object(L, 2, &arg1, "pugixml.xml_node");

        // pugi::xml_node prepend_move(const pugi::xml_node &moved)
        pugi::xml_node ret = self->prepend_move(*arg1);
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_node");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::prepend_move(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_previous_sibling$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xml_node");

        // pugi::xml_node previous_sibling()
        pugi::xml_node ret = self->previous_sibling();
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_node");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::previous_sibling(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_previous_sibling$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        const pugi::char_t *arg1 = nullptr;       /** name */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_string(L, 2, &arg1);

        // pugi::xml_node previous_sibling(const pugi::char_t *name)
        pugi::xml_node ret = self->previous_sibling(arg1);
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_node");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::previous_sibling(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_previous_sibling(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // pugi::xml_node previous_sibling()
        return _olua_fun_pugi_xml_node_previous_sibling$1(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "pugixml.xml_node")) && (olua_is_string(L, 2))) {
            // pugi::xml_node previous_sibling(const pugi::char_t *name)
            return _olua_fun_pugi_xml_node_previous_sibling$2(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_node::previous_sibling' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_node_print$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        pugi::xml_writer *arg1 = nullptr;       /** writer */
        const pugi::char_t *arg2 = nullptr;       /** indent */
        unsigned int arg3 = 0;       /** flags */
        pugi::xml_encoding arg4 = (pugi::xml_encoding)0;       /** encoding */
        unsigned int arg5 = 0;       /** depth */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_object(L, 2, &arg1, "pugixml.xml_writer");
        olua_check_string(L, 3, &arg2);
        olua_check_integer(L, 4, &arg3);
        olua_check_enum(L, 5, &arg4);
        olua_check_integer(L, 6, &arg5);

        // void print(pugi::xml_writer &writer, @optional const pugi::char_t *indent, @optional unsigned int flags, @optional pugi::xml_encoding encoding, @optional unsigned int depth)
        self->print(*arg1, arg2, arg3, arg4, arg5);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::print(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_print$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        pugi::xml_writer *arg1 = nullptr;       /** writer */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_object(L, 2, &arg1, "pugixml.xml_writer");

        // void print(pugi::xml_writer &writer)
        self->print(*arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::print(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_print$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        pugi::xml_writer *arg1 = nullptr;       /** writer */
        const pugi::char_t *arg2 = nullptr;       /** indent */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_object(L, 2, &arg1, "pugixml.xml_writer");
        olua_check_string(L, 3, &arg2);

        // void print(pugi::xml_writer &writer, @optional const pugi::char_t *indent)
        self->print(*arg1, arg2);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::print(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_print$4(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        pugi::xml_writer *arg1 = nullptr;       /** writer */
        const pugi::char_t *arg2 = nullptr;       /** indent */
        unsigned int arg3 = 0;       /** flags */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_object(L, 2, &arg1, "pugixml.xml_writer");
        olua_check_string(L, 3, &arg2);
        olua_check_integer(L, 4, &arg3);

        // void print(pugi::xml_writer &writer, @optional const pugi::char_t *indent, @optional unsigned int flags)
        self->print(*arg1, arg2, arg3);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::print(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_print$5(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        pugi::xml_writer *arg1 = nullptr;       /** writer */
        const pugi::char_t *arg2 = nullptr;       /** indent */
        unsigned int arg3 = 0;       /** flags */
        pugi::xml_encoding arg4 = (pugi::xml_encoding)0;       /** encoding */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_object(L, 2, &arg1, "pugixml.xml_writer");
        olua_check_string(L, 3, &arg2);
        olua_check_integer(L, 4, &arg3);
        olua_check_enum(L, 5, &arg4);

        // void print(pugi::xml_writer &writer, @optional const pugi::char_t *indent, @optional unsigned int flags, @optional pugi::xml_encoding encoding)
        self->print(*arg1, arg2, arg3, arg4);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::print(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_print(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "pugixml.xml_node")) && (olua_is_object(L, 2, "pugixml.xml_writer"))) {
            // void print(pugi::xml_writer &writer)
            return _olua_fun_pugi_xml_node_print$2(L);
        // }
    }

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "pugixml.xml_node")) && (olua_is_object(L, 2, "pugixml.xml_writer")) && (olua_is_string(L, 3))) {
            // void print(pugi::xml_writer &writer, @optional const pugi::char_t *indent)
            return _olua_fun_pugi_xml_node_print$3(L);
        // }
    }

    if (num_args == 4) {
        // if ((olua_is_object(L, 1, "pugixml.xml_node")) && (olua_is_object(L, 2, "pugixml.xml_writer")) && (olua_is_string(L, 3)) && (olua_is_integer(L, 4))) {
            // void print(pugi::xml_writer &writer, @optional const pugi::char_t *indent, @optional unsigned int flags)
            return _olua_fun_pugi_xml_node_print$4(L);
        // }
    }

    if (num_args == 5) {
        // if ((olua_is_object(L, 1, "pugixml.xml_node")) && (olua_is_object(L, 2, "pugixml.xml_writer")) && (olua_is_string(L, 3)) && (olua_is_integer(L, 4)) && (olua_is_enum(L, 5))) {
            // void print(pugi::xml_writer &writer, @optional const pugi::char_t *indent, @optional unsigned int flags, @optional pugi::xml_encoding encoding)
            return _olua_fun_pugi_xml_node_print$5(L);
        // }
    }

    if (num_args == 6) {
        // if ((olua_is_object(L, 1, "pugixml.xml_node")) && (olua_is_object(L, 2, "pugixml.xml_writer")) && (olua_is_string(L, 3)) && (olua_is_integer(L, 4)) && (olua_is_enum(L, 5)) && (olua_is_integer(L, 6))) {
            // void print(pugi::xml_writer &writer, @optional const pugi::char_t *indent, @optional unsigned int flags, @optional pugi::xml_encoding encoding, @optional unsigned int depth)
            return _olua_fun_pugi_xml_node_print$1(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_node::print' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_node_remove_attribute$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        pugi::xml_attribute *arg1;       /** a */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_object(L, 2, &arg1, "pugixml.xml_attribute");

        // bool remove_attribute(const pugi::xml_attribute &a)
        bool ret = self->remove_attribute(*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::remove_attribute(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_remove_attribute$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        const pugi::char_t *arg1 = nullptr;       /** name */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_string(L, 2, &arg1);

        // bool remove_attribute(const pugi::char_t *name)
        bool ret = self->remove_attribute(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::remove_attribute(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_remove_attribute(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 2) {
        if ((olua_is_object(L, 1, "pugixml.xml_node")) && (olua_is_object(L, 2, "pugixml.xml_attribute"))) {
            // bool remove_attribute(const pugi::xml_attribute &a)
            return _olua_fun_pugi_xml_node_remove_attribute$1(L);
        }

        // if ((olua_is_object(L, 1, "pugixml.xml_node")) && (olua_is_string(L, 2))) {
            // bool remove_attribute(const pugi::char_t *name)
            return _olua_fun_pugi_xml_node_remove_attribute$2(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_node::remove_attribute' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_node_remove_attributes(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xml_node");

        // bool remove_attributes()
        bool ret = self->remove_attributes();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::remove_attributes(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_remove_child$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        pugi::xml_node *arg1;       /** n */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_object(L, 2, &arg1, "pugixml.xml_node");

        // bool remove_child(const pugi::xml_node &n)
        bool ret = self->remove_child(*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::remove_child(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_remove_child$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        const pugi::char_t *arg1 = nullptr;       /** name */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_string(L, 2, &arg1);

        // bool remove_child(const pugi::char_t *name)
        bool ret = self->remove_child(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::remove_child(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_remove_child(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 2) {
        if ((olua_is_object(L, 1, "pugixml.xml_node")) && (olua_is_object(L, 2, "pugixml.xml_node"))) {
            // bool remove_child(const pugi::xml_node &n)
            return _olua_fun_pugi_xml_node_remove_child$1(L);
        }

        // if ((olua_is_object(L, 1, "pugixml.xml_node")) && (olua_is_string(L, 2))) {
            // bool remove_child(const pugi::char_t *name)
            return _olua_fun_pugi_xml_node_remove_child$2(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_node::remove_child' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_node_remove_children(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xml_node");

        // bool remove_children()
        bool ret = self->remove_children();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::remove_children(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_root(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xml_node");

        // pugi::xml_node root()
        pugi::xml_node ret = self->root();
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_node");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::root(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_select_node$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        const pugi::char_t *arg1 = nullptr;       /** query */
        pugi::xpath_variable_set *arg2 = nullptr;       /** variables */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_string(L, 2, &arg1);
        olua_check_object(L, 3, &arg2, "pugixml.xpath_variable_set");

        // pugi::xpath_node select_node(const pugi::char_t *query, @optional pugi::xpath_variable_set *variables)
        pugi::xpath_node ret = self->select_node(arg1, arg2);
        int num_ret = olua_copy_object(L, ret, "pugixml.xpath_node");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::select_node(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_select_node$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        const pugi::char_t *arg1 = nullptr;       /** query */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_string(L, 2, &arg1);

        // pugi::xpath_node select_node(const pugi::char_t *query)
        pugi::xpath_node ret = self->select_node(arg1);
        int num_ret = olua_copy_object(L, ret, "pugixml.xpath_node");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::select_node(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_select_node$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        pugi::xpath_query *arg1;       /** query */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_object(L, 2, &arg1, "pugixml.xpath_query");

        // pugi::xpath_node select_node(const pugi::xpath_query &query)
        pugi::xpath_node ret = self->select_node(*arg1);
        int num_ret = olua_copy_object(L, ret, "pugixml.xpath_node");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::select_node(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_select_node(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 2) {
        if ((olua_is_object(L, 1, "pugixml.xml_node")) && (olua_is_string(L, 2))) {
            // pugi::xpath_node select_node(const pugi::char_t *query)
            return _olua_fun_pugi_xml_node_select_node$2(L);
        }

        // if ((olua_is_object(L, 1, "pugixml.xml_node")) && (olua_is_object(L, 2, "pugixml.xpath_query"))) {
            // pugi::xpath_node select_node(const pugi::xpath_query &query)
            return _olua_fun_pugi_xml_node_select_node$3(L);
        // }
    }

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "pugixml.xml_node")) && (olua_is_string(L, 2)) && (olua_is_object(L, 3, "pugixml.xpath_variable_set"))) {
            // pugi::xpath_node select_node(const pugi::char_t *query, @optional pugi::xpath_variable_set *variables)
            return _olua_fun_pugi_xml_node_select_node$1(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_node::select_node' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_node_select_nodes$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        const pugi::char_t *arg1 = nullptr;       /** query */
        pugi::xpath_variable_set *arg2 = nullptr;       /** variables */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_string(L, 2, &arg1);
        olua_check_object(L, 3, &arg2, "pugixml.xpath_variable_set");

        // pugi::xpath_node_set select_nodes(const pugi::char_t *query, @optional pugi::xpath_variable_set *variables)
        pugi::xpath_node_set ret = self->select_nodes(arg1, arg2);
        int num_ret = olua_copy_object(L, ret, "pugixml.xpath_node_set");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::select_nodes(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_select_nodes$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        const pugi::char_t *arg1 = nullptr;       /** query */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_string(L, 2, &arg1);

        // pugi::xpath_node_set select_nodes(const pugi::char_t *query)
        pugi::xpath_node_set ret = self->select_nodes(arg1);
        int num_ret = olua_copy_object(L, ret, "pugixml.xpath_node_set");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::select_nodes(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_select_nodes$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        pugi::xpath_query *arg1;       /** query */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_object(L, 2, &arg1, "pugixml.xpath_query");

        // pugi::xpath_node_set select_nodes(const pugi::xpath_query &query)
        pugi::xpath_node_set ret = self->select_nodes(*arg1);
        int num_ret = olua_copy_object(L, ret, "pugixml.xpath_node_set");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::select_nodes(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_select_nodes(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 2) {
        if ((olua_is_object(L, 1, "pugixml.xml_node")) && (olua_is_string(L, 2))) {
            // pugi::xpath_node_set select_nodes(const pugi::char_t *query)
            return _olua_fun_pugi_xml_node_select_nodes$2(L);
        }

        // if ((olua_is_object(L, 1, "pugixml.xml_node")) && (olua_is_object(L, 2, "pugixml.xpath_query"))) {
            // pugi::xpath_node_set select_nodes(const pugi::xpath_query &query)
            return _olua_fun_pugi_xml_node_select_nodes$3(L);
        // }
    }

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "pugixml.xml_node")) && (olua_is_string(L, 2)) && (olua_is_object(L, 3, "pugixml.xpath_variable_set"))) {
            // pugi::xpath_node_set select_nodes(const pugi::char_t *query, @optional pugi::xpath_variable_set *variables)
            return _olua_fun_pugi_xml_node_select_nodes$1(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_node::select_nodes' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_node_set_name$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        const pugi::char_t *arg1 = nullptr;       /** rhs */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_string(L, 2, &arg1);

        // bool set_name(const pugi::char_t *rhs)
        bool ret = self->set_name(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::set_name(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_set_name$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        const pugi::char_t *arg1 = nullptr;       /** rhs */
        size_t arg2 = 0;       /** size */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_string(L, 2, &arg1);
        olua_check_integer(L, 3, &arg2);

        // bool set_name(const pugi::char_t *rhs, size_t size)
        bool ret = self->set_name(arg1, arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::set_name(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_set_name(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "pugixml.xml_node")) && (olua_is_string(L, 2))) {
            // bool set_name(const pugi::char_t *rhs)
            return _olua_fun_pugi_xml_node_set_name$1(L);
        // }
    }

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "pugixml.xml_node")) && (olua_is_string(L, 2)) && (olua_is_integer(L, 3))) {
            // bool set_name(const pugi::char_t *rhs, size_t size)
            return _olua_fun_pugi_xml_node_set_name$2(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_node::set_name' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_node_set_value$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        const pugi::char_t *arg1 = nullptr;       /** rhs */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_string(L, 2, &arg1);

        // bool set_value(const pugi::char_t *rhs)
        bool ret = self->set_value(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::set_value(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_set_value$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        const pugi::char_t *arg1 = nullptr;       /** rhs */
        size_t arg2 = 0;       /** size */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_string(L, 2, &arg1);
        olua_check_integer(L, 3, &arg2);

        // bool set_value(const pugi::char_t *rhs, size_t size)
        bool ret = self->set_value(arg1, arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::set_value(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_set_value(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "pugixml.xml_node")) && (olua_is_string(L, 2))) {
            // bool set_value(const pugi::char_t *rhs)
            return _olua_fun_pugi_xml_node_set_value$1(L);
        // }
    }

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "pugixml.xml_node")) && (olua_is_string(L, 2)) && (olua_is_integer(L, 3))) {
            // bool set_value(const pugi::char_t *rhs, size_t size)
            return _olua_fun_pugi_xml_node_set_value$2(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_node::set_value' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_node_text(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xml_node");

        // pugi::xml_text text()
        pugi::xml_text ret = self->text();
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_text");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::text(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_traverse(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;
        pugi::xml_tree_walker *arg1 = nullptr;       /** walker */

        olua_to_object(L, 1, &self, "pugixml.xml_node");
        olua_check_object(L, 2, &arg1, "pugixml.xml_tree_walker");

        // bool traverse(pugi::xml_tree_walker &walker)
        bool ret = self->traverse(*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::traverse(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_type(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xml_node");

        // pugi::xml_node_type type()
        pugi::xml_node_type ret = self->type();
        int num_ret = olua_push_enum(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::type(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_node_value(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_node *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xml_node");

        // const pugi::char_t *value()
        const pugi::char_t *ret = self->value();
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_node::value(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_pugixml_xml_node(lua_State *L)
{
    oluacls_class<pugi::xml_node>(L, "pugixml.xml_node");
    oluacls_func(L, "__eq", _olua_fun_pugi_xml_node___eq);
    oluacls_func(L, "__gc", _olua_fun_pugi_xml_node___gc);
    oluacls_func(L, "__le", _olua_fun_pugi_xml_node___le);
    oluacls_func(L, "__lt", _olua_fun_pugi_xml_node___lt);
    oluacls_func(L, "append_attribute", _olua_fun_pugi_xml_node_append_attribute);
    oluacls_func(L, "append_buffer", _olua_fun_pugi_xml_node_append_buffer);
    oluacls_func(L, "append_child", _olua_fun_pugi_xml_node_append_child);
    oluacls_func(L, "append_copy", _olua_fun_pugi_xml_node_append_copy);
    oluacls_func(L, "append_move", _olua_fun_pugi_xml_node_append_move);
    oluacls_func(L, "attribute", _olua_fun_pugi_xml_node_attribute);
    oluacls_func(L, "child", _olua_fun_pugi_xml_node_child);
    oluacls_func(L, "child_value", _olua_fun_pugi_xml_node_child_value);
    oluacls_func(L, "empty", _olua_fun_pugi_xml_node_empty);
    oluacls_func(L, "find_attribute", _olua_fun_pugi_xml_node_find_attribute);
    oluacls_func(L, "find_child", _olua_fun_pugi_xml_node_find_child);
    oluacls_func(L, "find_child_by_attribute", _olua_fun_pugi_xml_node_find_child_by_attribute);
    oluacls_func(L, "find_node", _olua_fun_pugi_xml_node_find_node);
    oluacls_func(L, "first_attribute", _olua_fun_pugi_xml_node_first_attribute);
    oluacls_func(L, "first_child", _olua_fun_pugi_xml_node_first_child);
    oluacls_func(L, "first_element_by_path", _olua_fun_pugi_xml_node_first_element_by_path);
    oluacls_func(L, "hash_value", _olua_fun_pugi_xml_node_hash_value);
    oluacls_func(L, "insert_attribute_after", _olua_fun_pugi_xml_node_insert_attribute_after);
    oluacls_func(L, "insert_attribute_before", _olua_fun_pugi_xml_node_insert_attribute_before);
    oluacls_func(L, "insert_child_after", _olua_fun_pugi_xml_node_insert_child_after);
    oluacls_func(L, "insert_child_before", _olua_fun_pugi_xml_node_insert_child_before);
    oluacls_func(L, "insert_copy_after", _olua_fun_pugi_xml_node_insert_copy_after);
    oluacls_func(L, "insert_copy_before", _olua_fun_pugi_xml_node_insert_copy_before);
    oluacls_func(L, "insert_move_after", _olua_fun_pugi_xml_node_insert_move_after);
    oluacls_func(L, "insert_move_before", _olua_fun_pugi_xml_node_insert_move_before);
    oluacls_func(L, "last_attribute", _olua_fun_pugi_xml_node_last_attribute);
    oluacls_func(L, "last_child", _olua_fun_pugi_xml_node_last_child);
    oluacls_func(L, "name", _olua_fun_pugi_xml_node_name);
    oluacls_func(L, "new", _olua_fun_pugi_xml_node_new);
    oluacls_func(L, "next_sibling", _olua_fun_pugi_xml_node_next_sibling);
    oluacls_func(L, "offset_debug", _olua_fun_pugi_xml_node_offset_debug);
    oluacls_func(L, "parent", _olua_fun_pugi_xml_node_parent);
    oluacls_func(L, "path", _olua_fun_pugi_xml_node_path);
    oluacls_func(L, "prepend_attribute", _olua_fun_pugi_xml_node_prepend_attribute);
    oluacls_func(L, "prepend_child", _olua_fun_pugi_xml_node_prepend_child);
    oluacls_func(L, "prepend_copy", _olua_fun_pugi_xml_node_prepend_copy);
    oluacls_func(L, "prepend_move", _olua_fun_pugi_xml_node_prepend_move);
    oluacls_func(L, "previous_sibling", _olua_fun_pugi_xml_node_previous_sibling);
    oluacls_func(L, "print", _olua_fun_pugi_xml_node_print);
    oluacls_func(L, "remove_attribute", _olua_fun_pugi_xml_node_remove_attribute);
    oluacls_func(L, "remove_attributes", _olua_fun_pugi_xml_node_remove_attributes);
    oluacls_func(L, "remove_child", _olua_fun_pugi_xml_node_remove_child);
    oluacls_func(L, "remove_children", _olua_fun_pugi_xml_node_remove_children);
    oluacls_func(L, "root", _olua_fun_pugi_xml_node_root);
    oluacls_func(L, "select_node", _olua_fun_pugi_xml_node_select_node);
    oluacls_func(L, "select_nodes", _olua_fun_pugi_xml_node_select_nodes);
    oluacls_func(L, "set_name", _olua_fun_pugi_xml_node_set_name);
    oluacls_func(L, "set_value", _olua_fun_pugi_xml_node_set_value);
    oluacls_func(L, "text", _olua_fun_pugi_xml_node_text);
    oluacls_func(L, "traverse", _olua_fun_pugi_xml_node_traverse);
    oluacls_func(L, "type", _olua_fun_pugi_xml_node_type);
    oluacls_func(L, "value", _olua_fun_pugi_xml_node_value);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_pugixml_xml_node(lua_State *L)
{
    olua_require(L, "pugixml",  _olua_module_pugixml);
    if (!olua_getclass(L, "pugixml.xml_node")) {
        luaL_error(L, "class not found: pugi::xml_node");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_pugi_xml_document_document_element(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_document *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xml_document");

        // pugi::xml_node document_element()
        pugi::xml_node ret = self->document_element();
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_node");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_document::document_element(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_document_load_buffer$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_document *self = nullptr;
        void *arg1 = nullptr;       /** contents */
        size_t arg2 = 0;       /** size */
        unsigned int arg3 = 0;       /** options */
        pugi::xml_encoding arg4 = (pugi::xml_encoding)0;       /** encoding */

        olua_to_object(L, 1, &self, "pugixml.xml_document");
        olua_check_object(L, 2, &arg1, "void *");
        olua_check_integer(L, 3, &arg2);
        olua_check_integer(L, 4, &arg3);
        olua_check_enum(L, 5, &arg4);

        // pugi::xml_parse_result load_buffer(const void *contents, size_t size, @optional unsigned int options, @optional pugi::xml_encoding encoding)
        pugi::xml_parse_result ret = self->load_buffer(arg1, arg2, arg3, arg4);
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_parse_result");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_document::load_buffer(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_document_load_buffer$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_document *self = nullptr;
        void *arg1 = nullptr;       /** contents */
        size_t arg2 = 0;       /** size */

        olua_to_object(L, 1, &self, "pugixml.xml_document");
        olua_check_object(L, 2, &arg1, "void *");
        olua_check_integer(L, 3, &arg2);

        // pugi::xml_parse_result load_buffer(const void *contents, size_t size)
        pugi::xml_parse_result ret = self->load_buffer(arg1, arg2);
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_parse_result");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_document::load_buffer(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_document_load_buffer$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_document *self = nullptr;
        void *arg1 = nullptr;       /** contents */
        size_t arg2 = 0;       /** size */
        unsigned int arg3 = 0;       /** options */

        olua_to_object(L, 1, &self, "pugixml.xml_document");
        olua_check_object(L, 2, &arg1, "void *");
        olua_check_integer(L, 3, &arg2);
        olua_check_integer(L, 4, &arg3);

        // pugi::xml_parse_result load_buffer(const void *contents, size_t size, @optional unsigned int options)
        pugi::xml_parse_result ret = self->load_buffer(arg1, arg2, arg3);
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_parse_result");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_document::load_buffer(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_document_load_buffer(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "pugixml.xml_document")) && (olua_is_object(L, 2, "void *")) && (olua_is_integer(L, 3))) {
            // pugi::xml_parse_result load_buffer(const void *contents, size_t size)
            return _olua_fun_pugi_xml_document_load_buffer$2(L);
        // }
    }

    if (num_args == 4) {
        // if ((olua_is_object(L, 1, "pugixml.xml_document")) && (olua_is_object(L, 2, "void *")) && (olua_is_integer(L, 3)) && (olua_is_integer(L, 4))) {
            // pugi::xml_parse_result load_buffer(const void *contents, size_t size, @optional unsigned int options)
            return _olua_fun_pugi_xml_document_load_buffer$3(L);
        // }
    }

    if (num_args == 5) {
        // if ((olua_is_object(L, 1, "pugixml.xml_document")) && (olua_is_object(L, 2, "void *")) && (olua_is_integer(L, 3)) && (olua_is_integer(L, 4)) && (olua_is_enum(L, 5))) {
            // pugi::xml_parse_result load_buffer(const void *contents, size_t size, @optional unsigned int options, @optional pugi::xml_encoding encoding)
            return _olua_fun_pugi_xml_document_load_buffer$1(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_document::load_buffer' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_document_load_buffer_inplace$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_document *self = nullptr;
        void *arg1 = nullptr;       /** contents */
        size_t arg2 = 0;       /** size */
        unsigned int arg3 = 0;       /** options */
        pugi::xml_encoding arg4 = (pugi::xml_encoding)0;       /** encoding */

        olua_to_object(L, 1, &self, "pugixml.xml_document");
        olua_check_object(L, 2, &arg1, "void *");
        olua_check_integer(L, 3, &arg2);
        olua_check_integer(L, 4, &arg3);
        olua_check_enum(L, 5, &arg4);

        // pugi::xml_parse_result load_buffer_inplace(void *contents, size_t size, @optional unsigned int options, @optional pugi::xml_encoding encoding)
        pugi::xml_parse_result ret = self->load_buffer_inplace(arg1, arg2, arg3, arg4);
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_parse_result");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_document::load_buffer_inplace(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_document_load_buffer_inplace$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_document *self = nullptr;
        void *arg1 = nullptr;       /** contents */
        size_t arg2 = 0;       /** size */

        olua_to_object(L, 1, &self, "pugixml.xml_document");
        olua_check_object(L, 2, &arg1, "void *");
        olua_check_integer(L, 3, &arg2);

        // pugi::xml_parse_result load_buffer_inplace(void *contents, size_t size)
        pugi::xml_parse_result ret = self->load_buffer_inplace(arg1, arg2);
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_parse_result");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_document::load_buffer_inplace(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_document_load_buffer_inplace$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_document *self = nullptr;
        void *arg1 = nullptr;       /** contents */
        size_t arg2 = 0;       /** size */
        unsigned int arg3 = 0;       /** options */

        olua_to_object(L, 1, &self, "pugixml.xml_document");
        olua_check_object(L, 2, &arg1, "void *");
        olua_check_integer(L, 3, &arg2);
        olua_check_integer(L, 4, &arg3);

        // pugi::xml_parse_result load_buffer_inplace(void *contents, size_t size, @optional unsigned int options)
        pugi::xml_parse_result ret = self->load_buffer_inplace(arg1, arg2, arg3);
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_parse_result");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_document::load_buffer_inplace(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_document_load_buffer_inplace(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "pugixml.xml_document")) && (olua_is_object(L, 2, "void *")) && (olua_is_integer(L, 3))) {
            // pugi::xml_parse_result load_buffer_inplace(void *contents, size_t size)
            return _olua_fun_pugi_xml_document_load_buffer_inplace$2(L);
        // }
    }

    if (num_args == 4) {
        // if ((olua_is_object(L, 1, "pugixml.xml_document")) && (olua_is_object(L, 2, "void *")) && (olua_is_integer(L, 3)) && (olua_is_integer(L, 4))) {
            // pugi::xml_parse_result load_buffer_inplace(void *contents, size_t size, @optional unsigned int options)
            return _olua_fun_pugi_xml_document_load_buffer_inplace$3(L);
        // }
    }

    if (num_args == 5) {
        // if ((olua_is_object(L, 1, "pugixml.xml_document")) && (olua_is_object(L, 2, "void *")) && (olua_is_integer(L, 3)) && (olua_is_integer(L, 4)) && (olua_is_enum(L, 5))) {
            // pugi::xml_parse_result load_buffer_inplace(void *contents, size_t size, @optional unsigned int options, @optional pugi::xml_encoding encoding)
            return _olua_fun_pugi_xml_document_load_buffer_inplace$1(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_document::load_buffer_inplace' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_document_load_buffer_inplace_own$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_document *self = nullptr;
        void *arg1 = nullptr;       /** contents */
        size_t arg2 = 0;       /** size */
        unsigned int arg3 = 0;       /** options */
        pugi::xml_encoding arg4 = (pugi::xml_encoding)0;       /** encoding */

        olua_to_object(L, 1, &self, "pugixml.xml_document");
        olua_check_object(L, 2, &arg1, "void *");
        olua_check_integer(L, 3, &arg2);
        olua_check_integer(L, 4, &arg3);
        olua_check_enum(L, 5, &arg4);

        // pugi::xml_parse_result load_buffer_inplace_own(void *contents, size_t size, @optional unsigned int options, @optional pugi::xml_encoding encoding)
        pugi::xml_parse_result ret = self->load_buffer_inplace_own(arg1, arg2, arg3, arg4);
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_parse_result");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_document::load_buffer_inplace_own(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_document_load_buffer_inplace_own$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_document *self = nullptr;
        void *arg1 = nullptr;       /** contents */
        size_t arg2 = 0;       /** size */

        olua_to_object(L, 1, &self, "pugixml.xml_document");
        olua_check_object(L, 2, &arg1, "void *");
        olua_check_integer(L, 3, &arg2);

        // pugi::xml_parse_result load_buffer_inplace_own(void *contents, size_t size)
        pugi::xml_parse_result ret = self->load_buffer_inplace_own(arg1, arg2);
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_parse_result");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_document::load_buffer_inplace_own(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_document_load_buffer_inplace_own$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_document *self = nullptr;
        void *arg1 = nullptr;       /** contents */
        size_t arg2 = 0;       /** size */
        unsigned int arg3 = 0;       /** options */

        olua_to_object(L, 1, &self, "pugixml.xml_document");
        olua_check_object(L, 2, &arg1, "void *");
        olua_check_integer(L, 3, &arg2);
        olua_check_integer(L, 4, &arg3);

        // pugi::xml_parse_result load_buffer_inplace_own(void *contents, size_t size, @optional unsigned int options)
        pugi::xml_parse_result ret = self->load_buffer_inplace_own(arg1, arg2, arg3);
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_parse_result");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_document::load_buffer_inplace_own(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_document_load_buffer_inplace_own(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "pugixml.xml_document")) && (olua_is_object(L, 2, "void *")) && (olua_is_integer(L, 3))) {
            // pugi::xml_parse_result load_buffer_inplace_own(void *contents, size_t size)
            return _olua_fun_pugi_xml_document_load_buffer_inplace_own$2(L);
        // }
    }

    if (num_args == 4) {
        // if ((olua_is_object(L, 1, "pugixml.xml_document")) && (olua_is_object(L, 2, "void *")) && (olua_is_integer(L, 3)) && (olua_is_integer(L, 4))) {
            // pugi::xml_parse_result load_buffer_inplace_own(void *contents, size_t size, @optional unsigned int options)
            return _olua_fun_pugi_xml_document_load_buffer_inplace_own$3(L);
        // }
    }

    if (num_args == 5) {
        // if ((olua_is_object(L, 1, "pugixml.xml_document")) && (olua_is_object(L, 2, "void *")) && (olua_is_integer(L, 3)) && (olua_is_integer(L, 4)) && (olua_is_enum(L, 5))) {
            // pugi::xml_parse_result load_buffer_inplace_own(void *contents, size_t size, @optional unsigned int options, @optional pugi::xml_encoding encoding)
            return _olua_fun_pugi_xml_document_load_buffer_inplace_own$1(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_document::load_buffer_inplace_own' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_document_load_file$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_document *self = nullptr;
        const char *arg1 = nullptr;       /** path */
        unsigned int arg2 = 0;       /** options */
        pugi::xml_encoding arg3 = (pugi::xml_encoding)0;       /** encoding */

        olua_to_object(L, 1, &self, "pugixml.xml_document");
        olua_check_string(L, 2, &arg1);
        olua_check_integer(L, 3, &arg2);
        olua_check_enum(L, 4, &arg3);

        // pugi::xml_parse_result load_file(const char *path, @optional unsigned int options, @optional pugi::xml_encoding encoding)
        pugi::xml_parse_result ret = self->load_file(arg1, arg2, arg3);
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_parse_result");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_document::load_file(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_document_load_file$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_document *self = nullptr;
        const char *arg1 = nullptr;       /** path */

        olua_to_object(L, 1, &self, "pugixml.xml_document");
        olua_check_string(L, 2, &arg1);

        // pugi::xml_parse_result load_file(const char *path)
        pugi::xml_parse_result ret = self->load_file(arg1);
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_parse_result");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_document::load_file(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_document_load_file$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_document *self = nullptr;
        const char *arg1 = nullptr;       /** path */
        unsigned int arg2 = 0;       /** options */

        olua_to_object(L, 1, &self, "pugixml.xml_document");
        olua_check_string(L, 2, &arg1);
        olua_check_integer(L, 3, &arg2);

        // pugi::xml_parse_result load_file(const char *path, @optional unsigned int options)
        pugi::xml_parse_result ret = self->load_file(arg1, arg2);
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_parse_result");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_document::load_file(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_document_load_file(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "pugixml.xml_document")) && (olua_is_string(L, 2))) {
            // pugi::xml_parse_result load_file(const char *path)
            return _olua_fun_pugi_xml_document_load_file$2(L);
        // }
    }

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "pugixml.xml_document")) && (olua_is_string(L, 2)) && (olua_is_integer(L, 3))) {
            // pugi::xml_parse_result load_file(const char *path, @optional unsigned int options)
            return _olua_fun_pugi_xml_document_load_file$3(L);
        // }
    }

    if (num_args == 4) {
        // if ((olua_is_object(L, 1, "pugixml.xml_document")) && (olua_is_string(L, 2)) && (olua_is_integer(L, 3)) && (olua_is_enum(L, 4))) {
            // pugi::xml_parse_result load_file(const char *path, @optional unsigned int options, @optional pugi::xml_encoding encoding)
            return _olua_fun_pugi_xml_document_load_file$1(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_document::load_file' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_document_load_string$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_document *self = nullptr;
        const pugi::char_t *arg1 = nullptr;       /** contents */
        unsigned int arg2 = 0;       /** options */

        olua_to_object(L, 1, &self, "pugixml.xml_document");
        olua_check_string(L, 2, &arg1);
        olua_check_integer(L, 3, &arg2);

        // pugi::xml_parse_result load_string(const pugi::char_t *contents, @optional unsigned int options)
        pugi::xml_parse_result ret = self->load_string(arg1, arg2);
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_parse_result");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_document::load_string(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_document_load_string$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_document *self = nullptr;
        const pugi::char_t *arg1 = nullptr;       /** contents */

        olua_to_object(L, 1, &self, "pugixml.xml_document");
        olua_check_string(L, 2, &arg1);

        // pugi::xml_parse_result load_string(const pugi::char_t *contents)
        pugi::xml_parse_result ret = self->load_string(arg1);
        int num_ret = olua_copy_object(L, ret, "pugixml.xml_parse_result");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_document::load_string(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_document_load_string(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "pugixml.xml_document")) && (olua_is_string(L, 2))) {
            // pugi::xml_parse_result load_string(const pugi::char_t *contents)
            return _olua_fun_pugi_xml_document_load_string$2(L);
        // }
    }

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "pugixml.xml_document")) && (olua_is_string(L, 2)) && (olua_is_integer(L, 3))) {
            // pugi::xml_parse_result load_string(const pugi::char_t *contents, @optional unsigned int options)
            return _olua_fun_pugi_xml_document_load_string$1(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_document::load_string' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_document_new(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // pugi::xml_document()
        pugi::xml_document *ret = new pugi::xml_document();
        int num_ret = olua_push_object(L, ret, "pugixml.xml_document");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_document::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_document_reset$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_document *self = nullptr;

        olua_to_object(L, 1, &self, "pugixml.xml_document");

        // void reset()
        self->reset();

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_document::reset(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_document_reset$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_document *self = nullptr;
        pugi::xml_document *arg1;       /** proto */

        olua_to_object(L, 1, &self, "pugixml.xml_document");
        olua_check_object(L, 2, &arg1, "pugixml.xml_document");

        // void reset(const pugi::xml_document &proto)
        self->reset(*arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_document::reset(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_document_reset(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // void reset()
        return _olua_fun_pugi_xml_document_reset$1(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "pugixml.xml_document")) && (olua_is_object(L, 2, "pugixml.xml_document"))) {
            // void reset(const pugi::xml_document &proto)
            return _olua_fun_pugi_xml_document_reset$2(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_document::reset' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_document_save$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_document *self = nullptr;
        pugi::xml_writer *arg1 = nullptr;       /** writer */
        const pugi::char_t *arg2 = nullptr;       /** indent */
        unsigned int arg3 = 0;       /** flags */
        pugi::xml_encoding arg4 = (pugi::xml_encoding)0;       /** encoding */

        olua_to_object(L, 1, &self, "pugixml.xml_document");
        olua_check_object(L, 2, &arg1, "pugixml.xml_writer");
        olua_check_string(L, 3, &arg2);
        olua_check_integer(L, 4, &arg3);
        olua_check_enum(L, 5, &arg4);

        // void save(pugi::xml_writer &writer, @optional const pugi::char_t *indent, @optional unsigned int flags, @optional pugi::xml_encoding encoding)
        self->save(*arg1, arg2, arg3, arg4);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_document::save(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_document_save$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_document *self = nullptr;
        pugi::xml_writer *arg1 = nullptr;       /** writer */

        olua_to_object(L, 1, &self, "pugixml.xml_document");
        olua_check_object(L, 2, &arg1, "pugixml.xml_writer");

        // void save(pugi::xml_writer &writer)
        self->save(*arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_document::save(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_document_save$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_document *self = nullptr;
        pugi::xml_writer *arg1 = nullptr;       /** writer */
        const pugi::char_t *arg2 = nullptr;       /** indent */

        olua_to_object(L, 1, &self, "pugixml.xml_document");
        olua_check_object(L, 2, &arg1, "pugixml.xml_writer");
        olua_check_string(L, 3, &arg2);

        // void save(pugi::xml_writer &writer, @optional const pugi::char_t *indent)
        self->save(*arg1, arg2);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_document::save(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_document_save$4(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_document *self = nullptr;
        pugi::xml_writer *arg1 = nullptr;       /** writer */
        const pugi::char_t *arg2 = nullptr;       /** indent */
        unsigned int arg3 = 0;       /** flags */

        olua_to_object(L, 1, &self, "pugixml.xml_document");
        olua_check_object(L, 2, &arg1, "pugixml.xml_writer");
        olua_check_string(L, 3, &arg2);
        olua_check_integer(L, 4, &arg3);

        // void save(pugi::xml_writer &writer, @optional const pugi::char_t *indent, @optional unsigned int flags)
        self->save(*arg1, arg2, arg3);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_document::save(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_document_save(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "pugixml.xml_document")) && (olua_is_object(L, 2, "pugixml.xml_writer"))) {
            // void save(pugi::xml_writer &writer)
            return _olua_fun_pugi_xml_document_save$2(L);
        // }
    }

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "pugixml.xml_document")) && (olua_is_object(L, 2, "pugixml.xml_writer")) && (olua_is_string(L, 3))) {
            // void save(pugi::xml_writer &writer, @optional const pugi::char_t *indent)
            return _olua_fun_pugi_xml_document_save$3(L);
        // }
    }

    if (num_args == 4) {
        // if ((olua_is_object(L, 1, "pugixml.xml_document")) && (olua_is_object(L, 2, "pugixml.xml_writer")) && (olua_is_string(L, 3)) && (olua_is_integer(L, 4))) {
            // void save(pugi::xml_writer &writer, @optional const pugi::char_t *indent, @optional unsigned int flags)
            return _olua_fun_pugi_xml_document_save$4(L);
        // }
    }

    if (num_args == 5) {
        // if ((olua_is_object(L, 1, "pugixml.xml_document")) && (olua_is_object(L, 2, "pugixml.xml_writer")) && (olua_is_string(L, 3)) && (olua_is_integer(L, 4)) && (olua_is_enum(L, 5))) {
            // void save(pugi::xml_writer &writer, @optional const pugi::char_t *indent, @optional unsigned int flags, @optional pugi::xml_encoding encoding)
            return _olua_fun_pugi_xml_document_save$1(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_document::save' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_pugi_xml_document_save_file$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_document *self = nullptr;
        const char *arg1 = nullptr;       /** path */
        const pugi::char_t *arg2 = nullptr;       /** indent */
        unsigned int arg3 = 0;       /** flags */
        pugi::xml_encoding arg4 = (pugi::xml_encoding)0;       /** encoding */

        olua_to_object(L, 1, &self, "pugixml.xml_document");
        olua_check_string(L, 2, &arg1);
        olua_check_string(L, 3, &arg2);
        olua_check_integer(L, 4, &arg3);
        olua_check_enum(L, 5, &arg4);

        // bool save_file(const char *path, @optional const pugi::char_t *indent, @optional unsigned int flags, @optional pugi::xml_encoding encoding)
        bool ret = self->save_file(arg1, arg2, arg3, arg4);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_document::save_file(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_document_save_file$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_document *self = nullptr;
        const char *arg1 = nullptr;       /** path */

        olua_to_object(L, 1, &self, "pugixml.xml_document");
        olua_check_string(L, 2, &arg1);

        // bool save_file(const char *path)
        bool ret = self->save_file(arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_document::save_file(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_document_save_file$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_document *self = nullptr;
        const char *arg1 = nullptr;       /** path */
        const pugi::char_t *arg2 = nullptr;       /** indent */

        olua_to_object(L, 1, &self, "pugixml.xml_document");
        olua_check_string(L, 2, &arg1);
        olua_check_string(L, 3, &arg2);

        // bool save_file(const char *path, @optional const pugi::char_t *indent)
        bool ret = self->save_file(arg1, arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_document::save_file(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_document_save_file$4(lua_State *L)
{
    try {
        olua_startinvoke(L);

        pugi::xml_document *self = nullptr;
        const char *arg1 = nullptr;       /** path */
        const pugi::char_t *arg2 = nullptr;       /** indent */
        unsigned int arg3 = 0;       /** flags */

        olua_to_object(L, 1, &self, "pugixml.xml_document");
        olua_check_string(L, 2, &arg1);
        olua_check_string(L, 3, &arg2);
        olua_check_integer(L, 4, &arg3);

        // bool save_file(const char *path, @optional const pugi::char_t *indent, @optional unsigned int flags)
        bool ret = self->save_file(arg1, arg2, arg3);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "pugi::xml_document::save_file(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_pugi_xml_document_save_file(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "pugixml.xml_document")) && (olua_is_string(L, 2))) {
            // bool save_file(const char *path)
            return _olua_fun_pugi_xml_document_save_file$2(L);
        // }
    }

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "pugixml.xml_document")) && (olua_is_string(L, 2)) && (olua_is_string(L, 3))) {
            // bool save_file(const char *path, @optional const pugi::char_t *indent)
            return _olua_fun_pugi_xml_document_save_file$3(L);
        // }
    }

    if (num_args == 4) {
        // if ((olua_is_object(L, 1, "pugixml.xml_document")) && (olua_is_string(L, 2)) && (olua_is_string(L, 3)) && (olua_is_integer(L, 4))) {
            // bool save_file(const char *path, @optional const pugi::char_t *indent, @optional unsigned int flags)
            return _olua_fun_pugi_xml_document_save_file$4(L);
        // }
    }

    if (num_args == 5) {
        // if ((olua_is_object(L, 1, "pugixml.xml_document")) && (olua_is_string(L, 2)) && (olua_is_string(L, 3)) && (olua_is_integer(L, 4)) && (olua_is_enum(L, 5))) {
            // bool save_file(const char *path, @optional const pugi::char_t *indent, @optional unsigned int flags, @optional pugi::xml_encoding encoding)
            return _olua_fun_pugi_xml_document_save_file$1(L);
        // }
    }

    luaL_error(L, "method 'pugi::xml_document::save_file' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_cls_pugixml_xml_document(lua_State *L)
{
    oluacls_class<pugi::xml_document, pugi::xml_node>(L, "pugixml.xml_document");
    oluacls_func(L, "document_element", _olua_fun_pugi_xml_document_document_element);
    oluacls_func(L, "load_buffer", _olua_fun_pugi_xml_document_load_buffer);
    oluacls_func(L, "load_buffer_inplace", _olua_fun_pugi_xml_document_load_buffer_inplace);
    oluacls_func(L, "load_buffer_inplace_own", _olua_fun_pugi_xml_document_load_buffer_inplace_own);
    oluacls_func(L, "load_file", _olua_fun_pugi_xml_document_load_file);
    oluacls_func(L, "load_string", _olua_fun_pugi_xml_document_load_string);
    oluacls_func(L, "new", _olua_fun_pugi_xml_document_new);
    oluacls_func(L, "reset", _olua_fun_pugi_xml_document_reset);
    oluacls_func(L, "save", _olua_fun_pugi_xml_document_save);
    oluacls_func(L, "save_file", _olua_fun_pugi_xml_document_save_file);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_pugixml_xml_document(lua_State *L)
{
    olua_require(L, "pugixml",  _olua_module_pugixml);
    if (!olua_getclass(L, "pugixml.xml_document")) {
        luaL_error(L, "class not found: pugi::xml_document");
    }
    return 1;
}
OLUA_END_DECLS

int _olua_module_pugixml(lua_State *L)
{
    olua_require(L, "pugixml.xpath_value_type", _olua_cls_pugixml_xpath_value_type);
    olua_require(L, "pugixml.xpath_node_set.type_t", _olua_cls_pugixml_xpath_node_set_type_t);
    olua_require(L, "pugixml.xpath_query", _olua_cls_pugixml_xpath_query);
    olua_require(L, "pugixml.xpath_node", _olua_cls_pugixml_xpath_node);
    olua_require(L, "pugixml.xpath_parse_result", _olua_cls_pugixml_xpath_parse_result);
    olua_require(L, "pugixml.xpath_node_set", _olua_cls_pugixml_xpath_node_set);
    olua_require(L, "pugixml.xpath_variable_set", _olua_cls_pugixml_xpath_variable_set);
    olua_require(L, "pugixml.xpath_variable", _olua_cls_pugixml_xpath_variable);
    olua_require(L, "pugixml.xml_node_type", _olua_cls_pugixml_xml_node_type);
    olua_require(L, "pugixml.xml_encoding", _olua_cls_pugixml_xml_encoding);
    olua_require(L, "pugixml.xml_parse_status", _olua_cls_pugixml_xml_parse_status);
    olua_require(L, "pugixml.xml_parse_result", _olua_cls_pugixml_xml_parse_result);
    olua_require(L, "pugixml.xml_attribute", _olua_cls_pugixml_xml_attribute);
    olua_require(L, "pugixml.xml_tree_walker", _olua_cls_pugixml_xml_tree_walker);
    olua_require(L, "pugixml.lua_xml_tree_walker", _olua_cls_pugixml_lua_xml_tree_walker);
    olua_require(L, "pugixml.xml_writer", _olua_cls_pugixml_xml_writer);
    olua_require(L, "pugixml.xml_writer_file", _olua_cls_pugixml_xml_writer_file);
    olua_require(L, "pugixml.lua_xml_writer", _olua_cls_pugixml_lua_xml_writer);
    olua_require(L, "pugixml.xml_text", _olua_cls_pugixml_xml_text);
    olua_require(L, "pugixml.xml_node", _olua_cls_pugixml_xml_node);
    olua_require(L, "pugixml.xml_document", _olua_cls_pugixml_xml_document);

    return 0;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_pugixml(lua_State *L)
{
    olua_require(L, "pugixml",  _olua_module_pugixml);

    if (olua_getclass(L, "pugixml.xml_document")) {
        return 1;
    }

    return 0;
}
OLUA_END_DECLS
