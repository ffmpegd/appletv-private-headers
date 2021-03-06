/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library
#import "CorePDF-Structs.h"

@class NSString, UIPDFDocument, UIPDFSelection, UIImage;

@interface UIPDFPage : NSObject {
	CGPDFPageRef _cgPage;	// 4 = 0x4
	unsigned _pageNumber;	// 8 = 0x8
	NSString *_stringInReadingOrder;	// 12 = 0xc
	UIPDFSelection *_selection;	// 16 = 0x10
	UIPDFDocument *_document;	// 20 = 0x14
	unsigned _pageIndex;	// 24 = 0x18
@private
	UIImage *_pageImage;	// 28 = 0x1c
}
@property(readonly, assign) CGPDFPageRef CGPage;	// G=0x32b0df19; @synthesize=_cgPage
@property(readonly, assign) CGRect cropBox;	// G=0x32b0dc75; 
@property(readonly, assign) UIPDFDocument *document;	// G=0x32b0df8d; @synthesize=_document
@property(retain) UIImage *pageImage;	// G=0x32b0dfa1; S=0x32b0dfb5; @synthesize=_pageImage
@property(readonly, assign) unsigned pageIndex;	// G=0x32b0df41; @synthesize=_pageIndex
@property(readonly, assign) unsigned pageNumber;	// G=0x32b0df2d; @synthesize=_pageNumber
@property(retain) UIPDFSelection *selection;	// G=0x32b0df55; S=0x32b0df69; @synthesize=_selection
- (id)initWithCGPDFPage:(CGPDFPageRef)cgpdfpage;	// 0x32b0d93d
// declared property getter: - (CGPDFPageRef)CGPage;	// 0x32b0df19
- (unsigned long)cfCompareFlagsFromNSOptions:(unsigned)nsoptions;	// 0x32b0ddc5
// declared property getter: - (CGRect)cropBox;	// 0x32b0dc75
- (CGRect)cropBoxAccountForRotation;	// 0x32b0dc91
- (void)dealloc;	// 0x32b0d99d
- (void)deliverImageWithWidth:(unsigned)width height:(unsigned)height receiver:(id)receiver selector:(SEL)selector info:(id)info;	// 0x32b0dbb1
// declared property getter: - (id)document;	// 0x32b0df8d
- (void)drawInRect:(CGRect)rect context:(CGContextRef)context;	// 0x32b0da29
- (id)findString:(id)string fromSelection:(id)selection options:(unsigned)options;	// 0x32b0dde9
- (id)getImageIfAvailable;	// 0x32b0db21
- (CGRect)mediaBox;	// 0x32b0dd19
- (CGRect)mediaBoxAccountForRotation;	// 0x32b0dd35
// declared property getter: - (id)pageImage;	// 0x32b0dfa1
// declared property getter: - (unsigned)pageIndex;	// 0x32b0df41
// declared property getter: - (unsigned)pageNumber;	// 0x32b0df2d
- (unsigned)rotation;	// 0x32b0dd51
// declared property getter: - (id)selection;	// 0x32b0df55
// declared property setter: - (void)setPageImage:(id)image;	// 0x32b0dfb5
// declared property setter: - (void)setSelection:(id)selection;	// 0x32b0df69
- (CGSize)size;	// 0x32b0dc49
- (id)string;	// 0x32b0dd8d
@end

