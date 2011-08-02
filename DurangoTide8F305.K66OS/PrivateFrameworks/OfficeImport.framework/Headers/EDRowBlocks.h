/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "TSUFlushable.h"
#import "OfficeImport-Structs.h"

@class NSMutableArray, EDWorksheet, NSRecursiveLock, EDCollection, NSString;

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
- (id)initWithWorksheet:(id)worksheet;	// 0x343a494d
- (EDCellHeader *)cellWithRowNumber:(unsigned)rowNumber columnNumber:(int)number;	// 0x344fe9b9
- (Class)classForFormulaType:(unsigned char)formulaType;	// 0x345b80ed
- (void)dealloc;	// 0x343c8eb1
- (unsigned)expectedIndexOfRowBlockForRowNumber:(unsigned)rowNumber;	// 0x343a9149
- (id)fileNameForPersistingRowBlocks;	// 0x345b81b5
- (void)flush;	// 0x345b81a1
- (unsigned char)formulaTypeForFormula:(id)formula;	// 0x345b813d
- (id)formulas;	// 0x343be3d1
- (unsigned)indexOfRowBlockForRowNumber:(unsigned)rowNumber;	// 0x345b8305
- (void)load;	// 0x343a5029
- (void)lock;	// 0x343a4be1
- (unsigned)maxPopulatedColumn;	// 0x345b80dd
- (unsigned)maxPopulatedRow;	// 0x343bfcbd
- (void)removeRowBlockAtIndex:(unsigned)index;	// 0x345b8339
- (id)rowBlockAtIndex:(unsigned)index;	// 0x343a9239
- (unsigned)rowBlockCount;	// 0x343a9219
- (id)rowBlockForRowNumber:(unsigned)rowNumber currentRowBlock:(id)block;	// 0x344fe9fd
- (id)rowBlockForRowNumber:(unsigned)rowNumber currentRowBlock:(id)block createIfNil:(bool)aNil;	// 0x343a8f85
- (void)save;	// 0x345b8359
- (bool)spaceForRowNumber:(unsigned)rowNumber rowBlock:(id)block;	// 0x343a9f09
- (void)unlock;	// 0x343aa5d1
- (void)updateMaxPopulatedRow:(unsigned)row column:(unsigned)column;	// 0x343a9d61
@end
