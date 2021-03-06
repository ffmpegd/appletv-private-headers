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
@property(assign) unsigned alignment;	// G=0x34836f95; S=0x34836fa5; converted property
@property(assign) BOOL below;	// G=0x34836f85; S=0x34836f75; converted property
@property(retain) id flowProperties;	// G=0x34836ecd; S=0x34836edd; converted property
@property(assign) BOOL hasDropCap;	// G=0x34836f55; S=0x34836f65; converted property
@property(assign) BOOL isImageRegion;	// G=0x34836f2d; S=0x348374d9; converted property
@property(assign) BOOL isTextRegion;	// G=0x34836f1d; S=0x34837561; converted property
@property(retain, nonatomic) CPListItem *listItem;	// G=0x34836fb5; S=0x3483702d; @synthesize
@property(assign) BOOL noIndentation;	// G=0x34836f45; S=0x34836f35; converted property
- (id)init;	// 0x34836fc5
- (void)accept:(id)accept;	// 0x34837625
// converted property getter: - (unsigned)alignment;	// 0x34836f95
// converted property getter: - (BOOL)below;	// 0x34836f85
- (id)copyWithZone:(NSZone *)zone;	// 0x3483763d
- (void)dealloc;	// 0x34837679
- (void)explode;	// 0x348373a5
// converted property getter: - (id)flowProperties;	// 0x34836ecd
// converted property getter: - (BOOL)hasDropCap;	// 0x34836f55
- (unsigned)index;	// 0x348375e9
- (BOOL)isBoxRegion;	// 0x34836f21
- (BOOL)isGraphicalRegion;	// 0x34836f25
// converted property getter: - (BOOL)isImageRegion;	// 0x34836f2d
- (BOOL)isListItemRegion;	// 0x34836f05
- (BOOL)isParagraphRegion;	// 0x34836eed
- (BOOL)isPreformattedWithUnitWidth:(float *)unitWidth;	// 0x34837055
- (BOOL)isRowRegion;	// 0x34836f29
- (BOOL)isShapeRegion;	// 0x34836f31
// converted property getter: - (BOOL)isTextRegion;	// 0x34836f1d
// declared property getter: - (id)listItem;	// 0x34836fb5
// converted property getter: - (BOOL)noIndentation;	// 0x34836f45
- (CGRect)reducedBounds;	// 0x3483733d
- (float)selectionBottom;	// 0x348372d1
// converted property setter: - (void)setAlignment:(unsigned)alignment;	// 0x34836fa5
// converted property setter: - (void)setBelow:(BOOL)below;	// 0x34836f75
// converted property setter: - (void)setFlowProperties:(id)properties;	// 0x34836edd
// converted property setter: - (void)setHasDropCap:(BOOL)cap;	// 0x34836f65
// converted property setter: - (void)setIsImageRegion:(BOOL)region;	// 0x348374d9
// converted property setter: - (void)setIsTextRegion:(BOOL)region;	// 0x34837561
// declared property setter: - (void)setListItem:(id)item;	// 0x3483702d
// converted property setter: - (void)setNoIndentation:(BOOL)indentation;	// 0x34836f35
@end

