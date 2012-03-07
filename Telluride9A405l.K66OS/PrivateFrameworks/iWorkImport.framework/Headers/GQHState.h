/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "iWorkImport-Structs.h"

@class GQHTableState, GQHXML, GQSDocument;
@protocol GQHContext;

__attribute__((visibility("hidden")))
@interface GQHState : NSObject {
@private
	GQHXML *mHtmlDoc;	// 4 = 0x4
	CGSize mScale;	// 8 = 0x8
	CFStringRef mStyleData;	// 16 = 0x10
	GQHTableState *mTableState;	// 20 = 0x14
	GQSDocument *mProcessorState;	// 24 = 0x18
	CFDictionaryRef mStyleIndexes;	// 28 = 0x1c
	CFDictionaryRef mStyleNameMap;	// 32 = 0x20
	CFArrayRef mImplicitStyles;	// 36 = 0x24
	int mColoredBackgroundLayerCount;	// 40 = 0x28
	int mMultiColumnedDepth;	// 44 = 0x2c
	CFArrayRef mGraphicPropertiesStack;	// 48 = 0x30
	int mParagraphCount;	// 52 = 0x34
	int mParagraphIndex;	// 56 = 0x38
	int mCachedCellStyleIndex;	// 60 = 0x3c
	CFDictionaryRef mCachedTableStyles;	// 64 = 0x40
	int mCachedTextStyleIndex;	// 68 = 0x44
	CFDictionaryRef mCachedTextStyles;	// 72 = 0x48
	int mInlineStyleIndex;	// 76 = 0x4c
	CFDictionaryRef mInlineStyles;	// 80 = 0x50
	CFDictionaryRef mColorStrings;	// 84 = 0x54
	id<GQHContext> mShapeContext;	// 88 = 0x58
	int mOutlineLevel;	// 92 = 0x5c
	int mOutlineStyleType;	// 96 = 0x60
	int mShapeIDCounter;	// 100 = 0x64
	unsigned mTextScale;	// 104 = 0x68
}
@property(assign) BOOL coloredBackground;	// G=0x342676a1; S=0x34267f6d; converted property
@property(assign) BOOL multiColumned;	// G=0x34267381; S=0x34267eb1; converted property
@property(assign) int outlineLevel;	// G=0x342673ed; S=0x342673fd; converted property
@property(assign) int outlineStyleType;	// G=0x34267401; S=0x34267411; converted property
@property(assign) int paragraphCount;	// G=0x342673a9; S=0x34267399; converted property
@property(assign) int paragraphIndex;	// G=0x342673c9; S=0x342673b9; converted property
@property(assign) CGSize scale;	// G=0x34267335; S=0x34267321; converted property
@property(assign) unsigned textScale;	// G=0x34267415; S=0x34267425; converted property
- (id)initWithState:(id)state;	// 0x34267591
- (id)initWithState:(id)state documentSize:(CGSize)size;	// 0x342675b1
- (id)initWithState:(id)state needIndexFile:(BOOL)file documentSize:(CGSize)size;	// 0x34267711
- (CFStringRef)addCacheForCellStyle:(id)cellStyle fillStyle:(id)style cellClass:(Class)aClass vectorStyles:(id *)styles groupLevel:(unsigned short)level hasFormula:(BOOL)formula baseClassString:(CFStringRef)string cssCachedStyle:(id)style8;	// 0x34267cc9
- (CFStringRef)addCachedClassStringForTextStyle:(id)textStyle implicitStyle:(id)style isColoredBackground:(BOOL)background outlineLevel:(int)level outlineType:(int)type isSpan:(BOOL)span baseClassString:(CFStringRef)string cssCachedStyle:(id)style8;	// 0x34267b99
- (void)addCachedStyle:(CFStringRef)style;	// 0x342675f9
- (void)addStyle:(CFStringRef)style className:(CFStringRef)name srcStyle:(id)style3;	// 0x34268181
- (void)addedDrawableWithBounds:(CGRect)bounds;	// 0x3426736d
- (BOOL)allowInlineWrap;	// 0x3426744d
- (CFStringRef)cachedClassStringForCellStyle:(id)cellStyle fillStyle:(id)style cellClass:(Class)aClass vectorStyles:(id *)styles groupLevel:(unsigned short)level hasFormula:(BOOL)formula;	// 0x34267dd5
- (CFStringRef)cachedClassStringForTextStyle:(id)textStyle implicitStyle:(id)style isColoredBackground:(BOOL)background outlineLevel:(int)level outlineType:(int)type isSpan:(BOOL)span;	// 0x34267c8d
- (CFStringRef)className:(id)name;	// 0x342680cd
// converted property getter: - (BOOL)coloredBackground;	// 0x342676a1
- (CFStringRef)createStyleName:(id)name type:(const char *)type;	// 0x34268099
- (CFStringRef)createUniqueShapeId:(const char *)anId;	// 0x34267a09
- (CFStringRef)cssZOrderClassForDrawable:(id)drawable;	// 0x3426766d
- (CFStringRef)cssZOrderClassForDrawableUid:(const char *)drawableUid;	// 0x34267375
- (void)dealloc;	// 0x342681e5
- (BOOL)drawablesNeedCssZOrdering;	// 0x34267371
- (void)enterGraphicObject;	// 0x34267e69
- (BOOL)finishMainHtml;	// 0x3426761d
- (CFStringRef)getColorString:(id)string;	// 0x34267a75
- (id)htmlDoc;	// 0x34267311
- (id)implicitStyle;	// 0x34268055
- (int)indexForStyle:(const char *)style;	// 0x34268319
- (void)invalidateTextScale;	// 0x34267435
- (void)leaveGraphicObject;	// 0x34267e19
- (CFStringRef)makeInlineStyle:(CFStringRef)style;	// 0x342675d5
- (CFStringRef)makeInlineStyle:(CFStringRef)style inDocument:(id)document;	// 0x342680e1
// converted property getter: - (BOOL)multiColumned;	// 0x34267381
- (BOOL)needAbsolutelyPositionedTables;	// 0x34267449
// converted property getter: - (int)outlineLevel;	// 0x342673ed
// converted property getter: - (int)outlineStyleType;	// 0x34267401
// converted property getter: - (int)paragraphCount;	// 0x342673a9
// converted property getter: - (int)paragraphIndex;	// 0x342673c9
- (void)popImplicitStyle;	// 0x34268029
- (id)processorState;	// 0x3426735d
- (void)pushImplicitStyle:(id)style;	// 0x34268085
// converted property getter: - (CGSize)scale;	// 0x34267335
// converted property setter: - (void)setColoredBackground:(BOOL)background;	// 0x34267f6d
// converted property setter: - (void)setMultiColumned:(BOOL)columned;	// 0x34267eb1
// converted property setter: - (void)setOutlineLevel:(int)level;	// 0x342673fd
// converted property setter: - (void)setOutlineStyleType:(int)type;	// 0x34267411
// converted property setter: - (void)setParagraphCount:(int)count;	// 0x34267399
// converted property setter: - (void)setParagraphIndex:(int)index;	// 0x342673b9
// converted property setter: - (void)setScale:(CGSize)scale;	// 0x34267321
// converted property setter: - (void)setTextScale:(unsigned)scale;	// 0x34267425
- (id)shapeContext;	// 0x342673d9
- (BOOL)shouldMapLinkWithUrl:(CFStringRef)url;	// 0x34267a4d
- (id)tableState;	// 0x3426734d
// converted property getter: - (unsigned)textScale;	// 0x34267415
- (BOOL)useOutline;	// 0x342673e9
@end
