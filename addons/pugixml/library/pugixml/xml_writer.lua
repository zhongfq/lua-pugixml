---AUTO GENERATED, DO NOT MODIFY!
---@meta pugixml.xml_writer

---Writer interface for node printing (see xml_node::print)
---@class pugixml.xml_writer 
local xml_writer = {}

---@return any
function xml_writer:__gc() end

---@return any
function xml_writer:__olua_move() end

---Write memory chunk into stream/file/whatever
---@param data any
---@param size integer
function xml_writer:write(data, size) end

return xml_writer