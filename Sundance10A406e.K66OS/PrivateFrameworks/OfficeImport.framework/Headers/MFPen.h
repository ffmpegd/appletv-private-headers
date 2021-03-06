/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "MFObject.h"
#import <NSObject.h> // Unknown library

@class TSUColor;

@interface MFPen : NSObject <MFObject> {
	int m_penStyle;	// 4 = 0x4
	long m_penWidth;	// 8 = 0x8
	TSUColor *m_colour;	// 12 = 0xc
	double *m_userStyleArray;	// 16 = 0x10
}
+ (id)pen;	// 0x34f26ad9
+ (id)penWithStyle:(int)style width:(long)width colour:(id)colour styleArray:(double *)array;	// 0x350bbf69
- (id)init;	// 0x34f26b11
- (id)initWithStyle:(int)style width:(long)width colour:(id)colour styleArray:(double *)array;	// 0x34f232ad
- (void)dealloc;	// 0x34f2768d
- (id)getColor;	// 0x34fab881
- (int)getStyle;	// 0x34fab955
- (long)getWidth;	// 0x350bbfb5
- (int)selectInto:(id)into;	// 0x34f26c59
@end

