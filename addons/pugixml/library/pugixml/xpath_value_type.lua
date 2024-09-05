---AUTO GENERATED, DO NOT MODIFY!
---@meta pugixml.xpath_value_type

---@type pugixml.xpath_value_type
local VALUE

---
---@enum pugixml.xpath_value_type
---@operator call(integer): pugixml.xpath_value_type
local xpath_value_type = {
    ---Boolean
    xpath_type_boolean = 4,
    ---Node set (xpath_node_set)
    xpath_type_node_set = 1,
    ---Unknown type (query failed to compile)
    xpath_type_none = 0,
    ---Number
    xpath_type_number = 2,
    ---String
    xpath_type_string = 3,
}

---@param v integer
---@return pugixml.xpath_value_type
function xpath_value_type:__call(v) end

return xpath_value_type