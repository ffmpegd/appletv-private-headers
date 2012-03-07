/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCDDelayedNode.h"

@class NSMutableArray, EDPageSetup, ESDContainer, EDWarnings, EDHeaderFooter, EDColorReference, EDString, SFUPointerKeyDictionary, EDProcessors, EDWorkbook;

__attribute__((visibility("hidden")))
@interface EDSheet : OCDDelayedNode {
@private
	EDWorkbook *mWorkbook;	// 12 = 0xc
	EDString *mName;	// 16 = 0x10
	bool mHidden;	// 20 = 0x14
	bool mDisplayFormulas;	// 21 = 0x15
	bool mDisplayGridlines;	// 22 = 0x16
	bool mIsDialogSheet;	// 23 = 0x17
	EDColorReference *mDefaultGridlineColorReference;	// 24 = 0x18
	EDHeaderFooter *mHeaderFooter;	// 28 = 0x1c
	EDPageSetup *mPageSetup;	// 32 = 0x20
	NSMutableArray *mDrawables;	// 36 = 0x24
	SFUPointerKeyDictionary *mTextBoxMap;	// 40 = 0x28
	SFUPointerKeyDictionary *mCommentMap;	// 44 = 0x2c
	EDProcessors *mProcessors;	// 48 = 0x30
	EDWarnings *mWarnings;	// 52 = 0x34
	ESDContainer *mEscherDrawing;	// 56 = 0x38
}
@property(retain) id defaultGridlineColor;	// G=0x30e34071; S=0x30e34091; converted property
@property(retain) id defaultGridlineColorReference;	// G=0x30e33fd5; S=0x30cc9069; converted property
@property(assign, getter=isDisplayFormulas) bool displayFormulas;	// G=0x30cdaed5; S=0x30cd6b61; converted property
@property(assign, getter=isDisplayGridlines) bool displayGridlines;	// G=0x30cdc1b1; S=0x30cd6b71; converted property
@property(retain) id escherDrawing;	// G=0x30e33fc5; S=0x30e3422d; converted property
@property(retain) id headerFooter;	// G=0x30e33f91; S=0x30cce679; converted property
@property(assign, getter=isHidden) bool hidden;	// G=0x30cc9c31; S=0x30cc90f9; converted property
@property(assign, nonatomic) bool isDialogSheet;	// G=0x30e33fb1; S=0x30ccdd79; @synthesize=mIsDialogSheet
@property(retain) id name;	// G=0x30cda35d; S=0x30cc90b1; converted property
@property(retain) id pageSetup;	// G=0x30d8aee9; S=0x30cce899; converted property
+ (id)sheetWithWorkbook:(id)workbook;	// 0x30e341e1
- (id)initWithWorkbook:(id)workbook;	// 0x30cc8cc1
- (void)addDrawable:(id)drawable;	// 0x30cd574d
- (void)applyProcessors;	// 0x30cd9315
- (void)dealloc;	// 0x30cf312d
// converted property getter: - (id)defaultGridlineColor;	// 0x30e34071
// converted property getter: - (id)defaultGridlineColorReference;	// 0x30e33fd5
- (void)doneWithNonRowContent;	// 0x30e33fe5
- (id)drawableAtIndex:(unsigned)index;	// 0x30ce7f75
- (unsigned)drawableCount;	// 0x30cdb3fd
- (id)drawableEnumerator;	// 0x30e3426d
- (id)drawables;	// 0x30e33fa1
- (id)edCommentForShape:(id)shape;	// 0x30e34191
- (id)edTextBoxForShape:(id)shape;	// 0x30e34141
// converted property getter: - (id)escherDrawing;	// 0x30e33fc5
// converted property getter: - (id)headerFooter;	// 0x30e33f91
// declared property getter: - (bool)isDialogSheet;	// 0x30e33fb1
// converted property getter: - (bool)isDisplayFormulas;	// 0x30cdaed5
// converted property getter: - (bool)isDisplayGridlines;	// 0x30cdc1b1
// converted property getter: - (bool)isHidden;	// 0x30cc9c31
// converted property getter: - (id)name;	// 0x30cda35d
// converted property getter: - (id)pageSetup;	// 0x30d8aee9
- (id)processors;	// 0x30ccd3b9
- (void)reduceMemoryIfPossible;	// 0x30e33fc1
- (void)removeDrawableAtIndex:(unsigned)index;	// 0x30e3411d
// converted property setter: - (void)setDefaultGridlineColor:(id)color;	// 0x30e34091
// converted property setter: - (void)setDefaultGridlineColorReference:(id)reference;	// 0x30cc9069
// converted property setter: - (void)setDisplayFormulas:(bool)formulas;	// 0x30cd6b61
// converted property setter: - (void)setDisplayGridlines:(bool)gridlines;	// 0x30cd6b71
- (void)setEDComment:(id)comment forShape:(id)shape;	// 0x30e341b5
- (void)setEDTextBox:(id)box forShape:(id)shape;	// 0x30e34165
// converted property setter: - (void)setEscherDrawing:(id)drawing;	// 0x30e3422d
// converted property setter: - (void)setHeaderFooter:(id)footer;	// 0x30cce679
// converted property setter: - (void)setHidden:(bool)hidden;	// 0x30cc90f9
// declared property setter: - (void)setIsDialogSheet:(bool)sheet;	// 0x30ccdd79
// converted property setter: - (void)setName:(id)name;	// 0x30cc90b1
// converted property setter: - (void)setPageSetup:(id)setup;	// 0x30cce899
- (void)setup;	// 0x30cc8ed9
- (void)teardown;	// 0x30cf35a1
- (id)warnings;	// 0x30debde5
- (id)workbook;	// 0x30dba535
@end

