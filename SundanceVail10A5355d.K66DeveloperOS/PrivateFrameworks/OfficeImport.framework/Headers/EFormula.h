/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class EDFormula, NSString, EFTableData;
@protocol EFHelper;

@interface EFormula : NSObject {
	id<EFHelper> mHelper;	// 4 = 0x4
	EFLexer *mYylex;	// 8 = 0x8
	Class mFormulaClass;	// 12 = 0xc
	EDFormula *mFormula;	// 16 = 0x10
	EFTableData *mTableData;	// 20 = 0x14
	NSString *mErrMsg;	// 24 = 0x18
}
@property(assign) Class formulaClass;	// G=0x31d0adc1; S=0x31d08161; converted property
@property(retain) id formulaHelper;	// G=0x31d0b755; S=0x31d08171; converted property
@property(retain) id tableData;	// G=0x31d58f1d; S=0x31d58f2d; converted property
+ (id)singletonEFormula;	// 0x31d08105
+ (id)stringToFormula:(id)formula formulaHelper:(id)helper formulaClass:(Class)aClass;	// 0x31d080a9
- (void)dealloc;	// 0x31d0bd89
// converted property getter: - (Class)formulaClass;	// 0x31d0adc1
// converted property getter: - (id)formulaHelper;	// 0x31d0b755
- (unsigned)resolveFirstSheet:(id)sheet lastSheet:(id)sheet2;	// 0x31d58efd
- (unsigned)resolveName:(const char *)name;	// 0x31d21309
- (unsigned)resolveSheet:(const char *)sheet isCurrentSheet:(BOOL *)sheet2;	// 0x31d21745
- (id)resolveTable:(const char *)table sheetIndex:(unsigned *)index;	// 0x31d214b1
- (void)setFormula:(id)formula;	// 0x31d0b0dd
// converted property setter: - (void)setFormulaClass:(Class)aClass;	// 0x31d08161
// converted property setter: - (void)setFormulaHelper:(id)helper;	// 0x31d08171
// converted property setter: - (void)setTableData:(id)data;	// 0x31d58f2d
- (id)stringToTokens:(id)tokens;	// 0x31d081ad
// converted property getter: - (id)tableData;	// 0x31d58f1d
@end

