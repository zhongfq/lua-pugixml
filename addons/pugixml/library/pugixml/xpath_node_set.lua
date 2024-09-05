---AUTO GENERATED, DO NOT MODIFY!
---@meta pugixml.xpath_node_set

---A fixed-size collection of XPath nodes
---@class pugixml.xpath_node_set 
local xpath_node_set = {}

---@return any
function xpath_node_set:__gc() end

---@return any
function xpath_node_set:__olua_move() end

---Check if collection is empty
---@return boolean
function xpath_node_set:empty() end

---Get first node in the collection by document order
---@return pugixml.xpath_node
function xpath_node_set:first() end

---Default constructor. Constructs empty set.
---@return pugixml.xpath_node_set
function xpath_node_set.new() end

---Get collection size
---@return integer
function xpath_node_set:size() end

---Sort the collection in ascending/descending order by document order
---@param reverse boolean
---@overload fun(self: pugixml.xpath_node_set)
function xpath_node_set:sort(reverse) end

---Get collection type
---@return pugixml.xpath_node_set.type_t
function xpath_node_set:type() end

return xpath_node_set