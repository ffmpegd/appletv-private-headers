/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class EDWorkbook, EDWorksheet, EDRowBlock, EDCollection, EDRowBlocks, EDReference;

@interface EDReferenceIterator : NSObject {
	EDWorkbook *mWorkbook;	// 4 = 0x4
	EDWorksheet *mCurrentSheet;	// 8 = 0x8
	EDCollection *mReferences;	// 12 = 0xc
	EDReference *mReference;	// 16 = 0x10
	EDRowBlocks *mRowBlocks;	// 20 = 0x14
	EDRowBlock *mRowBlock;	// 24 = 0x18
	unsigned mRowBlockIndex;	// 28 = 0x1c
	EDRowInfo *mRowInfo;	// 32 = 0x20
	unsigned mRowInfoIndex;	// 36 = 0x24
	unsigned mCellIndex;	// 40 = 0x28
	unsigned mNextArrayIndex;	// 44 = 0x2c
	int mCurrentCellIndex;	// 48 = 0x30
	unsigned mPreviousColumnNumber;	// 52 = 0x34
}
+ (id)referenceIteratorWithReference:(id)reference workbook:(id)workbook;	// 0x34a2e849
+ (id)referenceIteratorWithReferenceArray:(id)referenceArray workbook:(id)workbook;	// 0x3497e32d
- (id)initWithReference:(id)reference workbook:(id)workbook;	// 0x34a2e825
- (id)initWithReferenceArray:(id)referenceArray reference:(id)reference workbook:(id)workbook;	// 0x3497e3d1
- (id)initWithReferenceArray:(id)referenceArray workbook:(id)workbook;	// 0x3497e37d
- (unsigned)currentCellIndex;	// 0x34985dd9
- (void)dealloc;	// 0x3497ed6d
- (EDCellHeader *)nextCell;	// 0x3497e985
- (bool)nextReference;	// 0x34985de9
- (bool)nextRow;	// 0x3497ebc9
- (void)setCurrentSheet:(id)sheet;	// 0x34a2e899
- (void)setReference:(id)reference;	// 0x3497e4c1
@end

