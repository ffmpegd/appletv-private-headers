/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import <NSObject.h> // Unknown library

@class UIPDFPageView, UIPDFDocument, CALayer;

@interface UIPDFPageContentDelegate : NSObject {
	UIPDFDocument *_document;	// 4 = 0x4
	unsigned _pageIndex;	// 8 = 0x8
	UIPDFPageView *_view;	// 12 = 0xc
	CGRect _bounds;	// 16 = 0x10
	CGAffineTransform _transform;	// 32 = 0x20
	CGColorRef _white;	// 56 = 0x38
	CGColorRef _highlightColor;	// 60 = 0x3c
	CALayer *_owner;	// 64 = 0x40
	CGRect _box;	// 68 = 0x44
	unsigned _pageRotation;	// 84 = 0x54
	int _lock;	// 88 = 0x58
	unsigned _threadCount;	// 92 = 0x5c
	BOOL _isCancelled;	// 96 = 0x60
}
@property(assign) CGRect box;	// G=0x33890fdd; S=0x33891001; @synthesize=_box
@property(retain) UIPDFDocument *document;	// G=0x33891091; S=0x338910a5; @synthesize=_document
@property(assign) CGColorRef highlightColor;	// G=0x33891065; S=0x33891079; @synthesize=_highlightColor
@property(assign) BOOL isCancelled;	// G=0x338907f5; S=0x33890829; @dynamic
@property(assign) CALayer *owner;	// G=0x33890fb1; S=0x33890fc5; @synthesize=_owner
@property(assign) unsigned pageIndex;	// G=0x338910c9; S=0x338910dd; @synthesize=_pageIndex
@property(assign) unsigned pageRotation;	// G=0x33891039; S=0x3389104d; @synthesize=_pageRotation
@property(readonly, assign) CGAffineTransform transform;	// G=0x338910f5; @synthesize=_transform
@property(assign) UIPDFPageView *view;	// G=0x3389076d; S=0x338907c1; @dynamic
- (id)init;	// 0x33890629
- (void)addRect:(CGRect)rect toPath:(CGPathRef)path transform:(CGAffineTransform *)transform view:(id)view owner:(id)owner;	// 0x33890b95
// declared property getter: - (CGRect)box;	// 0x33890fdd
- (void)computeTransform;	// 0x338906c1
- (void)dealloc;	// 0x3389066d
// declared property getter: - (id)document;	// 0x33891091
- (void)drawLayer:(id)layer inContext:(CGContextRef)context;	// 0x3389085d
- (void)drawSelectionLayer:(id)layer inContext:(CGContextRef)context;	// 0x33890de1
- (void)drawSelectionLayerBlockMode:(id)mode inContext:(CGContextRef)context;	// 0x33890a79
// declared property getter: - (CGColorRef)highlightColor;	// 0x33891065
// declared property getter: - (BOOL)isCancelled;	// 0x338907f5
// declared property getter: - (id)owner;	// 0x33890fb1
- (BOOL)pageHasSelection;	// 0x33890d99
// declared property getter: - (unsigned)pageIndex;	// 0x338910c9
// declared property getter: - (unsigned)pageRotation;	// 0x33891039
// declared property setter: - (void)setBox:(CGRect)box;	// 0x33891001
// declared property setter: - (void)setDocument:(id)document;	// 0x338910a5
// declared property setter: - (void)setHighlightColor:(CGColorRef)color;	// 0x33891079
// declared property setter: - (void)setIsCancelled:(BOOL)cancelled;	// 0x33890829
// declared property setter: - (void)setOwner:(id)owner;	// 0x33890fc5
// declared property setter: - (void)setPageIndex:(unsigned)index;	// 0x338910dd
// declared property setter: - (void)setPageRotation:(unsigned)rotation;	// 0x3389104d
// declared property setter: - (void)setView:(id)view;	// 0x338907c1
// declared property getter: - (CGAffineTransform)transform;	// 0x338910f5
// declared property getter: - (id)view;	// 0x3389076d
@end

