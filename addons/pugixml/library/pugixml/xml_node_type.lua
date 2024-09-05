---AUTO GENERATED, DO NOT MODIFY!
---@meta pugixml.xml_node_type

---@type pugixml.xml_node_type
local VALUE

---
---@enum pugixml.xml_node_type
---@operator call(integer): pugixml.xml_node_type
local xml_node_type = {
    ---Character data, i.e. '<![CDATA[text]]>'
    node_cdata = 4,
    ---Comment tag, i.e. '<!-- text -->'
    node_comment = 5,
    ---Document declaration, i.e. '<?xml version="1.0"?>'
    node_declaration = 7,
    ---Document type declaration, i.e. '<!DOCTYPE doc>'
    node_doctype = 8,
    ---A document tree's absolute root
    node_document = 1,
    ---Element tag, i.e. '<node/>'
    node_element = 2,
    ---Empty (null) node handle
    node_null = 0,
    ---Plain character data, i.e. 'text'
    node_pcdata = 3,
    ---Processing instruction, i.e. '<?name?>'
    node_pi = 6,
}

---@param v integer
---@return pugixml.xml_node_type
function xml_node_type:__call(v) end

return xml_node_type