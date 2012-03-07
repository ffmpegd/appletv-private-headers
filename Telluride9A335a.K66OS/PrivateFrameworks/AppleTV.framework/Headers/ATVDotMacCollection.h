/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVInternetPhotosCollection.h"
#import "ATVDotMacAuthentication.h"

@class NSString, ATVDotMacSecondaryAccount;

@interface ATVDotMacCollection : ATVInternetPhotosCollection <ATVDotMacAuthentication> {
@private
	ATVDotMacSecondaryAccount *_secondaryAccount;	// 64 = 0x40
	BOOL _requiresAuthentication;	// 68 = 0x44
	NSString *_keyImageDotMacIdentifier;	// 72 = 0x48
	BOOL _initialAuthCheckComplete;	// 76 = 0x4c
}
@property(assign) BOOL initialAuthCheckComplete;	// G=0x340aa86d; S=0x340aa87d; converted property
@property(retain) NSString *keyImageDotMacIdentifier;	// G=0x340aa059; S=0x340aa125; converted property
@property(assign) BOOL requiresAuthentication;	// G=0x340aa631; S=0x340aa641; converted property
@property(retain) ATVDotMacSecondaryAccount *secondaryAccount;	// G=0x340aa651; S=0x340aa71d; converted property
- (id)initWithCollectionInfo:(id)collectionInfo;	// 0x340a9d21
- (id)archivableCollectionInfo;	// 0x340aa2f1
- (void)dealloc;	// 0x340a9f85
- (id)imageProxy;	// 0x340aa569
// converted property getter: - (BOOL)initialAuthCheckComplete;	// 0x340aa86d
- (BOOL)isAuthenticated;	// 0x340aa619
- (id)keyAsset;	// 0x340aa1f5
// converted property getter: - (id)keyImageDotMacIdentifier;	// 0x340aa059
- (id)mediaTypes;	// 0x340aa4e9
- (id)photoAssets;	// 0x340a9fe5
// converted property getter: - (BOOL)requiresAuthentication;	// 0x340aa631
// converted property getter: - (id)secondaryAccount;	// 0x340aa651
// converted property setter: - (void)setInitialAuthCheckComplete:(BOOL)complete;	// 0x340aa87d
// converted property setter: - (void)setKeyImageDotMacIdentifier:(id)identifier;	// 0x340aa125
// converted property setter: - (void)setRequiresAuthentication:(BOOL)authentication;	// 0x340aa641
// converted property setter: - (void)setSecondaryAccount:(id)account;	// 0x340aa71d
@end
