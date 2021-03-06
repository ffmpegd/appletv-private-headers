/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class WDTableRowProperties, WDTable, NSMutableArray;

__attribute__((visibility("hidden")))
@interface WDTableRow : NSObject {
@private
	int mIndex;	// 4 = 0x4
	WDTable *mTable;	// 8 = 0x8
	WDTableRowProperties *mProperties;	// 12 = 0xc
	NSMutableArray *mCells;	// 16 = 0x10
}
- (id)initWithTable:(id)table at:(int)at;	// 0x310f2d75
- (id)addCell;	// 0x310f3379
- (id)addCellWithIndex:(int)index;	// 0x312bfc1d
- (id)cellAt:(int)at;	// 0x31105195
- (int)cellCount;	// 0x31105175
- (id)cellIterator;	// 0x312bfcad
- (void)dealloc;	// 0x3110a459
- (int)index;	// 0x312bfc0d
- (id)newCellIterator;	// 0x312bfd01
- (id)properties;	// 0x310f3091
- (id)table;	// 0x310f30a1
@end

