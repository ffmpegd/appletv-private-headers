/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"

@class CMStyle, OADTableCell;

__attribute__((visibility("hidden")))
@interface PMTableCellMapper : CMMapper {
@private
	OADTableCell *mCell;	// 8 = 0x8
	CMStyle *mStyle;	// 12 = 0xc
	int mColIndex;	// 16 = 0x10
	unsigned mRowIndex;	// 20 = 0x14
	float mWidth;	// 24 = 0x18
}
- (id)initWithOadTableCell:(id)oadTableCell rowIndex:(unsigned)index columnIndex:(int)index3 parent:(id)parent;	// 0x356bc0e5
- (void)dealloc;	// 0x356bd24d
- (void)mapAt:(id)at withState:(id)state;	// 0x356bc181
- (void)mapBordersWithState:(id)state;	// 0x356bc501
- (void)mapCellPropertiesWithState:(id)state textAnchor:(int)anchor;	// 0x356bccfd
- (id)rowMapper;	// 0x356bc961
- (id)tableMapper;	// 0x356bc8d9
- (float)widthWithState:(id)state;	// 0x356bcb65
@end

