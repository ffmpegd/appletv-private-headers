/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRController.h"

@class BRAccountType, NSString;

@interface BRAuthenticationErrorResolutionController : BRController {
@private
	BRAccountType *_accountType;	// 84 = 0x54
	NSString *_title;	// 88 = 0x58
	NSString *_instructions;	// 92 = 0x5c
}
+ (id)errorResolutionControllerWithAccountType:(id)accountType title:(id)title instructions:(id)instructions;	// 0x30247721
- (id)initWithAccountType:(id)accountType title:(id)title instructions:(id)instructions;	// 0x30247769
- (void)controlWasActivated;	// 0x30247885
- (void)dealloc;	// 0x30247811
@end
