/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDProcessor.h"
#import "OfficeImport-Structs.h"

@class EDWorksheet, EDRowBlock, EDRowBlocks, NSMutableArray, NSArray, EDColumnInfoCollection;

@interface EPStyleFlattener : EDProcessor {
	EDWorksheet *mWorksheet;	// 16 = 0x10
	EDRowBlocks *mRowBlocks;	// 20 = 0x14
	EDRowBlock *mCurrentRowBlock;	// 24 = 0x18
	EDColumnInfoCollection *mColumnInfos;	// 28 = 0x1c
	NSArray *mKeys;	// 32 = 0x20
	NSMutableArray *mRanges;	// 36 = 0x24
	int mFirstRow;	// 40 = 0x28
	int mLastRow;	// 44 = 0x2c
	int mFirstColumn;	// 48 = 0x30
	int mLastColumn;	// 52 = 0x34
	unsigned mFirstRowStripeSize;	// 56 = 0x38
	unsigned mSecondRowStripeSize;	// 60 = 0x3c
	unsigned mFirstColumnStripeSize;	// 64 = 0x40
	unsigned mSecondColumnStripeSize;	// 68 = 0x44
}
- (void)applyDifferentialStyle:(id)style borderFlags:(int)flags precedence:(int)precedence toCell:(EDCellHeader **)cell row:(int)row column:(int)column;	// 0x349b9369
- (void)applyProcessorToObject:(id)object sheet:(id)sheet;	// 0x34912305
- (void)applyStyleElements:(id)elements toCell:(EDCellHeader *)cell row:(int)row column:(int)column;	// 0x349b9091
- (int)borderFlagsForStyleType:(int)styleType row:(int)row column:(int)column;	// 0x34a32ac5
- (void)cacheRange:(id)range;	// 0x349b8525
- (void)cacheSizes:(id)sizes inObject:(id)object;	// 0x349b85e9
- (EDCellHeader *)cellWithSetupStyleAtRowNumber:(int)rowNumber columnNumber:(int)number;	// 0x349b8f79
- (void)clearCache;	// 0x349ba685
- (id)collectionFromWorksheet:(id)worksheet;	// 0x34a32ab1
- (void)dealloc;	// 0x34912711
- (id)extractCellStyleElements:(id)elements parentScope:(id)scope row:(int)row column:(int)column;	// 0x34a32abd
- (id)extractGlobalStyleElements:(id)elements;	// 0x349be2c1
- (id)extractKeys:(id)keys from:(id)from parent:(id)parent;	// 0x349b87e1
- (id)extractRowStyleElements:(id)elements parentScope:(id)scope row:(int)row;	// 0x34a32ab9
- (id)flattenBorder:(int)border borders:(id)borders differentialBorders:(id)borders3 flag:(bool)flag precedence:(int)precedence row:(int)row column:(int)column isBorderCopied:(bool *)copied;	// 0x349b9875
- (id)flattenBorders:(id)borders differentialBorders:(id)borders2 borderFlags:(int)flags precedence:(int)precedence row:(int)row column:(int)column isBordersCopied:(bool *)copied;	// 0x349b9605
- (id)flattenFill:(id)fill differentialFill:(id)fill2 isFillCopied:(bool *)copied;	// 0x349b9cd5
- (id)flattenFont:(id)font differentialFont:(id)font2 isFontCopied:(bool *)copied;	// 0x349b9f0d
- (id)keysInTheOrderTheyShouldBeApplied;	// 0x34a32ac1
- (void)processObject:(id)object;	// 0x349b7f81
- (id)styleFromObject:(id)object;	// 0x34a32ab5
- (id)wrapDifferentialStyleInATableStyleElement:(id)atableStyleElement type:(int)type;	// 0x349c38d9
@end

