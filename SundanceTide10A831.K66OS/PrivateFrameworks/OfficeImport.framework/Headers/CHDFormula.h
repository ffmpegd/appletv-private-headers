/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDFormula.h"

@class EDWorkbook, EDReferenceCollection;

@interface CHDFormula : EDFormula {
	EDReferenceCollection *mReferences;	// 8 = 0x8
	EDWorkbook *mWorkbook;	// 12 = 0xc
}
@property(retain) id references;	// G=0x36b42165; S=0x36b42629; converted property
+ (id)formulaWithReference:(id)reference;	// 0x36b4cc1d
+ (id)formulaWithReferences:(id)references;	// 0x36bbcf69
- (id)initWithReference:(id)reference;	// 0x36b4cc69
- (id)initWithReferences:(id)references;	// 0x36bbcf29
- (id)initWithWorkbook:(id)workbook;	// 0x36bbcee9
- (unsigned)countOfCellsBeingReferenced;	// 0x36b4b3dd
- (void)dealloc;	// 0x36b4cfe5
- (bool)isConstantStringFormula;	// 0x36bbd319
- (void)prepareTokens;	// 0x36bbcfb5
// converted property getter: - (id)references;	// 0x36b42165
- (id)referencesFromFormula;	// 0x36b421dd
// converted property setter: - (void)setReferences:(id)references;	// 0x36b42629
- (void)setWorkbook:(id)workbook;	// 0x36b3e819
@end

