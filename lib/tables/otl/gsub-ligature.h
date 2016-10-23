#ifndef CARYLL_TABLE_OTL_GSUB_LIGATURE_H
#define CARYLL_TABLE_OTL_GSUB_LIGATURE_H

#include "otl.h"

void otl_delete_gsub_ligature(otl_Subtable *subtable);
otl_Subtable *otl_read_gsub_ligature(const font_file_pointer data, uint32_t tableLength, uint32_t subtableOffset);
json_value *otl_gsub_dump_ligature(const otl_Subtable *_subtable);
otl_Subtable *otl_gsub_parse_ligature(const json_value *_subtable);
caryll_Buffer *caryll_build_gsub_ligature_subtable(const otl_Subtable *_subtable);

#endif
