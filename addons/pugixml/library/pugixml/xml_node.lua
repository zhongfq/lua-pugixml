---AUTO GENERATED, DO NOT MODIFY!
---@meta pugixml.xml_node

---A light-weight handle for manipulating nodes in DOM tree
---@class pugixml.xml_node 
local xml_node = {}

---@return any
function xml_node:__gc() end

---Add attribute with specified name. Returns added attribute, or empty attribute on errors.
---@param name string
---@return pugixml.xml_attribute
function xml_node:append_attribute(name) end

---Parses buffer as an XML document fragment and appends all nodes as children of the current node.
---Copies/converts the buffer, so it may be deleted or changed after the function returns.
---Note: append_buffer allocates memory that has the lifetime of the owning document; removing the appended nodes does not immediately reclaim that memory.
---@param contents any
---@param size integer
---@param options integer
---@param encoding pugixml.xml_encoding
---@return pugixml.xml_parse_result
---@overload fun(self: pugixml.xml_node, contents: any, size: integer): pugixml.xml_parse_result
---@overload fun(self: pugixml.xml_node, contents: any, size: integer, options: integer): pugixml.xml_parse_result
function xml_node:append_buffer(contents, size, options, encoding) end

---Add child node with specified type. Returns added node, or empty node on errors.
---@param type pugixml.xml_node_type
---@return pugixml.xml_node
---@overload fun(self: pugixml.xml_node): pugixml.xml_node
---
---Add child element with specified name. Returns added node, or empty node on errors.
---@overload fun(self: pugixml.xml_node, name: string): pugixml.xml_node
function xml_node:append_child(type) end

---Add a copy of the specified attribute. Returns added attribute, or empty attribute on errors.
---@param proto pugixml.xml_attribute
---@return pugixml.xml_attribute
---
---Add a copy of the specified node as a child. Returns added node, or empty node on errors.
---@overload fun(self: pugixml.xml_node, proto: pugixml.xml_node): pugixml.xml_node
function xml_node:append_copy(proto) end

---Move the specified node to become a child of this node. Returns moved node, or empty node on errors.
---@param moved pugixml.xml_node
---@return pugixml.xml_node
function xml_node:append_move(moved) end

---@param name string
---@return pugixml.xml_attribute
---
---Get attribute, starting the search from a hint (and updating hint so that searching for a sequence of attributes is fast)
---@overload fun(self: pugixml.xml_node, name: string, hint: pugixml.xml_attribute): pugixml.xml_attribute
function xml_node:attribute(name) end

---Get child, attribute or next/previous sibling with the specified name
---@param name string
---@return pugixml.xml_node
function xml_node:child(name) end

---Get child value of current node; that is, value of the first child node of type PCDATA/CDATA
---@return string
---
---Get child value of child with specified name. Equivalent to child(name).child_value().
---@overload fun(self: pugixml.xml_node, name: string): string
function xml_node:child_value() end

---Check if node is empty (null)
---@return boolean
function xml_node:empty() end

---Find attribute using predicate. Returns first attribute for which predicate returned true.
---@param pred fun(arg1: pugixml.xml_attribute): boolean
---@return pugixml.xml_attribute
function xml_node:find_attribute(pred) end

---Find child node using predicate. Returns first child for which predicate returned true.
---@param pred fun(arg1: pugixml.xml_node): boolean
---@return pugixml.xml_node
function xml_node:find_child(pred) end

---Find child node by attribute name/value
---@param name string
---@param attr_name string
---@param attr_value string
---@return pugixml.xml_node
---@overload fun(self: pugixml.xml_node, attr_name: string, attr_value: string): pugixml.xml_node
function xml_node:find_child_by_attribute(name, attr_name, attr_value) end

---Find node from subtree using predicate. Returns first node from subtree (depth-first), for which predicate returned true.
---@param pred fun(arg1: pugixml.xml_node): boolean
---@return pugixml.xml_node
function xml_node:find_node(pred) end

---Get attribute list
---@return pugixml.xml_attribute
function xml_node:first_attribute() end

---Get children list
---@return pugixml.xml_node
function xml_node:first_child() end

---Search for a node by path consisting of node names and . or .. elements.
---@param path string
---@param delimiter integer
---@return pugixml.xml_node
---@overload fun(self: pugixml.xml_node, path: string): pugixml.xml_node
function xml_node:first_element_by_path(path, delimiter) end

---Get hash value (unique for handles to the same object)
---@return integer
function xml_node:hash_value() end

---@param name string
---@param attr pugixml.xml_attribute
---@return pugixml.xml_attribute
function xml_node:insert_attribute_after(name, attr) end

---@param name string
---@param attr pugixml.xml_attribute
---@return pugixml.xml_attribute
function xml_node:insert_attribute_before(name, attr) end

---@param type pugixml.xml_node_type
---@param node pugixml.xml_node
---@return pugixml.xml_node
---@overload fun(self: pugixml.xml_node, name: string, node: pugixml.xml_node): pugixml.xml_node
function xml_node:insert_child_after(type, node) end

---@param type pugixml.xml_node_type
---@param node pugixml.xml_node
---@return pugixml.xml_node
---@overload fun(self: pugixml.xml_node, name: string, node: pugixml.xml_node): pugixml.xml_node
function xml_node:insert_child_before(type, node) end

---@param proto pugixml.xml_attribute
---@param attr pugixml.xml_attribute
---@return pugixml.xml_attribute
---@overload fun(self: pugixml.xml_node, proto: pugixml.xml_node, node: pugixml.xml_node): pugixml.xml_node
function xml_node:insert_copy_after(proto, attr) end

---@param proto pugixml.xml_attribute
---@param attr pugixml.xml_attribute
---@return pugixml.xml_attribute
---@overload fun(self: pugixml.xml_node, proto: pugixml.xml_node, node: pugixml.xml_node): pugixml.xml_node
function xml_node:insert_copy_before(proto, attr) end

---@param moved pugixml.xml_node
---@param node pugixml.xml_node
---@return pugixml.xml_node
function xml_node:insert_move_after(moved, node) end

---@param moved pugixml.xml_node
---@param node pugixml.xml_node
---@return pugixml.xml_node
function xml_node:insert_move_before(moved, node) end

---@return pugixml.xml_attribute
function xml_node:last_attribute() end

---@return pugixml.xml_node
function xml_node:last_child() end

---Get node name, or "" if node is empty or it has no name
---@return string
function xml_node:name() end

---Default constructor. Constructs an empty node.
---@return pugixml.xml_node
function xml_node.new() end

---Get next/previous sibling in the children list of the parent node
---@return pugixml.xml_node
---@overload fun(self: pugixml.xml_node, name: string): pugixml.xml_node
function xml_node:next_sibling() end

---Get node offset in parsed file/string (in char_t units) for debugging purposes
---@return integer
function xml_node:offset_debug() end

---Get parent node
---@return pugixml.xml_node
function xml_node:parent() end

---Get the absolute node path from root as a text string.
---@param delimiter integer
---@return string
---@overload fun(self: pugixml.xml_node): string
function xml_node:path(delimiter) end

---@param name string
---@return pugixml.xml_attribute
function xml_node:prepend_attribute(name) end

---@param type pugixml.xml_node_type
---@return pugixml.xml_node
---@overload fun(self: pugixml.xml_node): pugixml.xml_node
---@overload fun(self: pugixml.xml_node, name: string): pugixml.xml_node
function xml_node:prepend_child(type) end

---@param proto pugixml.xml_attribute
---@return pugixml.xml_attribute
---@overload fun(self: pugixml.xml_node, proto: pugixml.xml_node): pugixml.xml_node
function xml_node:prepend_copy(proto) end

---@param moved pugixml.xml_node
---@return pugixml.xml_node
function xml_node:prepend_move(moved) end

---@return pugixml.xml_node
---@overload fun(self: pugixml.xml_node, name: string): pugixml.xml_node
function xml_node:previous_sibling() end

---Print subtree using a writer object
---@param writer pugixml.xml_writer
---@param indent string
---@param flags integer
---@param encoding pugixml.xml_encoding
---@param depth integer
---@overload fun(self: pugixml.xml_node, writer: pugixml.xml_writer)
---@overload fun(self: pugixml.xml_node, writer: pugixml.xml_writer, indent: string)
---@overload fun(self: pugixml.xml_node, writer: pugixml.xml_writer, indent: string, flags: integer)
---@overload fun(self: pugixml.xml_node, writer: pugixml.xml_writer, indent: string, flags: integer, encoding: pugixml.xml_encoding)
function xml_node:print(writer, indent, flags, encoding, depth) end

---Remove specified attribute
---@param a pugixml.xml_attribute
---@return boolean
---@overload fun(self: pugixml.xml_node, name: string): boolean
function xml_node:remove_attribute(a) end

---Remove all attributes
---@return boolean
function xml_node:remove_attributes() end

---Remove specified child
---@param n pugixml.xml_node
---@return boolean
---@overload fun(self: pugixml.xml_node, name: string): boolean
function xml_node:remove_child(n) end

---Remove all children
---@return boolean
function xml_node:remove_children() end

---Get root of DOM tree this node belongs to
---@return pugixml.xml_node
function xml_node:root() end

---Select single node by evaluating XPath query. Returns first node from the resulting node set.
---@param query string
---@param variables pugixml.xpath_variable_set
---@return pugixml.xpath_node
---@overload fun(self: pugixml.xml_node, query: string): pugixml.xpath_node
---@overload fun(self: pugixml.xml_node, query: pugixml.xpath_query): pugixml.xpath_node
function xml_node:select_node(query, variables) end

---Select node set by evaluating XPath query
---@param query string
---@param variables pugixml.xpath_variable_set
---@return pugixml.xpath_node_set
---@overload fun(self: pugixml.xml_node, query: string): pugixml.xpath_node_set
---@overload fun(self: pugixml.xml_node, query: pugixml.xpath_query): pugixml.xpath_node_set
function xml_node:select_nodes(query, variables) end

---Set node name/value (returns false if node is empty, there is not enough memory, or node can not have name/value)
---@param rhs string
---@return boolean
---@overload fun(self: pugixml.xml_node, rhs: string, size: integer): boolean
function xml_node:set_name(rhs) end

---@param rhs string
---@return boolean
---@overload fun(self: pugixml.xml_node, rhs: string, size: integer): boolean
function xml_node:set_value(rhs) end

---Get text object for the current node
---@return pugixml.xml_text
function xml_node:text() end

---Recursively traverse subtree with xml_tree_walker
---@param walker pugixml.xml_tree_walker
---@return boolean
function xml_node:traverse(walker) end

---Get node type
---@return pugixml.xml_node_type
function xml_node:type() end

---Get node value, or "" if node is empty or it has no value
---Note: For <node>text</node> node.value() does not return "text"! Use child_value() or text() methods to access text inside nodes.
---@return string
function xml_node:value() end

return xml_node