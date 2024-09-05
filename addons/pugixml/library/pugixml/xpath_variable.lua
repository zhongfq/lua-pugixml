---AUTO GENERATED, DO NOT MODIFY!
---@meta pugixml.xpath_variable

---A single XPath variable
---@class pugixml.xpath_variable 
---@field boolean boolean Get variable value; no type conversion is performed, default value (false, NaN, empty string, empty node set) is returned on type mismatch error
---@field node_set pugixml.xpath_node_set 
---@field number number 
---@field string string 
local xpath_variable = {}

---@return any
function xpath_variable:__gc() end

---@return any
function xpath_variable:__olua_move() end

---Get variable value; no type conversion is performed, default value (false, NaN, empty string, empty node set) is returned on type mismatch error
---@return boolean
function xpath_variable:get_boolean() end

---@return pugixml.xpath_node_set
function xpath_variable:get_node_set() end

---@return number
function xpath_variable:get_number() end

---@return string
function xpath_variable:get_string() end

---Get variable name
---@return string
function xpath_variable:name() end

---Set variable value; no type conversion is performed, false is returned on type mismatch error
---@param value boolean
---@return boolean
---@overload fun(self: pugixml.xpath_variable, value: number): boolean
---@overload fun(self: pugixml.xpath_variable, value: string): boolean
---@overload fun(self: pugixml.xpath_variable, value: pugixml.xpath_node_set): boolean
function xpath_variable:set(value) end

---Get variable type
---@return pugixml.xpath_value_type
function xpath_variable:type() end

return xpath_variable