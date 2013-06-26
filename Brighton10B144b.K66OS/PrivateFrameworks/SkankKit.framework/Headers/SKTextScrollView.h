/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

#import "SKScrollLayer.h"
#import "SkankKit-Structs.h"

@class NSMutableString, DPTextLayer;

@interface SKTextScrollView : SKScrollLayer {
	NSMutableString *_text;	// 104 = 0x68
	DPTextLayer *_textContents;	// 108 = 0x6c
}
- (id)init;	// 0x3543159d
- (void)appendString:(id)string;	// 0x3543184d
- (void)setFontColor:(CGColorRef)color;	// 0x35431731
- (void)setFrame:(CGRect)frame;	// 0x35431695
- (void)setText:(id)text;	// 0x35431801
- (void)updateContents;	// 0x35431751
@end
