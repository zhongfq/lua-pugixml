---AUTO GENERATED, DO NOT MODIFY!
---@meta pugixml.xml_tree_walker

---Abstract tree walker class (see xml_node::traverse)
---@class pugixml.xml_tree_walker 
local xml_tree_walker = {}

---@return any
function xml_tree_walker:__gc() end

---Callback that is called when traversal begins
---@param node pugixml.xml_node
---@return boolean
function xml_tree_walker:begin(node) end

---Callback that is called when traversal ends
---@param node pugixml.xml_node
---@return boolean
function xml_tree_walker:end_(node) end

---Callback that is called for each node traversed
---@param node pugixml.xml_node
---@return boolean
function xml_tree_walker:for_each(node) end

return xml_tree_walker