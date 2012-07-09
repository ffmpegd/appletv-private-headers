/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <NSObject.h> // Unknown library
#import "AccessibilityUtilities-Structs.h"


@interface AXLanguageAttribute : NSObject {
@private
	id _value;	// 4 = 0x4
	NSRange _range;	// 8 = 0x8
}
@property(assign, nonatomic) NSRange range;	// G=0x30a78e8d; S=0x30a78ea5; @synthesize=_range
@property(retain, nonatomic) id value;	// G=0x30a78e6d; S=0x30a78e7d; @synthesize=_value
+ (id)attributeWithValue:(id)value range:(NSRange)range;	// 0x30a78c45
- (void)dealloc;	// 0x30a78d19
- (id)description;	// 0x30a78cbd
- (BOOL)isEqual:(id)equal;	// 0x30a78d5d
// declared property getter: - (NSRange)range;	// 0x30a78e8d
// declared property setter: - (void)setRange:(NSRange)range;	// 0x30a78ea5
// declared property setter: - (void)setValue:(id)value;	// 0x30a78e7d
// declared property getter: - (id)value;	// 0x30a78e6d
@end
