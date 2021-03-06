/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDString, EDFormula, TSUPointerKeyDictionary;

@interface EDName : NSObject {
	unsigned mSheetIndex;	// 4 = 0x4
	EDString *mNameString;	// 8 = 0x8
	EDFormula *mFormula;	// 12 = 0xc
	TSUPointerKeyDictionary *mMaxWorksheetReferences;	// 16 = 0x10
}
@property(retain) id nameString;	// G=0x31d2147d; S=0x31c21509; converted property
@property(assign) unsigned sheetIndex;	// G=0x31d33b89; S=0x31c214f9; converted property
- (id)init;	// 0x31c214b9
- (void)dealloc;	// 0x31c44c75
- (id)formula;	// 0x31d33b99
- (unsigned)hash;	// 0x31dada8d
- (BOOL)isEqual:(id)equal;	// 0x31dad9f9
- (BOOL)isEqualToEDName:(id)edname;	// 0x31dad981
- (BOOL)isEqualToString:(id)string;	// 0x31dad9d5
- (id)maxWorksheetReferences;	// 0x31dadab9
// converted property getter: - (id)nameString;	// 0x31d2147d
- (void)setCleanedFormula:(id)formula;	// 0x31c23955
- (void)setFormula:(id)formula workbook:(id)workbook;	// 0x31c238f1
// converted property setter: - (void)setNameString:(id)string;	// 0x31c21509
// converted property setter: - (void)setSheetIndex:(unsigned)index;	// 0x31c214f9
// converted property getter: - (unsigned)sheetIndex;	// 0x31d33b89
@end

