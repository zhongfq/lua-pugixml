---AUTO GENERATED, DO NOT MODIFY!
---@meta pugixml.xml_writer_file

---xml_writer implementation for FILE
---@class pugixml.xml_writer_file : pugixml.xml_writer
local xml_writer_file = {}

---Construct writer from a FILE* object; void* is used to avoid header dependencies on stdio
---@param file any
---@return pugixml.xml_writer_file
function xml_writer_file.new(file) end

return xml_writer_file