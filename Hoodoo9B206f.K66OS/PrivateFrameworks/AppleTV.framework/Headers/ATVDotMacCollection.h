/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVInternetPhotosCollection.h"
#import "ATVDotMacAuthentication.h"

@class ATVDotMacSecondaryAccount, NSString;

@interface ATVDotMacCollection : ATVInternetPhotosCollection <ATVDotMacAuthentication> {
@private
	ATVDotMacSecondaryAccount *_secondaryAccount;	// 64 = 0x40
	BOOL _requiresAuthentication;	// 68 = 0x44
	NSString *_keyImageDotMacIdentifier;	// 72 = 0x48
	BOOL _initialAuthCheckComplete;	// 76 = 0x4c
}
@property(assign) BOOL initialAuthCheckComplete;	// G=0x3655e605; S=0x3655e615; converted property
@property(retain) NSString *keyImageDotMacIdentifier;	// G=0x3655ddf1; S=0x3655debd; converted property
@property(assign) BOOL requiresAuthentication;	// G=0x3655e3c9; S=0x3655e3d9; converted property
@property(retain) ATVDotMacSecondaryAccount *secondaryAccount;	// G=0x3655e3e9; S=0x3655e4b5; converted property
- (id)initWithCollectionInfo:(id)collectionInfo;	// 0x3655dab9
- (id)archivableCollectionInfo;	// 0x3655e089
- (void)dealloc;	// 0x3655dd1d
- (id)imageProxy;	// 0x3655e301
// converted property getter: - (BOOL)initialAuthCheckComplete;	// 0x3655e605
- (BOOL)isAuthenticated;	// 0x3655e3b1
- (id)keyAsset;	// 0x3655df8d
// converted property getter: - (id)keyImageDotMacIdentifier;	// 0x3655ddf1
- (id)mediaTypes;	// 0x3655e281
- (id)photoAssets;	// 0x3655dd7d
// converted property getter: - (BOOL)requiresAuthentication;	// 0x3655e3c9
// converted property getter: - (id)secondaryAccount;	// 0x3655e3e9
// converted property setter: - (void)setInitialAuthCheckComplete:(BOOL)complete;	// 0x3655e615
// converted property setter: - (void)setKeyImageDotMacIdentifier:(id)identifier;	// 0x3655debd
// converted property setter: - (void)setRequiresAuthentication:(BOOL)authentication;	// 0x3655e3d9
// converted property setter: - (void)setSecondaryAccount:(id)account;	// 0x3655e4b5
@end

