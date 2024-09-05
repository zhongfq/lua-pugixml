---AUTO GENERATED, DO NOT MODIFY!
---@meta pugixml.xml_document

---Document class (DOM tree root)
---@class pugixml.xml_document : pugixml.xml_node
local xml_document = {}

---Get document element
---@return pugixml.xml_node
function xml_document:document_element() end

---Load document from buffer. Copies/converts the buffer, so it may be deleted or changed after the function returns.
---@param contents any
---@param size integer
---@param options integer
---@param encoding pugixml.xml_encoding
---@return pugixml.xml_parse_result
---@overload fun(self: pugixml.xml_document, contents: any, size: integer): pugixml.xml_parse_result
---@overload fun(self: pugixml.xml_document, contents: any, size: integer, options: integer): pugixml.xml_parse_result
function xml_document:load_buffer(contents, size, options, encoding) end

---Load document from buffer, using the buffer for in-place parsing (the buffer is modified and used for storage of document data).
---You should ensure that buffer data will persist throughout the document's lifetime, and free the buffer memory manually once document is destroyed.
---@param contents any
---@param size integer
---@param options integer
---@param encoding pugixml.xml_encoding
---@return pugixml.xml_parse_result
---@overload fun(self: pugixml.xml_document, contents: any, size: integer): pugixml.xml_parse_result
---@overload fun(self: pugixml.xml_document, contents: any, size: integer, options: integer): pugixml.xml_parse_result
function xml_document:load_buffer_inplace(contents, size, options, encoding) end

---Load document from buffer, using the buffer for in-place parsing (the buffer is modified and used for storage of document data).
---You should allocate the buffer with pugixml allocation function; document will free the buffer when it is no longer needed (you can't use it anymore).
---@param contents any
---@param size integer
---@param options integer
---@param encoding pugixml.xml_encoding
---@return pugixml.xml_parse_result
---@overload fun(self: pugixml.xml_document, contents: any, size: integer): pugixml.xml_parse_result
---@overload fun(self: pugixml.xml_document, contents: any, size: integer, options: integer): pugixml.xml_parse_result
function xml_document:load_buffer_inplace_own(contents, size, options, encoding) end

---Load document from file
---@param path string
---@param options integer
---@param encoding pugixml.xml_encoding
---@return pugixml.xml_parse_result
---@overload fun(self: pugixml.xml_document, path: string): pugixml.xml_parse_result
---@overload fun(self: pugixml.xml_document, path: string, options: integer): pugixml.xml_parse_result
function xml_document:load_file(path, options, encoding) end

---Load document from zero-terminated string. No encoding conversions are applied.
---@param contents string
---@param options integer
---@return pugixml.xml_parse_result
---@overload fun(self: pugixml.xml_document, contents: string): pugixml.xml_parse_result
function xml_document:load_string(contents, options) end

---Default constructor, makes empty document
---@return pugixml.xml_document
function xml_document.new() end

---Removes all nodes, leaving the empty document
---
---Removes all nodes, then copies the entire contents of the specified document
---@overload fun(self: pugixml.xml_document, proto: pugixml.xml_document)
function xml_document:reset() end

---Save XML document to writer (semantics is slightly different from xml_node::print, see documentation for details).
---@param writer pugixml.xml_writer
---@param indent string
---@param flags integer
---@param encoding pugixml.xml_encoding
---@overload fun(self: pugixml.xml_document, writer: pugixml.xml_writer)
---@overload fun(self: pugixml.xml_document, writer: pugixml.xml_writer, indent: string)
---@overload fun(self: pugixml.xml_document, writer: pugixml.xml_writer, indent: string, flags: integer)
function xml_document:save(writer, indent, flags, encoding) end

---Save XML to file
---@param path string
---@param indent string
---@param flags integer
---@param encoding pugixml.xml_encoding
---@return boolean
---@overload fun(self: pugixml.xml_document, path: string): boolean
---@overload fun(self: pugixml.xml_document, path: string, indent: string): boolean
---@overload fun(self: pugixml.xml_document, path: string, indent: string, flags: integer): boolean
function xml_document:save_file(path, indent, flags, encoding) end

return xml_document