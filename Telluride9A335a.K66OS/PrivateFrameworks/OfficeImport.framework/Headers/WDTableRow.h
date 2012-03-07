/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class WDTable, WDTableRowProperties, NSMutableArray;

__attribute__((visibility("hidden")))
@interface WDTableRow : NSObject {
@private
	int mIndex;	// 4 = 0x4
	WDTable *mTable;	// 8 = 0x8
	WDTableRowProperties *mProperties;	// 12 = 0xc
	NSMutableArray *mCells;	// 16 = 0x10
}
- (id)initWithTable:(id)table at:(int)at;	// 0x35265949
- (id)addCell;	// 0x352663c9
- (id)addCellWithIndex:(int)index;	// 0x353c0e31
- (id)cellAt:(int)at;	// 0x3526bf35
- (int)cellCount;	// 0x35266611
- (id)cellIterator;	// 0x353c0ddd
- (void)dealloc;	// 0x351c900d
- (int)index;	// 0x353c0d89
- (id)newCellIterator;	// 0x353c0d99
- (id)properties;	// 0x35265f1d
- (id)table;	// 0x352663a9
@end

