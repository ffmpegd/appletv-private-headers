/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRController.h"

@class ATVFeedMerchant, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedRootController : BRController {
@private
	ATVFeedMerchant *_merchant;	// 80 = 0x50
	NSString *_url;	// 84 = 0x54
}
@property(copy, nonatomic) NSString *url;	// G=0x35d9046d; S=0x35d9047d; @synthesize=_url
+ (id)controllerWithMerchant:(id)merchant;	// 0x35d8ff45
- (id)initWithMerchant:(id)merchant;	// 0x35d8ff91
- (void)dealloc;	// 0x35d8ffe5
- (BOOL)isNetworkDependent;	// 0x35d90045
// declared property setter: - (void)setUrl:(id)url;	// 0x35d9047d
// declared property getter: - (id)url;	// 0x35d9046d
- (void)wasPushed;	// 0x35d90049
@end
