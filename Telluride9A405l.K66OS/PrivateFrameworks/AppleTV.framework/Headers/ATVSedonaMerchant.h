/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedMerchant.h"
#import "ATVMerchantRepresentativeFeed.h"


__attribute__((visibility("hidden")))
@interface ATVSedonaMerchant : ATVFeedMerchant <ATVMerchantRepresentativeFeed> {
@private
	BOOL _refreshTopShelfAfterStart;	// 24 = 0x18
}
+ (void)initialize;	// 0x35d49f25
- (id)initWithIdentifier:(id)identifier;	// 0x35d4a05d
- (void)_authenticationSucceeded:(id)succeeded;	// 0x35d4b0d9
- (id)_itunesHostedNetflixTopShelfURL;	// 0x35d4ae61
- (void)_libraryStartFinished:(id)finished;	// 0x35d4b6b9
- (void)_logoutFinished:(id)finished;	// 0x35d4b9dd
- (void)_networkTimeReady:(id)ready;	// 0x35d4b125
- (void)_preferredAccountEstablished:(id)established;	// 0x35d4b035
- (void)_preferredAccountRemoved:(id)removed;	// 0x35d4af75
- (void)_vendorInvalidCredentials:(id)credentials;	// 0x35d4b171
- (void)_vendorOutOfDateSoftware:(id)dateSoftware;	// 0x35d4b415
- (id)accountType;	// 0x35d4a041
- (BOOL)areResourcesInitialized;	// 0x35d4a335
- (void)dealloc;	// 0x35d4a1f1
- (id)generateRequestForURL:(id)url headers:(id)headers method:(id)method body:(id)body;	// 0x35d4a9c1
- (BOOL)initializeResources;	// 0x35d4a345
- (id)loadRepresentativeFeed;	// 0x35d4ade1
- (id)localizedStringForKey:(id)key;	// 0x35d4aae9
- (id)merchantErrorForError:(id)error;	// 0x35d4ab71
- (id)representativeFeedURL;	// 0x35d4aea1
- (int)resourceInitializationCondtionsYetToBeMet;	// 0x35d4a24d
- (id)rootController;	// 0x35d4af55
@end

