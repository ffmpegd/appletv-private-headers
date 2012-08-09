/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDString, EDResources;

@interface EDTableColumn : NSObject {
	EDResources *mResources;	// 4 = 0x4
	unsigned mHeaderRowDxfIndex;	// 8 = 0x8
	unsigned mTotalsRowDxfIndex;	// 12 = 0xc
	unsigned mDataAreaDxfIndex;	// 16 = 0x10
	EDString *mName;	// 20 = 0x14
	EDString *mUniqueName;	// 24 = 0x18
	EDString *mTotalsRowLabel;	// 28 = 0x1c
}
@property(retain) id dataAreaDxf;	// G=0x31db13b1; S=0x31db13f9; converted property
@property(assign) unsigned dataAreaDxfIndex;	// G=0x31db1539; S=0x31d2bb31; converted property
@property(retain) id headerRowDxf;	// G=0x31db1291; S=0x31db12d9; converted property
@property(assign) unsigned headerRowDxfIndex;	// G=0x31db14f9; S=0x31db1509; converted property
@property(retain) id name;	// G=0x31db1441; S=0x31d1d6a5; converted property
@property(retain) id totalsRowDxf;	// G=0x31db1321; S=0x31db1369; converted property
@property(assign) unsigned totalsRowDxfIndex;	// G=0x31db1519; S=0x31db1529; converted property
@property(retain) id totalsRowLabel;	// G=0x31db14a5; S=0x31db14b5; converted property
@property(retain) id uniqueName;	// G=0x31db1451; S=0x31db1461; converted property
+ (id)tableColumnWithResources:(id)resources;	// 0x31db1245
- (id)initWithResources:(id)resources;	// 0x31d1d621
// converted property getter: - (id)dataAreaDxf;	// 0x31db13b1
// converted property getter: - (unsigned)dataAreaDxfIndex;	// 0x31db1539
- (void)dealloc;	// 0x31d25345
// converted property getter: - (id)headerRowDxf;	// 0x31db1291
// converted property getter: - (unsigned)headerRowDxfIndex;	// 0x31db14f9
// converted property getter: - (id)name;	// 0x31db1441
// converted property setter: - (void)setDataAreaDxf:(id)dxf;	// 0x31db13f9
// converted property setter: - (void)setDataAreaDxfIndex:(unsigned)index;	// 0x31d2bb31
// converted property setter: - (void)setHeaderRowDxf:(id)dxf;	// 0x31db12d9
// converted property setter: - (void)setHeaderRowDxfIndex:(unsigned)index;	// 0x31db1509
// converted property setter: - (void)setName:(id)name;	// 0x31d1d6a5
// converted property setter: - (void)setTotalsRowDxf:(id)dxf;	// 0x31db1369
// converted property setter: - (void)setTotalsRowDxfIndex:(unsigned)index;	// 0x31db1529
// converted property setter: - (void)setTotalsRowLabel:(id)label;	// 0x31db14b5
// converted property setter: - (void)setUniqueName:(id)name;	// 0x31db1461
// converted property getter: - (id)totalsRowDxf;	// 0x31db1321
// converted property getter: - (unsigned)totalsRowDxfIndex;	// 0x31db1519
// converted property getter: - (id)totalsRowLabel;	// 0x31db14a5
// converted property getter: - (id)uniqueName;	// 0x31db1451
@end
