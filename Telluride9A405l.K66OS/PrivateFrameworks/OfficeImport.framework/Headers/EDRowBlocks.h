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
- (id)initWithWorksheet:(id)worksheet;	// 0x30ccfa81
- (EDCellHeader *)cellWithRowNumber:(unsigned)rowNumber columnNumber:(int)number;	// 0x30d5c7b5
- (Class)classForFormulaType:(unsigned char)formulaType;	// 0x30e3e3ed
- (void)dealloc;	// 0x30cf3365
- (unsigned)expectedIndexOfRowBlockForRowNumber:(unsigned)rowNumber;	// 0x30cd2c35
- (id)fileNameForPersistingRowBlocks;	// 0x30e3e1fd
- (void)flush;	// 0x30e3e365
- (unsigned char)formulaTypeForFormula:(id)formula;	// 0x30e3e375
- (id)formulas;	// 0x30cd96dd
- (unsigned)indexOfRowBlockForRowNumber:(unsigned)rowNumber;	// 0x30e3e1a1
- (void)load;	// 0x30cd0519
- (void)lock;	// 0x30ccfce5
- (unsigned)maxPopulatedColumn;	// 0x30e3e191
- (unsigned)maxPopulatedRow;	// 0x30cdab11
- (void)removeRowBlockAtIndex:(unsigned)index;	// 0x30e3e1d9
- (id)rowBlockAtIndex:(unsigned)index;	// 0x30cd2d25
- (unsigned)rowBlockCount;	// 0x30cd2d05
- (id)rowBlockForRowNumber:(unsigned)rowNumber currentRowBlock:(id)block;	// 0x30d5c80d
- (id)rowBlockForRowNumber:(unsigned)rowNumber currentRowBlock:(id)block createIfNil:(bool)aNil;	// 0x30cd2a51
- (void)save;	// 0x30e3e445
- (bool)spaceForRowNumber:(unsigned)rowNumber rowBlock:(id)block;	// 0x30cd3e49
- (void)unlock;	// 0x30cd421d
- (void)updateMaxPopulatedRow:(unsigned)row column:(unsigned)column;	// 0x30cd3be5
@end

