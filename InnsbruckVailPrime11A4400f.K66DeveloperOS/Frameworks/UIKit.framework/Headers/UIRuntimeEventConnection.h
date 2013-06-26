/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIRuntimeConnection.h"


__attribute__((visibility("hidden")))
@interface UIRuntimeEventConnection : UIRuntimeConnection {
	unsigned eventMask;	// 16 = 0x10
}
@property(readonly, assign) SEL action;	// G=0x2f5597d1; 
@property(assign) unsigned eventMask;	// G=0x2f5597fd; S=0x2f6b8d71; @synthesize
@property(readonly, assign) id target;	// G=0x2f559785; 
- (id)initWithCoder:(id)coder;	// 0x2f554f85
// declared property getter: - (SEL)action;	// 0x2f5597d1
- (void)connect;	// 0x2f5596dd
- (void)connectForSimulator;	// 0x2f6b8c15
- (id)description;	// 0x2f6b8cf1
- (void)encodeWithCoder:(id)coder;	// 0x2f6b8bb9
// declared property getter: - (unsigned)eventMask;	// 0x2f5597fd
// declared property setter: - (void)setEventMask:(unsigned)mask;	// 0x2f6b8d71
// declared property getter: - (id)target;	// 0x2f559785
@end
