---AUTO GENERATED, DO NOT MODIFY!
---@meta pugixml.xpath_node

---XPath node class (either xml_node or xml_attribute)
---@class pugixml.xpath_node 
local xpath_node = {}

---@return any
function xpath_node:__gc() end

---@return pugixml.xml_attribute
function xpath_node:attribute() end

---Default constructor; constructs empty XPath node
---@return pugixml.xpath_node
---
---Construct XPath node from XML node/attribute
---@overload fun(node: pugixml.xml_node): pugixml.xpath_node
---@overload fun(attribute: pugixml.xml_attribute, parent: pugixml.xml_node): pugixml.xpath_node
function xpath_node.new() end

---Get node/attribute, if any
---@return pugixml.xml_node
function xpath_node:node() end

---Get parent of contained node/attribute
---@return pugixml.xml_node
function xpath_node:parent() end

return xpath_node