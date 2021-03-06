/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"

@class OADOrientedBounds, CMDrawableStyle, CMTableGridInfo, OADTable;

__attribute__((visibility("hidden")))
@interface PMTableMapper : CMMapper {
@private
	OADTable *mTable;	// 8 = 0x8
	CMDrawableStyle *mStyle;	// 12 = 0xc
	CMTableGridInfo *mGrid;	// 16 = 0x10
	OADOrientedBounds *mBounds;	// 20 = 0x14
}
- (id)initWithOadTable:(id)oadTable bounds:(id)bounds parent:(id)parent;	// 0x356bb825
- (id)cellStyle;	// 0x357d9291
- (float)columnWidthAtIndex:(int)index state:(id)state;	// 0x356bbd41
- (void)dealloc;	// 0x356bd2b9
- (id)defaultCellFillForRow:(unsigned)row withState:(id)state;	// 0x356bcf05
- (id)defaultCellFillWithState:(id)state;	// 0x357d9241
- (id)grid;	// 0x357d9231
- (void)mapAt:(id)at withState:(id)state;	// 0x356bb8e9
- (void)mapColumnGridAt:(id)at withState:(id)state;	// 0x356bbbcd
- (void)mapTablePropertiesWithState:(id)state;	// 0x356bba7d
- (unsigned)rowCount;	// 0x356bc941
- (id)tableBorderStyle;	// 0x356bc9e5
@end

