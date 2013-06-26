/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "PSSetupController.h"

@class NSString;

@interface PSInternationalLanguageSetupController : PSSetupController {
	NSString *_languageToSet;	// 312 = 0x138
}
- (void)commit;	// 0x352f92d9
- (void)dealloc;	// 0x352f8b75
- (void)didFinishCommit;	// 0x352f93cd
- (id)language:(id)language;	// 0x352f9439
- (void)rotateView:(id)view toOrientation:(int)orientation;	// 0x352f9185
- (void)setLanguage:(id)language specifier:(id)specifier;	// 0x352f93fd
- (void)setupController;	// 0x352f946d
- (void)showBlackViewWithLabel:(id)label;	// 0x352f8c11
@end
