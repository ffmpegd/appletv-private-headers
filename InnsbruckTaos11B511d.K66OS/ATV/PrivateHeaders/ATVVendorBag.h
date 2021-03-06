/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVVendorBag : XXUnknownSuperclass {
	NSDictionary *_bag;	// 4 = 0x4
	BOOL _originatesFromStore;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSDictionary *appConfiguration;	// G=0x441d75; 
@property(retain, nonatomic) NSDictionary *bag;	// G=0x442445; S=0x442455; @synthesize=_bag
@property(readonly, assign, nonatomic) NSDictionary *feedResources;	// G=0x441d4d; 
@property(readonly, assign, nonatomic) BOOL isEnabled;	// G=0x441c7d; 
@property(readonly, assign, nonatomic) BOOL isTrusted;	// G=0x441899; 
@property(readonly, assign, nonatomic) NSString *maximumVersion;	// G=0x441cdd; 
@property(readonly, assign, nonatomic) NSString *merchantID;	// G=0x441cfd; 
@property(readonly, assign, nonatomic) NSDictionary *metadata;	// G=0x441d25; 
@property(readonly, assign, nonatomic) NSString *minimumRequiredVersion;	// G=0x441cbd; 
@property(assign, nonatomic) BOOL originatesFromStore;	// G=0x442465; S=0x442475; @synthesize=_originatesFromStore
+ (id)vendorBagWithDictionary:(id)dictionary;	// 0x441625
+ (id)vendorBagsWithDictionaries:(id)dictionaries;	// 0x441519
- (id)initWithDictionary:(id)dictionary;	// 0x441661
- (BOOL)_bagValidForCurrentVersion:(id)currentVersion;	// 0x441f09
- (id)_maximumVersionWithBag:(id)bag;	// 0x441ec1
- (id)_minimumRequiredVersionWithBag:(id)bag;	// 0x441e89
- (id)_normalizeBag:(id)bag;	// 0x441f99
- (BOOL)_originatesFromStore:(id)store;	// 0x4423c9
- (id)_rehydrateDictionary:(id)dictionary fromBag:(id)bag;	// 0x441d9d
// declared property getter: - (id)appConfiguration;	// 0x441d75
- (id)appConfigurationForKey:(id)key;	// 0x44186d
// declared property getter: - (id)bag;	// 0x442445
- (void)dealloc;	// 0x44170d
- (id)description;	// 0x441759
- (id)feedResourceForKey:(id)key;	// 0x441815
// declared property getter: - (id)feedResources;	// 0x441d4d
// declared property getter: - (BOOL)isEnabled;	// 0x441c7d
// declared property getter: - (BOOL)isTrusted;	// 0x441899
// declared property getter: - (id)maximumVersion;	// 0x441cdd
// declared property getter: - (id)merchantID;	// 0x441cfd
// declared property getter: - (id)metadata;	// 0x441d25
- (id)metadatumForKey:(id)key;	// 0x441841
// declared property getter: - (id)minimumRequiredVersion;	// 0x441cbd
// declared property getter: - (BOOL)originatesFromStore;	// 0x442465
// declared property setter: - (void)setBag:(id)bag;	// 0x442455
// declared property setter: - (void)setOriginatesFromStore:(BOOL)store;	// 0x442475
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x4417f5
@end

