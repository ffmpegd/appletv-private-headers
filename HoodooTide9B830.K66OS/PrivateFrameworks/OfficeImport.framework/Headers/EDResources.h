/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDFontsCollection, EDColorsCollection, EDTableStylesCollection, EDContentFormatsCollection, EDStylesCollection, EDCollection, EDLinksCollection;

__attribute__((visibility("hidden")))
@interface EDResources : NSObject {
@private
	EDCollection *mStrings;	// 4 = 0x4
	EDContentFormatsCollection *mContentFormats;	// 8 = 0x8
	EDFontsCollection *mFonts;	// 12 = 0xc
	EDCollection *mAlignmentInfos;	// 16 = 0x10
	EDStylesCollection *mStyles;	// 20 = 0x14
	EDColorsCollection *mColors;	// 24 = 0x18
	EDColorsCollection *mThemes;	// 28 = 0x1c
	EDCollection *mNames;	// 32 = 0x20
	EDLinksCollection *mLinks;	// 36 = 0x24
	EDCollection *mBorders;	// 40 = 0x28
	EDCollection *mBorder;	// 44 = 0x2c
	EDCollection *mFills;	// 48 = 0x30
	EDCollection *mDifferentialStyles;	// 52 = 0x34
	EDTableStylesCollection *mTableStyles;	// 56 = 0x38
}
@property(retain) id colors;	// G=0x311e156d; S=0x311c568d; converted property
@property(retain) id themes;	// G=0x31286165; S=0x312c2829; converted property
- (id)initWithStringOptimization:(bool)stringOptimization;	// 0x311bbce5
- (id)alignmentInfos;	// 0x311c3511
- (id)border;	// 0x311c3a89
- (id)borders;	// 0x311c3d99
// converted property getter: - (id)colors;	// 0x311e156d
- (id)contentFormats;	// 0x311c0731
- (void)dealloc;	// 0x311f59cd
- (id)differentialStyles;	// 0x311f2ca9
- (id)fills;	// 0x311c40bd
- (id)fonts;	// 0x311bf189
- (id)links;	// 0x311c842d
- (id)names;	// 0x312dbdfd
// converted property setter: - (void)setColors:(id)colors;	// 0x311c568d
// converted property setter: - (void)setThemes:(id)themes;	// 0x312c2829
- (id)strings;	// 0x311c87d9
- (id)styles;	// 0x311c2045
- (id)tableStyles;	// 0x312889e9
// converted property getter: - (id)themes;	// 0x31286165
@end
