/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedMenuItemElement.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedSignInSignOutMenuItemElement : ATVFeedMenuItemElement {
@private
	BOOL _signOutExitsApp;	// 64 = 0x40
	NSString *_confirmationTitle;	// 68 = 0x44
	NSString *_confirmationDescription;	// 72 = 0x48
	NSString *_signInPageURL;	// 76 = 0x4c
}
@property(copy, nonatomic) NSString *confirmationDescription;	// G=0x35f0568d; S=0x35f0569d; @synthesize=_confirmationDescription
@property(copy, nonatomic) NSString *confirmationTitle;	// G=0x35f05659; S=0x35f05669; @synthesize=_confirmationTitle
@property(copy, nonatomic) NSString *signInPageURL;	// G=0x35f056c1; S=0x35f056d1; @synthesize=_signInPageURL
@property(assign, nonatomic) BOOL signOutExitsApp;	// G=0x35f05639; S=0x35f05649; @synthesize=_signOutExitsApp
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x35f05459
// declared property getter: - (id)confirmationDescription;	// 0x35f0568d
// declared property getter: - (id)confirmationTitle;	// 0x35f05659
- (void)dealloc;	// 0x35f055c5
// declared property setter: - (void)setConfirmationDescription:(id)description;	// 0x35f0569d
// declared property setter: - (void)setConfirmationTitle:(id)title;	// 0x35f05669
// declared property setter: - (void)setSignInPageURL:(id)pageURL;	// 0x35f056d1
// declared property setter: - (void)setSignOutExitsApp:(BOOL)app;	// 0x35f05649
// declared property getter: - (id)signInPageURL;	// 0x35f056c1
// declared property getter: - (BOOL)signOutExitsApp;	// 0x35f05639
@end
