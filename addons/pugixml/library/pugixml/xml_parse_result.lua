---AUTO GENERATED, DO NOT MODIFY!
---@meta pugixml.xml_parse_result

---Parsing result
---@class pugixml.xml_parse_result 
---@field status pugixml.xml_parse_status
---@field offset integer
---@field encoding pugixml.xml_encoding
local xml_parse_result = {}

---@return any
function xml_parse_result:__gc() end

---Get error description
---@return string
function xml_parse_result:description() end

---Default constructor, initializes object to failed state
---@return pugixml.xml_parse_result
function xml_parse_result.new() end

return xml_parse_result