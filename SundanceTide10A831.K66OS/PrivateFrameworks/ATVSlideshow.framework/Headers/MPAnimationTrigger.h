/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MPAction.h"

@class NSString, NSMutableDictionary, NSDictionary;

@interface MPAnimationTrigger : MPAction {
	NSString *_animationKey;	// 16 = 0x10
	NSMutableDictionary *_animationAttributes;	// 20 = 0x14
}
@property(copy, nonatomic) NSDictionary *animationAttributes;	// G=0x338eebfd; S=0x338eeb01; @synthesize=_animationAttributes
@property(copy, nonatomic) NSString *animationKey;	// G=0x338eebe9; S=0x338eea95; @synthesize=_animationKey
+ (id)animationTrigger;	// 0x338ee7e1
- (id)init;	// 0x338ee825
- (id)initWithCoder:(id)coder;	// 0x338ee871
- (id)animationAttributeForKey:(id)key;	// 0x338eea75
// declared property getter: - (id)animationAttributes;	// 0x338eebfd
// declared property getter: - (id)animationKey;	// 0x338eebe9
- (id)copyWithZone:(NSZone *)zone;	// 0x338eea01
- (void)dealloc;	// 0x338ee915
- (void)encodeWithCoder:(id)coder;	// 0x338ee979
- (void)setAction:(id)action;	// 0x338eeb6d
// declared property setter: - (void)setAnimationAttributes:(id)attributes;	// 0x338eeb01
// declared property setter: - (void)setAnimationKey:(id)key;	// 0x338eea95
@end

