/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPMediaLibraryDataProviderML3.h"

@class HSLibrary, NSMutableSet, NSMutableDictionary;

@interface MPHomeSharingML3DataProvider : MPMediaLibraryDataProviderML3 {
@private
	HSLibrary *_homeSharingLibrary;	// 20 = 0x14
	NSMutableDictionary *_tokenDataForDSIDs;	// 24 = 0x18
	NSMutableSet *_loadedContainerPIDs;	// 28 = 0x1c
	NSMutableDictionary *_blocksForLoadingContainerPIDs;	// 32 = 0x20
	dispatch_queue_s *_containerFillQueue;	// 36 = 0x24
	int _homeSharingGroupIDChangedToken;	// 40 = 0x28
	unsigned _updateCheckEnabled : 1;	// 44 = 0x2c
}
@property(readonly, assign, nonatomic) HSLibrary *homeSharingLibrary;	// G=0x35be039d; @synthesize=_homeSharingLibrary
@property(readonly, assign, nonatomic) BOOL isSupportedSharingVersion;	// G=0x35bdf145; 
+ (void)_determineHomeSharingGroupIDIfNecessary;	// 0x35bdf2b5
+ (void)beginScanningForLibraries;	// 0x35bdc9d9
+ (BOOL)canValidateHomeSharingCredentials;	// 0x35bdcec9
+ (void)determineHomeSharingGroupIDForAppleID:(id)appleID password:(id)password completionHandler:(id)handler;	// 0x35bdd015
+ (void)endScanningForLibraries;	// 0x35bdcd59
+ (BOOL)hasHomeSharingCredentials;	// 0x35bdce61
+ (id)homeSharingAppleID;	// 0x35bdced5
+ (id)homeSharingGroupID;	// 0x35bdcf75
+ (BOOL)isConnecting;	// 0x35bdcd91
+ (BOOL)isScanningForLibraries;	// 0x35bdc9c9
- (id)initWithHomeSharingLibrary:(id)homeSharingLibrary;	// 0x35bdd1ad
- (void)_didEnterBackgroundNotification:(id)notification;	// 0x35bdf0ed
- (void)_fetchTokensForAuthorizedDSIDs;	// 0x35bdf429
- (void)_fillContainerForQueryCriteria:(id)queryCriteria completionBlock:(id)block;	// 0x35bdfbd9
- (void)_scheduleUpdateCheck;	// 0x35bdf721
- (id)_tokenDataForMediaItem:(id)mediaItem;	// 0x35bdfb85
- (void)_willEnterForegroundNotification:(id)notification;	// 0x35bdf105
- (id)adjustedValueForMPProperty:(id)mpproperty ofEntity:(id)entity withDefaultValue:(id)defaultValue;	// 0x35bdec45
- (void)connectWithAuthenticationData:(id)authenticationData completionBlock:(id)block progressHandler:(id)handler;	// 0x35bdd64d
- (void)dealloc;	// 0x35bdd4cd
- (void)disconnect;	// 0x35bddcc1
- (void)downloadItemWithIdentifier:(long long)identifier completionHandler:(id)handler;	// 0x35bddd0d
- (id)errorResolverForMediaItem:(id)mediaItem;	// 0x35bdedf9
- (BOOL)hasArtworkImageForItemWithIdentifier:(long long)identifier;	// 0x35bde115
- (BOOL)hasGeniusMixes;	// 0x35bde885
// declared property getter: - (id)homeSharingLibrary;	// 0x35be039d
// declared property getter: - (BOOL)isSupportedSharingVersion;	// 0x35bdf145
- (void)loadBestArtworkImageDataForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x35bde491
- (void)loadBestTimedArtworkImageDataForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier atPlaybackTime:(double)playbackTime completionBlock:(id)block;	// 0x35bde751
- (void)loadCollectionsUsingFetchRequest:(id)request;	// 0x35bde3b5
- (void)loadCoverFlowArtworkImageForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x35bde785
- (void)loadItemsUsingFetchRequest:(id)request;	// 0x35bde2d9
- (void)loadQueryCriteria:(id)criteria hasCollectionsWithCompletionBlock:(id)completionBlock;	// 0x35bde1f9
- (void)loadQueryCriteria:(id)criteria hasItemsWithCompletionBlock:(id)completionBlock;	// 0x35bde119
- (id)name;	// 0x35bdd5e9
- (id)protectedContentSupportStorageURL;	// 0x35bdf089
- (BOOL)requiresAuthentication;	// 0x35bdd629
- (void)setRentalPlaybackStartDateForItemID:(unsigned long long)itemID;	// 0x35bdefc1
- (void)setTokenData:(id)data forAuthorizedDSID:(unsigned long long)authorizedDSID;	// 0x35bdf179
- (BOOL)setValue:(id)value forProperty:(id)property ofItemWithIdentifier:(long long)identifier;	// 0x35bde889
- (id)uniqueIdentifier;	// 0x35bdd609
- (void)updateUbiquitousBookmarksWithKey:(id)key bookmarkMediaValue:(id)value;	// 0x35bde111
@end

