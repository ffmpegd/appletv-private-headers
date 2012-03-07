/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EDRowBlock : NSObject {
@private
	CFDataRef mPackedData;	// 4 = 0x4
	CFDataRef mCellOffsets;	// 8 = 0x8
}
@property(assign) unsigned index;	// G=0x355e7c59; S=0x355d1e49; converted property
+ (id)rowBlock;	// 0x355d1d6d
- (id)init;	// 0x355d1db5
- (EDCellHeader *)addCellWithColumnNumber:(unsigned)columnNumber type:(int)type isFormulaCell:(bool)cell rowInfo:(EDRowInfo **)info rowBlocks:(id)blocks;	// 0x355d25c1
- (EDRowInfo *)addRowInfoWithRowNumber:(unsigned)rowNumber cellCountHint:(unsigned)hint;	// 0x355d2151
- (void)archiveByAppendingToMutableData:(CFDataRef)mutableData;	// 0x3574a261
- (EDCellHeader *)cellAtIndex:(unsigned)index rowInfo:(EDRowInfo *)info;	// 0x355d9ba1
- (EDCellHeader *)cellWithColumnNumber:(unsigned)columnNumber rowInfo:(EDRowInfo *)info;	// 0x355dbc6d
- (void)checkCellOffsetOrThrow:(unsigned long)aThrow;	// 0x35749f11
- (void)dealloc;	// 0x355f2425
- (void)doneWithContent;	// 0x355f2465
- (unsigned)expectedIndexOfCellWithColumnNumber:(unsigned)columnNumber rowInfo:(EDRowInfo *)info;	// 0x355dbcfd
- (unsigned)firstRowNumber;	// 0x355d2da5
- (void)incrementIndex;	// 0x3574a02d
// converted property getter: - (unsigned)index;	// 0x355e7c59
- (unsigned)indexOfCellWithColumnNumber:(unsigned)columnNumber rowInfo:(EDRowInfo *)info;	// 0x355dbca9
- (unsigned)indexOfRowInfoWithRowNumber:(unsigned)rowNumber;	// 0x355d20ad
- (unsigned)lastRowNumber;	// 0x355d9b21
- (void)removeCellAtIndex:(unsigned)index rowInfo:(EDRowInfo **)info;	// 0x3574a091
- (unsigned)rowCount;	// 0x355eb61d
- (EDRowInfo *)rowInfoAtIndex:(unsigned)index;	// 0x355d2dc9
- (EDRowInfo *)rowInfoWithRowNumber:(unsigned)rowNumber;	// 0x355d2041
- (EDRowInfo *)rowInfoWithRowNumber:(unsigned)rowNumber createIfNil:(bool)aNil;	// 0x355d2055
// converted property setter: - (void)setIndex:(unsigned)index;	// 0x355d1e49
- (unsigned long)startOfCellsOrThrow;	// 0x35749e41
- (void)unarchiveFromData:(CFDataRef)data offset:(unsigned *)offset;	// 0x3574a1d5
@end

