---AUTO GENERATED, DO NOT MODIFY!
---@meta pugixml.xml_attribute

---A light-weight handle for manipulating attributes in DOM tree
---@class pugixml.xml_attribute 
local xml_attribute = {}

---Comparison operators (compares wrapped attribute pointers)
---@param r pugixml.xml_attribute
---@return boolean
function xml_attribute:__eq(r) end

---@return any
function xml_attribute:__gc() end

---@param r pugixml.xml_attribute
---@return boolean
function xml_attribute:__le(r) end

---@param r pugixml.xml_attribute
---@return boolean
function xml_attribute:__lt(r) end

---Get attribute value as bool (returns true if first character is in '1tTyY' set), or the default value if attribute is empty
---@param def boolean
---@return boolean
---@overload fun(self: pugixml.xml_attribute): boolean
function xml_attribute:as_bool(def) end

---@param def number
---@return number
---@overload fun(self: pugixml.xml_attribute): number
function xml_attribute:as_double(def) end

---@param def number
---@return number
---@overload fun(self: pugixml.xml_attribute): number
function xml_attribute:as_float(def) end

---Get attribute value as a number, or the default value if conversion did not succeed or attribute is empty
---@param def integer
---@return integer
---@overload fun(self: pugixml.xml_attribute): integer
function xml_attribute:as_int(def) end

---@param def integer
---@return integer
---@overload fun(self: pugixml.xml_attribute): integer
function xml_attribute:as_llong(def) end

---Get attribute value, or the default value if attribute is empty
---@param def string
---@return string
---@overload fun(self: pugixml.xml_attribute): string
function xml_attribute:as_string(def) end

---@param def integer
---@return integer
---@overload fun(self: pugixml.xml_attribute): integer
function xml_attribute:as_uint(def) end

---@param def integer
---@return integer
---@overload fun(self: pugixml.xml_attribute): integer
function xml_attribute:as_ullong(def) end

---Check if attribute is empty (null)
---@return boolean
function xml_attribute:empty() end

---Get hash value (unique for handles to the same object)
---@return integer
function xml_attribute:hash_value() end

---Get attribute name/value, or "" if attribute is empty
---@return string
function xml_attribute:name() end

---Default constructor. Constructs an empty attribute.
---@return pugixml.xml_attribute
function xml_attribute.new() end

---Get next/previous attribute in the attribute list of the parent node
---@return pugixml.xml_attribute
function xml_attribute:next_attribute() end

---@return pugixml.xml_attribute
function xml_attribute:previous_attribute() end

---@param rhs boolean
---@return boolean
function xml_attribute:set_bool_value(rhs) end

---@param rhs number
---@return boolean
---@overload fun(self: pugixml.xml_attribute, rhs: number, precision: integer): boolean
function xml_attribute:set_double_value(rhs) end

---@param rhs number
---@return boolean
---@overload fun(self: pugixml.xml_attribute, rhs: number, precision: integer): boolean
function xml_attribute:set_float_value(rhs) end

---Set attribute value with type conversion (numbers are converted to strings, boolean is converted to "true"/"false")
---@param rhs integer
---@return boolean
function xml_attribute:set_int_value(rhs) end

---@param rhs integer
---@return boolean
function xml_attribute:set_llong_value(rhs) end

---@param rhs integer
---@return boolean
function xml_attribute:set_long_value(rhs) end

---Set attribute name/value (returns false if attribute is empty or there is not enough memory)
---@param rhs string
---@return boolean
---@overload fun(self: pugixml.xml_attribute, rhs: string, size: integer): boolean
function xml_attribute:set_name(rhs) end

---@param rhs integer
---@return boolean
function xml_attribute:set_uint_value(rhs) end

---@param rhs integer
---@return boolean
function xml_attribute:set_ullong_value(rhs) end

---@param rhs integer
---@return boolean
function xml_attribute:set_ulong_value(rhs) end

---@param rhs string
---@return boolean
---@overload fun(self: pugixml.xml_attribute, rhs: string, size: integer): boolean
function xml_attribute:set_value(rhs) end

---@return string
function xml_attribute:value() end

return xml_attribute