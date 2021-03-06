/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSURL, ATVVendorBag, NSDictionary, NSString;

@interface BRMerchantInfo : NSObject {
@private
	ATVVendorBag *_vendorBag;	// 4 = 0x4
	BOOL _enabled;	// 8 = 0x8
	NSString *_featureName;	// 12 = 0xc
	NSDictionary *metadata;	// 16 = 0x10
	NSDictionary *feedResources;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) NSDictionary *appDictionary;	// G=0x36748089; 
@property(readonly, assign, nonatomic) NSString *authType;	// G=0x36747db5; 
@property(readonly, assign, nonatomic) NSString *bootstrapResourceURL;	// G=0x36747de1; 
@property(readonly, assign, nonatomic) NSString *bootstrapResourceVersion;	// G=0x36747e0d; 
@property(readonly, assign, nonatomic) int defaultParentalControlsAccessMode;	// G=0x36747f1d; 
@property(assign) BOOL enabled;	// G=0x36747925; S=0x367479ad; 
@property(readonly, assign, nonatomic) BOOL enabledInBag;	// G=0x36747a75; 
@property(retain) NSString *featureName;	// G=0x3674788d; S=0x367478e5; 
@property(assign, nonatomic) NSDictionary *feedResources;	// G=0x367481c5; S=0x367481d5; @synthesize
@property(readonly, assign, nonatomic) BOOL hasBeenRemoved;	// G=0x36747a31; 
@property(readonly, assign, nonatomic) NSString *javascriptURL;	// G=0x36747e39; 
@property(readonly, assign, nonatomic) NSString *maximumVersion;	// G=0x36747ff9; 
@property(readonly, assign, nonatomic) NSURL *menuIconURL;	// G=0x36747bc1; 
@property(readonly, assign, nonatomic) NSString *menuIconURLVersion;	// G=0x36747ced; 
@property(readonly, assign, nonatomic) NSString *menuTitle;	// G=0x36747b69; 
@property(readonly, assign, nonatomic) NSString *merchantID;	// G=0x36747ba1; 
@property(assign, nonatomic) NSDictionary *metadata;	// G=0x367481a5; S=0x367481b5; @synthesize
@property(readonly, assign, nonatomic) NSString *minimumRequiredVersion;	// G=0x36747fb5; 
@property(readonly, assign, nonatomic) BOOL pinToMerchant;	// G=0x367480b5; 
@property(readonly, assign, nonatomic) float preferredOrder;	// G=0x36747e65; 
@property(readonly, assign, nonatomic) NSString *rootURL;	// G=0x36747d5d; 
@property(readonly, assign, nonatomic) NSString *supportURL;	// G=0x3674805d; 
@property(readonly, assign, nonatomic) NSString *topShelfURL;	// G=0x36747d89; 
@property(readonly, assign, nonatomic) BOOL usesParentalControls;	// G=0x36747ed9; 
+ (id)infoWithVendorBag:(id)vendorBag;	// 0x367476d9
- (id)initWithVendorBag:(id)vendorBag;	// 0x36747715
- (id)_featureCode;	// 0x3674811d
// declared property getter: - (id)appDictionary;	// 0x36748089
// declared property getter: - (id)authType;	// 0x36747db5
// declared property getter: - (id)bootstrapResourceURL;	// 0x36747de1
// declared property getter: - (id)bootstrapResourceVersion;	// 0x36747e0d
- (void)dealloc;	// 0x3674780d
// declared property getter: - (int)defaultParentalControlsAccessMode;	// 0x36747f1d
// declared property getter: - (BOOL)enabled;	// 0x36747925
// declared property getter: - (BOOL)enabledInBag;	// 0x36747a75
// declared property getter: - (id)featureName;	// 0x3674788d
// declared property getter: - (id)feedResources;	// 0x367481c5
// declared property getter: - (BOOL)hasBeenRemoved;	// 0x36747a31
// declared property getter: - (id)javascriptURL;	// 0x36747e39
// declared property getter: - (id)maximumVersion;	// 0x36747ff9
// declared property getter: - (id)menuIconURL;	// 0x36747bc1
// declared property getter: - (id)menuIconURLVersion;	// 0x36747ced
// declared property getter: - (id)menuTitle;	// 0x36747b69
// declared property getter: - (id)merchantID;	// 0x36747ba1
// declared property getter: - (id)metadata;	// 0x367481a5
// declared property getter: - (id)minimumRequiredVersion;	// 0x36747fb5
// declared property getter: - (BOOL)pinToMerchant;	// 0x367480b5
// declared property getter: - (float)preferredOrder;	// 0x36747e65
// declared property getter: - (id)rootURL;	// 0x36747d5d
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x367479ad
// declared property setter: - (void)setFeatureName:(id)name;	// 0x367478e5
// declared property setter: - (void)setFeedResources:(id)resources;	// 0x367481d5
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x367481b5
// declared property getter: - (id)supportURL;	// 0x3674805d
// declared property getter: - (id)topShelfURL;	// 0x36747d89
- (void)useDefaultEnablement;	// 0x36747b39
// declared property getter: - (BOOL)usesParentalControls;	// 0x36747ed9
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x3674786d
@end

