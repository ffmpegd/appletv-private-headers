/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"

@class OADTableRow, OADTable;

__attribute__((visibility("hidden")))
@interface PMTableRowMapper : CMMapper {
@private
	OADTable *mTable;	// 8 = 0x8
	OADTableRow *mRow;	// 12 = 0xc
	unsigned mRowIndex;	// 16 = 0x10
}
- (id)initWithOadTable:(id)oadTable rowIndex:(unsigned)index parent:(id)parent;	// 0x3290edd1
- (unsigned)cellCount;	// 0x3290f9c5
- (float)height;	// 0x3290f4d1
- (void)mapAt:(id)at withState:(id)state;	// 0x3290ee49
@end
