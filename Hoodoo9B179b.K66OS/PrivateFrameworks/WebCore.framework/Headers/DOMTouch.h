/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMObject.h"

@protocol DOMEventTarget;

__attribute__((visibility("hidden")))
@interface DOMTouch : DOMObject {
}
@property(readonly, assign) int clientX;	// G=0x3377ef5d; 
@property(readonly, assign) int clientY;	// G=0x3377ef89; 
@property(readonly, assign) unsigned identifier;	// G=0x3377ef31; 
@property(readonly, assign) int pageX;	// G=0x3377efb5; 
@property(readonly, assign) int pageY;	// G=0x3377efe1; 
@property(readonly, assign) int screenX;	// G=0x3377f00d; 
@property(readonly, assign) int screenY;	// G=0x3377f039; 
@property(readonly, retain) id<DOMEventTarget> target;	// G=0x3377f0e1; 
// declared property getter: - (int)clientX;	// 0x3377ef5d
// declared property getter: - (int)clientY;	// 0x3377ef89
- (void)dealloc;	// 0x3377f065
- (void)finalize;	// 0x3377f19d
// declared property getter: - (unsigned)identifier;	// 0x3377ef31
// declared property getter: - (int)pageX;	// 0x3377efb5
// declared property getter: - (int)pageY;	// 0x3377efe1
// declared property getter: - (int)screenX;	// 0x3377f00d
// declared property getter: - (int)screenY;	// 0x3377f039
// declared property getter: - (id)target;	// 0x3377f0e1
@end
