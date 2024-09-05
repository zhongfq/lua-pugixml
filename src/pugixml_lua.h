#ifndef __PUGIXML_ADAPTER_H__
#define __PUGIXML_ADAPTER_H__

#include "pugixml.hpp"

#include <functional>

namespace pugi
{
    class lua_xml_tree_walker : public pugi::xml_tree_walker {
    public:
        lua_xml_tree_walker() {}
        ~lua_xml_tree_walker() {}

        virtual bool begin(xml_node& node) override
        {
            if (on_begin != nullptr) {
                return on_begin(node);
            } else {
                return false;
            }
        }

		virtual bool for_each(xml_node& node) override
        {
            if (on_for_each != nullptr) {
                return on_for_each(node);
            } else {
                return false;
            }
        }

		virtual bool end(xml_node& node) override
        {
            if (on_end != nullptr) {
                return on_end(node);
            } else {
                return false;
            }
        }

    public:
        std::function<bool (xml_node &)> on_begin;
        std::function<bool (xml_node &)> on_for_each;
        std::function<bool (xml_node &)> on_end;
    };

    class lua_xml_writer : public pugi::xml_writer {
    public:
        lua_xml_writer() {}
        ~lua_xml_writer() {}

        virtual void write(const void* data, size_t size) override
        {
            if (on_write != nullptr) {
                on_write(std::string(static_cast<const char*>(data), size));
            }
        }

    public:
        std::function<void (const std::string &)> on_write;
    };
}

#endif