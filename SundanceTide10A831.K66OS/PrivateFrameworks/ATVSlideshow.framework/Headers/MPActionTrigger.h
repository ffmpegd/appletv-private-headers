/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MPAction.h"

@class NSString;

@interface MPActionTrigger : MPAction {
	NSString *_actionKey;	// 16 = 0x10
}
@property(copy, nonatomic) NSString *actionKey;	// G=0x338eeec9; S=0x338eed51; @synthesize=_actionKey
+ (id)actionTrigger;	// 0x338eec11
- (id)init;	// 0x338eec55
- (id)initWithCoder:(id)coder;	// 0x338eec95
// declared property getter: - (id)actionKey;	// 0x338eeec9
- (id)copyWithZone:(NSZone *)zone;	// 0x338eee19
- (void)dealloc;	// 0x338eed05
- (void)encodeWithCoder:(id)coder;	// 0x338eedbd
- (void)setAction:(id)action;	// 0x338eee6d
// declared property setter: - (void)setActionKey:(id)key;	// 0x338eed51
@end

