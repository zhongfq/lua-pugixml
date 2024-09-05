package.cpath = "./build/?.so;" .. package.cpath

local xml_document = require "pugixml.xml_document"
local lua_xml_tree_walker = require "pugixml.lua_xml_tree_walker"
local lua_xml_writer = require "pugixml.lua_xml_writer"

local xml = xml_document.new()
xml:load_file("test.xml")

print(xml:child("styleSheet"):find_child(function (arg1)
    print("#####", arg1:name())
    return false
end))

local walker = lua_xml_tree_walker.new()

walker.on_begin = function (arg1)
    print("traversal begin:", arg1:name())
    return true
end

walker.on_for_each = function (arg1)
    print("traversal for_each:", arg1:name())
    return true
end

walker.on_end = function (arg1)
    print("traversal end:", arg1:name())
    return true
end

xml:traverse(walker)

local writer = lua_xml_writer.new()
writer.on_write = function (arg1)
    print("writer", arg1)
end

xml:save(writer, "  ")