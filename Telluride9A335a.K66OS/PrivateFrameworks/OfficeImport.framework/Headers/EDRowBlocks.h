/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "TSUFlushable.h"
#import <NSObject.h> // Unknown library

@class NSRecursiveLock, NSMutableArray, EDWorksheet, NSString, EDCollection;

__attribute__((visibility("hidden")))
@interface EDRowBlocks : NSObject <TSUFlushable> {
@private
	EDWorksheet *mWorksheet;	// 4 = 0x4
	NSMutableArray *mRowBlocks;	// 8 = 0x8
	EDCollection *mFormulas;	// 12 = 0xc
	unsigned mMaxPopulatedRow;	// 16 = 0x10
	unsigned mMaxPopulatedColumn;	// 20 = 0x14
	NSString *mFileName;	// 24 = 0x18
	int mLockCount;	// 28 = 0x1c
	NSRecursiveLock *mSaveLoadLock;	// 32 = 0x20
}
- (id)initWithWorksheet:(id)worksheet;	// 0x35213a81
- (EDCellHeader *)cellWithRowNumber:(unsigned)rowNumber columnNumber:(int)number;	// 0x352a07b5
- (Class)classForFormulaType:(unsigned char)formulaType;	// 0x353823ed
- (void)dealloc;	// 0x35237365
- (unsigned)expectedIndexOfRowBlockForRowNumber:(unsigned)rowNumber;	// 0x35216c35
- (id)fileNameForPersistingRowBlocks;	// 0x353821fd
- (void)flush;	// 0x35382365
- (unsigned char)formulaTypeForFormula:(id)formula;	// 0x35382375
- (id)formulas;	// 0x3521d6dd
- (unsigned)indexOfRowBlockForRowNumber:(unsigned)rowNumber;	// 0x353821a1
- (void)load;	// 0x35214519
- (void)lock;	// 0x35213ce5
- (unsigned)maxPopulatedColumn;	// 0x35382191
- (unsigned)maxPopulatedRow;	// 0x3521eb11
- (void)removeRowBlockAtIndex:(unsigned)index;	// 0x353821d9
- (id)rowBlockAtIndex:(unsigned)index;	// 0x35216d25
- (unsigned)rowBlockCount;	// 0x35216d05
- (id)rowBlockForRowNumber:(unsigned)rowNumber currentRowBlock:(id)block;	// 0x352a080d
- (id)rowBlockForRowNumber:(unsigned)rowNumber currentRowBlock:(id)block createIfNil:(bool)aNil;	// 0x35216a51
- (void)save;	// 0x35382445
- (bool)spaceForRowNumber:(unsigned)rowNumber rowBlock:(id)block;	// 0x35217e49
- (void)unlock;	// 0x3521821d
- (void)updateMaxPopulatedRow:(unsigned)row column:(unsigned)column;	// 0x35217be5
@end

