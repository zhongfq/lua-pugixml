---AUTO GENERATED, DO NOT MODIFY!
---@meta pugixml.xml_text

---A helper for working with text inside PCDATA nodes
---@class pugixml.xml_text 
local xml_text = {}

---@return any
function xml_text:__gc() end

---@return any
function xml_text:__olua_move() end

---Get text as bool (returns true if first character is in '1tTyY' set), or the default value if object is empty
---@param def boolean
---@return boolean
---@overload fun(self: pugixml.xml_text): boolean
function xml_text:as_bool(def) end

---@param def number
---@return number
---@overload fun(self: pugixml.xml_text): number
function xml_text:as_double(def) end

---@param def number
---@return number
---@overload fun(self: pugixml.xml_text): number
function xml_text:as_float(def) end

---Get text as a number, or the default value if conversion did not succeed or object is empty
---@param def integer
---@return integer
---@overload fun(self: pugixml.xml_text): integer
function xml_text:as_int(def) end

---@param def integer
---@return integer
---@overload fun(self: pugixml.xml_text): integer
function xml_text:as_llong(def) end

---Get text, or the default value if object is empty
---@param def string
---@return string
---@overload fun(self: pugixml.xml_text): string
function xml_text:as_string(def) end

---@param def integer
---@return integer
---@overload fun(self: pugixml.xml_text): integer
function xml_text:as_uint(def) end

---@param def integer
---@return integer
---@overload fun(self: pugixml.xml_text): integer
function xml_text:as_ullong(def) end

---Get the data node (node_pcdata or node_cdata) for this object
---@return pugixml.xml_node
function xml_text:data() end

---Check if text object is empty (null)
---@return boolean
function xml_text:empty() end

---Get text, or "" if object is empty
---@return string
function xml_text:get() end

---Default constructor. Constructs an empty object.
---@return pugixml.xml_text
function xml_text.new() end

---Set text (returns false if object is empty or there is not enough memory)
---@param rhs string
---@return boolean
---@overload fun(self: pugixml.xml_text, rhs: string, size: integer): boolean
function xml_text:set(rhs) end

---@param rhs boolean
---@return boolean
function xml_text:set_bool(rhs) end

---@param rhs number
---@return boolean
---@overload fun(self: pugixml.xml_text, rhs: number, precision: integer): boolean
function xml_text:set_double(rhs) end

---@param rhs number
---@return boolean
---@overload fun(self: pugixml.xml_text, rhs: number, precision: integer): boolean
function xml_text:set_float(rhs) end

---Set text with type conversion (numbers are converted to strings, boolean is converted to "true"/"false")
---@param rhs integer
---@return boolean
function xml_text:set_int(rhs) end

---@param rhs integer
---@return boolean
function xml_text:set_llong(rhs) end

---@param rhs integer
---@return boolean
function xml_text:set_long(rhs) end

---@param rhs integer
---@return boolean
function xml_text:set_uint(rhs) end

---@param rhs integer
---@return boolean
function xml_text:set_ullong(rhs) end

---@param rhs integer
---@return boolean
function xml_text:set_ulong(rhs) end

return xml_text