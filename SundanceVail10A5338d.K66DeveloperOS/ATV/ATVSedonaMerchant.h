/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedMerchant.h"


__attribute__((visibility("hidden")))
@interface ATVSedonaMerchant : ATVFeedMerchant {
	id _startApplicationCompletionHandler;	// 16 = 0x10
}
+ (void)initialize;	// 0x21e79d
- (id)initWithIdentifier:(id)identifier;	// 0x21e8d1
- (BOOL)_ignoreNetflixAuthNotifications;	// 0x21f891
- (BOOL)_initializeNetflixLibrary;	// 0x21ea0d
- (void)_libraryStartFinished:(id)finished;	// 0x21fd71
- (void)_vendorInvalidCredentials:(id)credentials;	// 0x21f8e1
- (void)_vendorOutOfDateSoftware:(id)dateSoftware;	// 0x21fb35
- (id)accountType;	// 0x21e8b5
- (void)dealloc;	// 0x21e991
- (void)decorateRequestProperties:(id)properties;	// 0x21f16d
- (id)generateRequestForURL:(id)url headers:(id)headers method:(id)method body:(id)body;	// 0x21f319
- (id)localizedStringForKey:(id)key;	// 0x21f3e9
- (id)merchantErrorForError:(id)error;	// 0x21f469
- (id)rootController;	// 0x21f6d5
- (void)startApplication:(id)application;	// 0x21f6f5
@end

