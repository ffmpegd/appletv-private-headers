/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMNode.h"

@class NSString, DOMCSSStyleDeclaration, DOMElement;

__attribute__((visibility("hidden")))
@interface DOMAttr : DOMNode {
}
@property(readonly, copy) NSString *name;	// G=0x306d9df1; 
@property(readonly, retain) DOMElement *ownerElement;	// G=0x306da089; 
@property(readonly, assign) BOOL specified;	// G=0x306d9cf5; 
@property(readonly, retain) DOMCSSStyleDeclaration *style;	// G=0x306da201; 
@property(copy) NSString *value;	// G=0x306d9d25; S=0x306d9f41; 
- (BOOL)isId;	// 0x306da145
// declared property getter: - (id)name;	// 0x306d9df1
// declared property getter: - (id)ownerElement;	// 0x306da089
// declared property setter: - (void)setValue:(id)value;	// 0x306d9f41
// declared property getter: - (BOOL)specified;	// 0x306d9cf5
// declared property getter: - (id)style;	// 0x306da201
// declared property getter: - (id)value;	// 0x306d9d25
@end
