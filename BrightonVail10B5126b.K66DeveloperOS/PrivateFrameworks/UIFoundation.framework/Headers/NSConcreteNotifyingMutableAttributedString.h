/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import "UIFoundation-Structs.h"
#import <NSConcreteMutableAttributedString.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSConcreteNotifyingMutableAttributedString : NSConcreteMutableAttributedString {
	id _delegate;	// 16 = 0x10
}
@property(assign) id delegate;	// G=0x35ac432d; S=0x35ac431d; converted property
+ (Class)_mutableStringClass;	// 0x35ac43ad
- (void)beginEditing;	// 0x35ac433d
// converted property getter: - (id)delegate;	// 0x35ac432d
- (void)edited:(unsigned)edited range:(NSRange)range changeInLength:(int)length;	// 0x35ac437d
- (void)endEditing;	// 0x35ac435d
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x35ac431d
@end
