/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDCollection;

__attribute__((visibility("hidden")))
@interface EDPivotField : NSObject {
@private
	int mAxis;	// 4 = 0x4
	bool mCompact;	// 8 = 0x8
	bool mDataField;	// 9 = 0x9
	bool mShowDefaultSubTotal;	// 10 = 0xa
	bool mInsertBlankRow;	// 11 = 0xb
	bool mOutlineItems;	// 12 = 0xc
	bool mShowAllItems;	// 13 = 0xd
	bool mSubtotalTop;	// 14 = 0xe
	unsigned mNumFmtId;	// 16 = 0x10
	EDCollection *mPivotFieldItems;	// 20 = 0x14
}
@property(assign) int axis;	// G=0x32a6e5d1; S=0x32a28665; converted property
@property(assign) bool compact;	// G=0x32a6e551; S=0x32a28675; converted property
@property(assign) bool dataField;	// G=0x32a6e561; S=0x32a28685; converted property
@property(assign) bool insertBlankRow;	// G=0x32a6e581; S=0x32a286a5; converted property
@property(assign) unsigned numFmtId;	// G=0x32a6e5c1; S=0x32a285e9; converted property
@property(assign) bool outlineItems;	// G=0x32a6e591; S=0x32a286b5; converted property
@property(assign) bool showAllItems;	// G=0x32a6e5a1; S=0x32a286c5; converted property
@property(assign) bool showDefaultSubTotal;	// G=0x32a6e571; S=0x32a28695; converted property
@property(assign) bool subtotalTop;	// G=0x32a6e5b1; S=0x32a286d5; converted property
+ (id)pivotField;	// 0x32a284bd
- (id)init;	// 0x32a28505
// converted property getter: - (int)axis;	// 0x32a6e5d1
// converted property getter: - (bool)compact;	// 0x32a6e551
// converted property getter: - (bool)dataField;	// 0x32a6e561
- (void)dealloc;	// 0x32a2af61
// converted property getter: - (bool)insertBlankRow;	// 0x32a6e581
// converted property getter: - (unsigned)numFmtId;	// 0x32a6e5c1
// converted property getter: - (bool)outlineItems;	// 0x32a6e591
- (id)pivotFieldItems;	// 0x32a286e5
// converted property setter: - (void)setAxis:(int)axis;	// 0x32a28665
// converted property setter: - (void)setCompact:(bool)compact;	// 0x32a28675
// converted property setter: - (void)setDataField:(bool)field;	// 0x32a28685
// converted property setter: - (void)setInsertBlankRow:(bool)row;	// 0x32a286a5
// converted property setter: - (void)setNumFmtId:(unsigned)anId;	// 0x32a285e9
// converted property setter: - (void)setOutlineItems:(bool)items;	// 0x32a286b5
// converted property setter: - (void)setShowAllItems:(bool)items;	// 0x32a286c5
// converted property setter: - (void)setShowDefaultSubTotal:(bool)total;	// 0x32a28695
// converted property setter: - (void)setSubtotalTop:(bool)top;	// 0x32a286d5
// converted property getter: - (bool)showAllItems;	// 0x32a6e5a1
// converted property getter: - (bool)showDefaultSubTotal;	// 0x32a6e571
// converted property getter: - (bool)subtotalTop;	// 0x32a6e5b1
@end
