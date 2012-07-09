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
@property(retain) id dataAreaDxf;	// G=0x33b82a91; S=0x33b82ad9; converted property
@property(assign) unsigned dataAreaDxfIndex;	// G=0x33b82c19; S=0x33afd211; converted property
@property(retain) id headerRowDxf;	// G=0x33b82971; S=0x33b829b9; converted property
@property(assign) unsigned headerRowDxfIndex;	// G=0x33b82bd9; S=0x33b82be9; converted property
@property(retain) id name;	// G=0x33b82b21; S=0x33aeed85; converted property
@property(retain) id totalsRowDxf;	// G=0x33b82a01; S=0x33b82a49; converted property
@property(assign) unsigned totalsRowDxfIndex;	// G=0x33b82bf9; S=0x33b82c09; converted property
@property(retain) id totalsRowLabel;	// G=0x33b82b85; S=0x33b82b95; converted property
@property(retain) id uniqueName;	// G=0x33b82b31; S=0x33b82b41; converted property
+ (id)tableColumnWithResources:(id)resources;	// 0x33b82925
- (id)initWithResources:(id)resources;	// 0x33aeed01
// converted property getter: - (id)dataAreaDxf;	// 0x33b82a91
// converted property getter: - (unsigned)dataAreaDxfIndex;	// 0x33b82c19
- (void)dealloc;	// 0x33af6a25
// converted property getter: - (id)headerRowDxf;	// 0x33b82971
// converted property getter: - (unsigned)headerRowDxfIndex;	// 0x33b82bd9
// converted property getter: - (id)name;	// 0x33b82b21
// converted property setter: - (void)setDataAreaDxf:(id)dxf;	// 0x33b82ad9
// converted property setter: - (void)setDataAreaDxfIndex:(unsigned)index;	// 0x33afd211
// converted property setter: - (void)setHeaderRowDxf:(id)dxf;	// 0x33b829b9
// converted property setter: - (void)setHeaderRowDxfIndex:(unsigned)index;	// 0x33b82be9
// converted property setter: - (void)setName:(id)name;	// 0x33aeed85
// converted property setter: - (void)setTotalsRowDxf:(id)dxf;	// 0x33b82a49
// converted property setter: - (void)setTotalsRowDxfIndex:(unsigned)index;	// 0x33b82c09
// converted property setter: - (void)setTotalsRowLabel:(id)label;	// 0x33b82b95
// converted property setter: - (void)setUniqueName:(id)name;	// 0x33b82b41
// converted property getter: - (id)totalsRowDxf;	// 0x33b82a01
// converted property getter: - (unsigned)totalsRowDxfIndex;	// 0x33b82bf9
// converted property getter: - (id)totalsRowLabel;	// 0x33b82b85
// converted property getter: - (id)uniqueName;	// 0x33b82b31
@end
