---AUTO GENERATED, DO NOT MODIFY!
---@meta pugixml.xpath_variable_set

---A set of XPath variables
---@class pugixml.xpath_variable_set 
local xpath_variable_set = {}

---@return any
function xpath_variable_set:__gc() end

---@return any
function xpath_variable_set:__olua_move() end

---Add a new variable or get the existing one, if the types match
---@param name string
---@param type pugixml.xpath_value_type
---@return pugixml.xpath_variable
function xpath_variable_set:add(name, type) end

---Get existing variable by name
---@param name string
---@return pugixml.xpath_variable
function xpath_variable_set:get(name) end

---Default constructor/destructor
---@return pugixml.xpath_variable_set
function xpath_variable_set.new() end

---Set value of an existing variable; no type conversion is performed, false is returned if there is no such variable or if types mismatch
---@param name string
---@param value boolean
---@return boolean
---@overload fun(self: pugixml.xpath_variable_set, name: string, value: number): boolean
---@overload fun(self: pugixml.xpath_variable_set, name: string, value: string): boolean
---@overload fun(self: pugixml.xpath_variable_set, name: string, value: pugixml.xpath_node_set): boolean
function xpath_variable_set:set(name, value) end

return xpath_variable_set