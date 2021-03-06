/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedMenuItemElement.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedSignInSignOutMenuItemElement : ATVFeedMenuItemElement {
	BOOL _signOutExitsApp;	// 4 = 0x4
	NSString *_confirmationTitle;	// 8 = 0x8
	NSString *_confirmationDescription;	// 12 = 0xc
	NSString *_signInPageURL;	// 16 = 0x10
}
@property(copy, nonatomic) NSString *confirmationDescription;	// G=0x165e95; S=0x165ea9; @synthesize=_confirmationDescription
@property(copy, nonatomic) NSString *confirmationTitle;	// G=0x165e71; S=0x165e85; @synthesize=_confirmationTitle
@property(copy, nonatomic) NSString *signInPageURL;	// G=0x165eb9; S=0x165ecd; @synthesize=_signInPageURL
@property(assign, nonatomic) BOOL signOutExitsApp;	// G=0x165e51; S=0x165e61; @synthesize=_signOutExitsApp
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x165c71
// declared property getter: - (id)confirmationDescription;	// 0x165e95
// declared property getter: - (id)confirmationTitle;	// 0x165e71
- (void)dealloc;	// 0x165dd9
// declared property setter: - (void)setConfirmationDescription:(id)description;	// 0x165ea9
// declared property setter: - (void)setConfirmationTitle:(id)title;	// 0x165e85
// declared property setter: - (void)setSignInPageURL:(id)pageURL;	// 0x165ecd
// declared property setter: - (void)setSignOutExitsApp:(BOOL)app;	// 0x165e61
// declared property getter: - (id)signInPageURL;	// 0x165eb9
// declared property getter: - (BOOL)signOutExitsApp;	// 0x165e51
@end

