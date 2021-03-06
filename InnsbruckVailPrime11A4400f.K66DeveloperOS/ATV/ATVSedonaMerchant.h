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
+ (void)initialize;	// 0x229151
- (id)initWithIdentifier:(id)identifier;	// 0x2292d1
- (void).cxx_destruct;	// 0x22a861
- (BOOL)_ignoreNetflixAuthNotifications;	// 0x22a875
- (BOOL)_initializeNetflixLibrary;	// 0x229509
- (void)_libraryStartFinished:(id)finished;	// 0x22b059
- (void)_respondToSDKNotifications:(id)sdknotifications;	// 0x22b2e1
- (void)_vendorInvalidCredentials:(id)credentials;	// 0x22a8f9
- (void)_vendorOutOfDateSoftware:(id)dateSoftware;	// 0x22acb5
- (id)accountType;	// 0x2292b5
- (void)dealloc;	// 0x22949d
- (void)decorateRequestProperties:(id)properties;	// 0x229ec1
- (id)generateRequestForURL:(id)url headers:(id)headers method:(id)method body:(id)body;	// 0x22a101
- (id)localizedStringForKey:(id)key;	// 0x22a23d
- (id)merchantErrorForError:(id)error;	// 0x22a2f9
- (id)rootController;	// 0x22a62d
- (void)startApplication:(id)application;	// 0x22a64d
- (void)stopApplication;	// 0x22a81d
@end

