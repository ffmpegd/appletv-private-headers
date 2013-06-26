/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSString, NSArray;

@interface CAStateTransition : NSObject <NSCopying, NSCoding> {
	NSString *_fromState;	// 4 = 0x4
	NSString *_toState;	// 8 = 0x8
	NSArray *_elements;	// 12 = 0xc
}
@property(copy, nonatomic) NSArray *elements;	// G=0x32958f25; S=0x32958f39; @synthesize=_elements
@property(copy, nonatomic) NSString *fromState;	// G=0x32958edd; S=0x32958ef1; @synthesize=_fromState
@property(copy, nonatomic) NSString *toState;	// G=0x32958f01; S=0x32958f15; @synthesize=_toState
- (id)init;	// 0x32958a61
- (id)initWithCoder:(id)coder;	// 0x32958d15
- (id)copyWithZone:(NSZone *)zone;	// 0x32958de1
- (void)dealloc;	// 0x32958ad9
- (id)debugDescription;	// 0x32958e79
- (double)duration;	// 0x32958b51
// declared property getter: - (id)elements;	// 0x32958f25
- (void)encodeWithCoder:(id)coder;	// 0x32958c81
// declared property getter: - (id)fromState;	// 0x32958edd
// declared property setter: - (void)setElements:(id)elements;	// 0x32958f39
// declared property setter: - (void)setFromState:(id)state;	// 0x32958ef1
// declared property setter: - (void)setToState:(id)state;	// 0x32958f15
// declared property getter: - (id)toState;	// 0x32958f01
@end
