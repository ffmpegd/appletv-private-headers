/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library
#import "CorePDF-Structs.h"

@class CPZone, CPTextLine;

@interface CPHighlighter : NSObject {
	CPZone *boundingZone;	// 4 = 0x4
	CPTextLine *textLine;	// 8 = 0x8
	CGColorRef color;	// 12 = 0xc
	CPPDFStyle *style;	// 16 = 0x10
	CPPDFStyle *highlightedStyle;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) CGColorRef color;	// G=0x33a501dd; @synthesize
@property(assign, nonatomic) CPPDFStyle *highlightedStyle;	// G=0x33a5020d; S=0x33a5021d; @synthesize
@property(assign, nonatomic) CPPDFStyle *style;	// G=0x33a501ed; S=0x33a501fd; @synthesize
+ (BOOL)reconstructHighlightFor:(id)aFor;	// 0x33a4ff5d
- (id)initWithTextLine:(id)textLine inZone:(id)zone ofColor:(CGColorRef)color;	// 0x33a4fc4d
// declared property getter: - (CGColorRef)color;	// 0x33a501dd
- (void)highlight;	// 0x33a4fcb1
// declared property getter: - (CPPDFStyle *)highlightedStyle;	// 0x33a5020d
// declared property setter: - (void)setHighlightedStyle:(CPPDFStyle *)style;	// 0x33a5021d
// declared property setter: - (void)setStyle:(CPPDFStyle *)style;	// 0x33a501fd
// declared property getter: - (CPPDFStyle *)style;	// 0x33a501ed
@end

