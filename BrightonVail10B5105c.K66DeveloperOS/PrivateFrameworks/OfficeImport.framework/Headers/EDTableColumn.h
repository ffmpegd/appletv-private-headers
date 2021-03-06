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
@property(retain) id dataAreaDxf;	// G=0x37ad3461; S=0x37ad34a9; converted property
@property(assign) unsigned dataAreaDxfIndex;	// G=0x37ad35e9; S=0x37a4db51; converted property
@property(retain) id headerRowDxf;	// G=0x37ad3341; S=0x37ad3389; converted property
@property(assign) unsigned headerRowDxfIndex;	// G=0x37ad35a9; S=0x37ad35b9; converted property
@property(retain) id name;	// G=0x37ad34f1; S=0x37a3f6c5; converted property
@property(retain) id totalsRowDxf;	// G=0x37ad33d1; S=0x37ad3419; converted property
@property(assign) unsigned totalsRowDxfIndex;	// G=0x37ad35c9; S=0x37ad35d9; converted property
@property(retain) id totalsRowLabel;	// G=0x37ad3555; S=0x37ad3565; converted property
@property(retain) id uniqueName;	// G=0x37ad3501; S=0x37ad3511; converted property
+ (id)tableColumnWithResources:(id)resources;	// 0x37ad32f5
- (id)initWithResources:(id)resources;	// 0x37a3f641
// converted property getter: - (id)dataAreaDxf;	// 0x37ad3461
// converted property getter: - (unsigned)dataAreaDxfIndex;	// 0x37ad35e9
- (void)dealloc;	// 0x37a47365
// converted property getter: - (id)headerRowDxf;	// 0x37ad3341
// converted property getter: - (unsigned)headerRowDxfIndex;	// 0x37ad35a9
// converted property getter: - (id)name;	// 0x37ad34f1
// converted property setter: - (void)setDataAreaDxf:(id)dxf;	// 0x37ad34a9
// converted property setter: - (void)setDataAreaDxfIndex:(unsigned)index;	// 0x37a4db51
// converted property setter: - (void)setHeaderRowDxf:(id)dxf;	// 0x37ad3389
// converted property setter: - (void)setHeaderRowDxfIndex:(unsigned)index;	// 0x37ad35b9
// converted property setter: - (void)setName:(id)name;	// 0x37a3f6c5
// converted property setter: - (void)setTotalsRowDxf:(id)dxf;	// 0x37ad3419
// converted property setter: - (void)setTotalsRowDxfIndex:(unsigned)index;	// 0x37ad35d9
// converted property setter: - (void)setTotalsRowLabel:(id)label;	// 0x37ad3565
// converted property setter: - (void)setUniqueName:(id)name;	// 0x37ad3511
// converted property getter: - (id)totalsRowDxf;	// 0x37ad33d1
// converted property getter: - (unsigned)totalsRowDxfIndex;	// 0x37ad35c9
// converted property getter: - (id)totalsRowLabel;	// 0x37ad3555
// converted property getter: - (id)uniqueName;	// 0x37ad3501
@end

