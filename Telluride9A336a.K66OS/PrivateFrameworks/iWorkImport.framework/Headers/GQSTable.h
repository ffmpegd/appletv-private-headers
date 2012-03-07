/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library

@class GQDTCell, GQDTTable, GQDTOverlapCell;

__attribute__((visibility("hidden")))
@interface GQSTable : NSObject {
@private
	GQDTTable *mTable;	// 4 = 0x4
	GQDTOverlapCell *mCurrentOverlapCell;	// 8 = 0x8
	GQDTCell *mLastCellRead;	// 12 = 0xc
	BOOL mIsStreaming;	// 16 = 0x10
	BOOL mAlwaysPutReadCellsInArray;	// 17 = 0x11
	long mCellCount;	// 20 = 0x14
	BOOL mIsCounting;	// 24 = 0x18
}
@property(assign) BOOL alwaysPutReadCellsInArray;	// G=0x304c2cb9; S=0x304c2cc9; converted property
@property(retain) id currentOverlapCell;	// G=0x304c2c79; S=0x304c2e4d; converted property
@property(retain) id lastCellRead;	// G=0x304c2c89; S=0x304c2e19; converted property
- (id)initWithStreaming:(BOOL)streaming table:(id)table;	// 0x304c2d79
// converted property getter: - (BOOL)alwaysPutReadCellsInArray;	// 0x304c2cb9
- (long)column;	// 0x304c2cf1
// converted property getter: - (id)currentOverlapCell;	// 0x304c2c79
- (void)dealloc;	// 0x304c2e8d
- (void)incrementCellPosition;	// 0x304c2e05
- (BOOL)isCounting;	// 0x304c2d41
- (BOOL)isStreaming;	// 0x304c2c99
// converted property getter: - (id)lastCellRead;	// 0x304c2c89
- (long)row;	// 0x304c2cd9
// converted property setter: - (void)setAlwaysPutReadCellsInArray:(BOOL)array;	// 0x304c2cc9
// converted property setter: - (void)setCurrentOverlapCell:(id)cell;	// 0x304c2e4d
- (void)setIsCountingCount:(BOOL)count;	// 0x304c2d31
// converted property setter: - (void)setLastCellRead:(id)read;	// 0x304c2e19
- (void)skipCells:(long)cells;	// 0x304c2d0d
- (id)table;	// 0x304c2ca9
@end
