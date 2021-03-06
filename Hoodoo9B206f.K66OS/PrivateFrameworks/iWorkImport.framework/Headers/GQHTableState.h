/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "iWorkImport-Structs.h"

@class GQDTTable;

__attribute__((visibility("hidden")))
@interface GQHTableState : NSObject {
@private
	int mPrevRowIndex;	// 4 = 0x4
	int mPrevColumnIndex;	// 8 = 0x8
	GQDTTable *mTable;	// 12 = 0xc
	vector<short unsigned int,std::allocator<short unsigned int> > *mCellCountInColumns;	// 16 = 0x10
	int mGroupLevel;	// 20 = 0x14
	bool mSplitTable;	// 24 = 0x18
	double mCurrentTablePosition;	// 28 = 0x1c
	double mLastAttachmentPosition;	// 36 = 0x24
	long mSplitTableIndex;	// 44 = 0x2c
	double mOriginalTableHeight;	// 48 = 0x30
}
@property(assign) int groupLevel;	// G=0x33ff1445; S=0x33ff1455; converted property
@property(assign) double lastAttachmentPosition;	// G=0x33ff1511; S=0x33ff1529; converted property
@property(assign) double originalTableHeight;	// G=0x33ff153d; S=0x33ff1555; converted property
@property(assign) bool splitTable;	// G=0x33ff1465; S=0x33ff1475; converted property
@property(retain) id table;	// G=0x33ff1425; S=0x33ff1629; converted property
- (id)init;	// 0x33ff1569
- (void)addRowHeight:(float)height;	// 0x33ff14ed
- (vector<short unsigned int,std::allocator<short unsigned int> > *)cellCountInColumns;	// 0x33ff1435
- (double)currentTablePosition;	// 0x33ff14d5
- (void)dealloc;	// 0x33ff16cd
// converted property getter: - (int)groupLevel;	// 0x33ff1445
// converted property getter: - (double)lastAttachmentPosition;	// 0x33ff1511
- (long)nextSplitTableIndex;	// 0x33ff14bd
// converted property getter: - (double)originalTableHeight;	// 0x33ff153d
- (int)prevColumnIndex;	// 0x33ff13f5
- (int)prevRowIndex;	// 0x33ff13e5
// converted property setter: - (void)setGroupLevel:(int)level;	// 0x33ff1455
// converted property setter: - (void)setLastAttachmentPosition:(double)position;	// 0x33ff1529
// converted property setter: - (void)setOriginalTableHeight:(double)height;	// 0x33ff1555
- (void)setPrevRowIndex:(int)index columnIndex:(int)index2;	// 0x33ff1405
// converted property setter: - (void)setSplitTable:(bool)table;	// 0x33ff1475
- (void)setSplitTableIndex:(long)index;	// 0x33ff14ad
// converted property setter: - (void)setTable:(id)table;	// 0x33ff1629
// converted property getter: - (bool)splitTable;	// 0x33ff1465
// converted property getter: - (id)table;	// 0x33ff1425
@end

