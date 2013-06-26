/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSDate, NSString, ATVInternetPhotosCollection;

__attribute__((visibility("hidden")))
@interface ATVInternetPhotosAccount : XXUnknownSuperclass {
	NSString *_accountName;	// 4 = 0x4
	NSString *_accountID;	// 8 = 0x8
	NSString *_displayName;	// 12 = 0xc
	NSArray *_mediaAssets;	// 16 = 0x10
	NSArray *_subAccounts;	// 20 = 0x14
	NSArray *_mediaCollections;	// 24 = 0x18
	ATVInternetPhotosCollection *_lastModifiedCollection;	// 28 = 0x1c
	NSDate *_modDate;	// 32 = 0x20
	NSDate *_lastCheckedDate;	// 36 = 0x24
	NSString *_accountIconPath;	// 40 = 0x28
}
@property(retain) NSString *accountID;	// G=0x1bf665; S=0x1bf741; converted property
@property(retain) NSString *accountIconPath;	// G=0x1c02f9; S=0x1c03d5; converted property
@property(retain) NSString *accountName;	// G=0x1bf4a1; S=0x1bf57d; converted property
@property(retain) NSString *displayName;	// G=0x1bf829; S=0x1bf905; converted property
@property(retain) NSDate *lastCheckedDate;	// G=0x1c0135; S=0x1c0211; converted property
@property(retain) ATVInternetPhotosCollection *lastModifiedCollection;	// G=0x1bfa25; S=0x1bfb01; converted property
@property(retain) NSArray *mediaCollections;	// G=0x1bfdad; S=0x1bfe89; converted property
@property(retain) NSDate *modDate;	// G=0x1bff71; S=0x1c004d; converted property
@property(retain) NSArray *subAccounts;	// G=0x1bfbe9; S=0x1bfcc5; converted property
+ (id)account;	// 0x1bf359
// converted property getter: - (id)accountID;	// 0x1bf665
// converted property getter: - (id)accountIconPath;	// 0x1c02f9
// converted property getter: - (id)accountName;	// 0x1bf4a1
- (void)dealloc;	// 0x1bf39d
// converted property getter: - (id)displayName;	// 0x1bf829
// converted property getter: - (id)lastCheckedDate;	// 0x1c0135
// converted property getter: - (id)lastModifiedCollection;	// 0x1bfa25
// converted property getter: - (id)mediaCollections;	// 0x1bfdad
// converted property getter: - (id)modDate;	// 0x1bff71
// converted property setter: - (void)setAccountID:(id)anId;	// 0x1bf741
// converted property setter: - (void)setAccountIconPath:(id)path;	// 0x1c03d5
// converted property setter: - (void)setAccountName:(id)name;	// 0x1bf57d
// converted property setter: - (void)setDisplayName:(id)name;	// 0x1bf905
// converted property setter: - (void)setLastCheckedDate:(id)date;	// 0x1c0211
// converted property setter: - (void)setLastModifiedCollection:(id)collection;	// 0x1bfb01
// converted property setter: - (void)setMediaCollections:(id)collections;	// 0x1bfe89
// converted property setter: - (void)setModDate:(id)date;	// 0x1c004d
// converted property setter: - (void)setSubAccounts:(id)accounts;	// 0x1bfcc5
// converted property getter: - (id)subAccounts;	// 0x1bfbe9
@end
