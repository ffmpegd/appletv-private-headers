/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPRegion.h"

@class CPListItem;

@interface CPParagraph : CPRegion {
	BOOL noIndentation;	// 68 = 0x44
	BOOL below;	// 69 = 0x45
	unsigned alignment;	// 72 = 0x48
	BOOL hasDropCap;	// 76 = 0x4c
	id flowProperties;	// 80 = 0x50
	CPListItem *listItem;	// 84 = 0x54
	float preformatWidth;	// 88 = 0x58
}
@property(assign) unsigned alignment;	// G=0x3260cf95; S=0x3260cfa5; converted property
@property(assign) BOOL below;	// G=0x3260cf85; S=0x3260cf75; converted property
@property(retain) id flowProperties;	// G=0x3260cecd; S=0x3260cedd; converted property
@property(assign) BOOL hasDropCap;	// G=0x3260cf55; S=0x3260cf65; converted property
@property(assign) BOOL isImageRegion;	// G=0x3260cf2d; S=0x3260d4d9; converted property
@property(assign) BOOL isTextRegion;	// G=0x3260cf1d; S=0x3260d561; converted property
@property(retain, nonatomic) CPListItem *listItem;	// G=0x3260cfb5; S=0x3260d02d; @synthesize
@property(assign) BOOL noIndentation;	// G=0x3260cf45; S=0x3260cf35; converted property
- (id)init;	// 0x3260cfc5
- (void)accept:(id)accept;	// 0x3260d625
// converted property getter: - (unsigned)alignment;	// 0x3260cf95
// converted property getter: - (BOOL)below;	// 0x3260cf85
- (id)copyWithZone:(NSZone *)zone;	// 0x3260d63d
- (void)dealloc;	// 0x3260d679
- (void)explode;	// 0x3260d3a5
// converted property getter: - (id)flowProperties;	// 0x3260cecd
// converted property getter: - (BOOL)hasDropCap;	// 0x3260cf55
- (unsigned)index;	// 0x3260d5e9
- (BOOL)isBoxRegion;	// 0x3260cf21
- (BOOL)isGraphicalRegion;	// 0x3260cf25
// converted property getter: - (BOOL)isImageRegion;	// 0x3260cf2d
- (BOOL)isListItemRegion;	// 0x3260cf05
- (BOOL)isParagraphRegion;	// 0x3260ceed
- (BOOL)isPreformattedWithUnitWidth:(float *)unitWidth;	// 0x3260d055
- (BOOL)isRowRegion;	// 0x3260cf29
- (BOOL)isShapeRegion;	// 0x3260cf31
// converted property getter: - (BOOL)isTextRegion;	// 0x3260cf1d
// declared property getter: - (id)listItem;	// 0x3260cfb5
// converted property getter: - (BOOL)noIndentation;	// 0x3260cf45
- (CGRect)reducedBounds;	// 0x3260d33d
- (float)selectionBottom;	// 0x3260d2d1
// converted property setter: - (void)setAlignment:(unsigned)alignment;	// 0x3260cfa5
// converted property setter: - (void)setBelow:(BOOL)below;	// 0x3260cf75
// converted property setter: - (void)setFlowProperties:(id)properties;	// 0x3260cedd
// converted property setter: - (void)setHasDropCap:(BOOL)cap;	// 0x3260cf65
// converted property setter: - (void)setIsImageRegion:(BOOL)region;	// 0x3260d4d9
// converted property setter: - (void)setIsTextRegion:(BOOL)region;	// 0x3260d561
// declared property setter: - (void)setListItem:(id)item;	// 0x3260d02d
// converted property setter: - (void)setNoIndentation:(BOOL)indentation;	// 0x3260cf35
@end

