/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import "DOMObject.h"

@class DOMCSSPrimitiveValue;

__attribute__((visibility("hidden")))
@interface DOMRGBColor : DOMObject {
}
@property(readonly, retain) DOMCSSPrimitiveValue *alpha;	// G=0x35bfc859; 
@property(readonly, retain) DOMCSSPrimitiveValue *blue;	// G=0x35bfc9a1; 
@property(readonly, retain) DOMCSSPrimitiveValue *green;	// G=0x35bfcae9; 
@property(readonly, retain) DOMCSSPrimitiveValue *red;	// G=0x35bfcc31; 
// declared property getter: - (id)alpha;	// 0x35bfc859
// declared property getter: - (id)blue;	// 0x35bfc9a1
- (CGColorRef)color;	// 0x35bfc799
- (void)dealloc;	// 0x35bfc725
- (void)finalize;	// 0x35bfcd79
// declared property getter: - (id)green;	// 0x35bfcae9
// declared property getter: - (id)red;	// 0x35bfcc31
@end

