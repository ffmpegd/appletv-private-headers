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
@property(retain) id dataAreaDxf;	// G=0x3712a461; S=0x3712a4a9; converted property
@property(assign) unsigned dataAreaDxfIndex;	// G=0x3712a5e9; S=0x370a4b51; converted property
@property(retain) id headerRowDxf;	// G=0x3712a341; S=0x3712a389; converted property
@property(assign) unsigned headerRowDxfIndex;	// G=0x3712a5a9; S=0x3712a5b9; converted property
@property(retain) id name;	// G=0x3712a4f1; S=0x370966c5; converted property
@property(retain) id totalsRowDxf;	// G=0x3712a3d1; S=0x3712a419; converted property
@property(assign) unsigned totalsRowDxfIndex;	// G=0x3712a5c9; S=0x3712a5d9; converted property
@property(retain) id totalsRowLabel;	// G=0x3712a555; S=0x3712a565; converted property
@property(retain) id uniqueName;	// G=0x3712a501; S=0x3712a511; converted property
+ (id)tableColumnWithResources:(id)resources;	// 0x3712a2f5
- (id)initWithResources:(id)resources;	// 0x37096641
// converted property getter: - (id)dataAreaDxf;	// 0x3712a461
// converted property getter: - (unsigned)dataAreaDxfIndex;	// 0x3712a5e9
- (void)dealloc;	// 0x3709e365
// converted property getter: - (id)headerRowDxf;	// 0x3712a341
// converted property getter: - (unsigned)headerRowDxfIndex;	// 0x3712a5a9
// converted property getter: - (id)name;	// 0x3712a4f1
// converted property setter: - (void)setDataAreaDxf:(id)dxf;	// 0x3712a4a9
// converted property setter: - (void)setDataAreaDxfIndex:(unsigned)index;	// 0x370a4b51
// converted property setter: - (void)setHeaderRowDxf:(id)dxf;	// 0x3712a389
// converted property setter: - (void)setHeaderRowDxfIndex:(unsigned)index;	// 0x3712a5b9
// converted property setter: - (void)setName:(id)name;	// 0x370966c5
// converted property setter: - (void)setTotalsRowDxf:(id)dxf;	// 0x3712a419
// converted property setter: - (void)setTotalsRowDxfIndex:(unsigned)index;	// 0x3712a5d9
// converted property setter: - (void)setTotalsRowLabel:(id)label;	// 0x3712a565
// converted property setter: - (void)setUniqueName:(id)name;	// 0x3712a511
// converted property getter: - (id)totalsRowDxf;	// 0x3712a3d1
// converted property getter: - (unsigned)totalsRowDxfIndex;	// 0x3712a5c9
// converted property getter: - (id)totalsRowLabel;	// 0x3712a555
// converted property getter: - (id)uniqueName;	// 0x3712a501
@end
