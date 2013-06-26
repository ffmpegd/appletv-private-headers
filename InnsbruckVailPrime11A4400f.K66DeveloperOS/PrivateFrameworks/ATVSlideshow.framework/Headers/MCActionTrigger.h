/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAction.h"

@class NSString;

@interface MCActionTrigger : MCAction {
	NSString *_actionKey;	// 12 = 0xc
}
@property(copy) NSString *actionKey;	// G=0x2fcb8e19; S=0x2fcb8e2d; @synthesize=_actionKey
+ (id)actionTriggerForTargetPlugObjectID:(id)targetPlugObjectID withActionKey:(id)actionKey;	// 0x2fcb8bd9
- (id)initWithImprint:(id)imprint;	// 0x2fcb8c4d
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x2fcb8d6d
// declared property getter: - (id)actionKey;	// 0x2fcb8e19
- (void)demolish;	// 0x2fcb8cbd
- (id)description;	// 0x2fcb8dc1
- (id)imprint;	// 0x2fcb8d0d
// declared property setter: - (void)setActionKey:(id)key;	// 0x2fcb8e2d
@end
