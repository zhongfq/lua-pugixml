---AUTO GENERATED, DO NOT MODIFY!
---@meta pugixml.xpath_query

---A compiled XPath query object
---@class pugixml.xpath_query 
local xpath_query = {}

---@return any
function xpath_query:__gc() end

---Evaluate expression as boolean value in the specified context; performs type conversion if necessary.
---If PUGIXML_NO_EXCEPTIONS is not defined, throws std::bad_alloc on out of memory errors.
---@param n pugixml.xpath_node
---@return boolean
function xpath_query:evaluate_boolean(n) end

---Evaluate expression as node set in the specified context.
---Return first node in document order, or empty node if node set is empty.
---If PUGIXML_NO_EXCEPTIONS is not defined, throws xpath_exception on type mismatch and std::bad_alloc on out of memory errors.
---If PUGIXML_NO_EXCEPTIONS is defined, returns empty node instead.
---@param n pugixml.xpath_node
---@return pugixml.xpath_node
function xpath_query:evaluate_node(n) end

---Evaluate expression as node set in the specified context.
---If PUGIXML_NO_EXCEPTIONS is not defined, throws xpath_exception on type mismatch and std::bad_alloc on out of memory errors.
---If PUGIXML_NO_EXCEPTIONS is defined, returns empty node set instead.
---@param n pugixml.xpath_node
---@return pugixml.xpath_node_set
function xpath_query:evaluate_node_set(n) end

---Evaluate expression as double value in the specified context; performs type conversion if necessary.
---If PUGIXML_NO_EXCEPTIONS is not defined, throws std::bad_alloc on out of memory errors.
---@param n pugixml.xpath_node
---@return number
function xpath_query:evaluate_number(n) end

---Evaluate expression as string value in the specified context; performs type conversion if necessary.
---If PUGIXML_NO_EXCEPTIONS is not defined, throws std::bad_alloc on out of memory errors.
---@param n pugixml.xpath_node
---@return string
---
---Evaluate expression as string value in the specified context; performs type conversion if necessary.
---At most capacity characters are written to the destination buffer, full result size is returned (includes terminating zero).
---If PUGIXML_NO_EXCEPTIONS is not defined, throws std::bad_alloc on out of memory errors.
---If PUGIXML_NO_EXCEPTIONS is defined, returns empty  set instead.
---@overload fun(self: pugixml.xpath_query, buffer: string, capacity: integer, n: pugixml.xpath_node): integer
function xpath_query:evaluate_string(n) end

---Construct a compiled object from XPath expression.
---If PUGIXML_NO_EXCEPTIONS is not defined, throws xpath_exception on compilation errors.
---@param query string
---@param variables pugixml.xpath_variable_set
---@return pugixml.xpath_query
---@overload fun(query: string): pugixml.xpath_query
---
---Constructor
---@overload fun(): pugixml.xpath_query
function xpath_query.new(query, variables) end

---Get parsing result (used to get compilation errors in PUGIXML_NO_EXCEPTIONS mode)
---@return pugixml.xpath_parse_result
function xpath_query:result() end

---Get query expression return type
---@return pugixml.xpath_value_type
function xpath_query:return_type() end

return xpath_query