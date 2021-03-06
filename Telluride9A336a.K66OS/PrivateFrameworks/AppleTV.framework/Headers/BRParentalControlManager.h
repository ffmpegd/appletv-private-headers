/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"

@protocol BRRatingInfoDatabase;

@interface BRParentalControlManager : BRSingleton {
@private
	id<BRRatingInfoDatabase> _ratingInfoDatabase;	// 4 = 0x4
}
@property(assign) BOOL accessControlEnabled;	// G=0x33b1fa01; S=0x33b1f945; converted property
@property(assign) int accessModeForPurchase;	// G=0x33b20905; S=0x33b2083d; converted property
@property(retain) id defaultRatingSystemID;	// G=0x33b1fb89; S=0x33b1fb41; converted property
@property(retain) id pin;	// G=0x33b1fafd; S=0x33b1fa41; converted property
@property(retain) id ratingDatabase;	// G=0x33b1fc0d; S=0x33b1fbcd; converted property
+ (void)setSingleton:(id)singleton;	// 0x33b1f909
+ (id)singleton;	// 0x33b1f8f9
+ (BOOL)storeAccessRestricted;	// 0x33b20c35
- (id)init;	// 0x33b1f919
- (int)_accessModeForAppliance:(id)appliance categoryIdentifier:(id)identifier isSet:(BOOL *)set;	// 0x33b2013d
// converted property getter: - (BOOL)accessControlEnabled;	// 0x33b1fa01
- (int)accessModeForAppliance:(id)appliance categoryIdentifier:(id)identifier;	// 0x33b20361
- (int)accessModeForMediaType:(id)mediaType withRatingSystemID:(id)ratingSystemID withRank:(id)rank;	// 0x33b20631
// converted property getter: - (int)accessModeForPurchase;	// 0x33b20905
- (void)clearAccessModeforAppliance:(id)appliance categoryIdentifier:(id)identifier;	// 0x33b1fc1d
- (int)computeAccessModeForAppliance:(id)appliance withCategoryIdentifier:(id)categoryIdentifier;	// 0x33b20e21
- (int)computeAccessModeForAsset:(id)asset;	// 0x33b20c8d
- (int)computeAccessModeForPurchase;	// 0x33b20d71
- (int)computeAccessModeForPurchaseWithMediaType:(id)mediaType withRatingSystemID:(id)ratingSystemID withRank:(id)rank isExplicit:(BOOL)anExplicit;	// 0x33b20da9
// converted property getter: - (id)defaultRatingSystemID;	// 0x33b1fb89
- (int)explicitAccessModeForMediaType:(id)mediaType;	// 0x33b20afd
- (BOOL)hasAccessModeBeenSetForAppliance:(id)appliance categoryIdentifier:(id)identifier;	// 0x33b20335
// converted property getter: - (id)pin;	// 0x33b1fafd
// converted property getter: - (id)ratingDatabase;	// 0x33b1fc0d
// converted property setter: - (void)setAccessControlEnabled:(BOOL)enabled;	// 0x33b1f945
- (void)setAccessMode:(int)mode forAppliance:(id)appliance categoryIdentifier:(id)identifier;	// 0x33b1fe15
- (void)setAccessMode:(int)mode forMediaType:(id)mediaType withRatingSystemID:(id)ratingSystemID withThresholdRank:(id)thresholdRank;	// 0x33b20385
// converted property setter: - (void)setAccessModeForPurchase:(int)purchase;	// 0x33b2083d
// converted property setter: - (void)setDefaultRatingSystemID:(id)anId;	// 0x33b1fb41
- (void)setExplicitAccessMode:(int)mode forMediaType:(id)mediaType;	// 0x33b20959
// converted property setter: - (void)setPin:(id)pin;	// 0x33b1fa41
// converted property setter: - (void)setRatingDatabase:(id)database;	// 0x33b1fbcd
- (id)thresholdForMediaType:(id)mediaType withRatingSystemID:(id)ratingSystemID;	// 0x33b20e61
@end

