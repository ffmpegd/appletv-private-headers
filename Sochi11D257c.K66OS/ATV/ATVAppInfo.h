/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "CPKApplication.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BRMerchantInfo, CPKAppDataStorage, NSURL, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface ATVAppInfo : XXUnknownSuperclass <CPKApplication> {
	BRMerchantInfo *_merchantInfo;	// 4 = 0x4
	NSURL *_rootURL;	// 8 = 0x8
	NSDictionary *_launchParams;	// 12 = 0xc
	NSString *_appIdentifier;	// 16 = 0x10
	CPKAppDataStorage *_appLocalStorage;	// 20 = 0x14
	CPKAppDataStorage *_appVendorStorage;	// 24 = 0x18
}
@property(retain, nonatomic) NSString *appIdentifier;	// G=0x298dc1; S=0x29921d; @synthesize=_appIdentifier
@property(retain, nonatomic) CPKAppDataStorage *appLocalStorage;	// G=0x299245; S=0x299255; @synthesize=_appLocalStorage
@property(retain, nonatomic) CPKAppDataStorage *appVendorStorage;	// G=0x29927d; S=0x29928d; @synthesize=_appVendorStorage
@property(copy, nonatomic) NSDictionary *launchParams;	// G=0x2991f9; S=0x29920d; @synthesize=_launchParams
@property(retain, nonatomic) BRMerchantInfo *merchantInfo;	// G=0x299189; S=0x299199; @synthesize=_merchantInfo
@property(retain, nonatomic) NSURL *rootURL;	// G=0x2991c1; S=0x2991d1; @synthesize=_rootURL
- (id)initWithExtrasLaunchURL:(id)extrasLaunchURL launchParams:(id)params;	// 0x298b5d
- (id)initWithMerchantInfo:(id)merchantInfo;	// 0x298afd
- (void).cxx_destruct;	// 0x2992b5
- (id)_storagePathWithIdentifier:(id)identifier;	// 0x29901d
// declared property getter: - (id)appIdentifier;	// 0x298dc1
- (id)appJSURL;	// 0x298cc5
- (id)appLaunchParams;	// 0x298db1
// declared property getter: - (id)appLocalStorage;	// 0x299245
// declared property getter: - (id)appVendorStorage;	// 0x29927d
// declared property getter: - (id)launchParams;	// 0x2991f9
- (id)localStorage;	// 0x298e25
// declared property getter: - (id)merchantInfo;	// 0x299189
// declared property getter: - (id)rootURL;	// 0x2991c1
// declared property setter: - (void)setAppIdentifier:(id)identifier;	// 0x29921d
// declared property setter: - (void)setAppLocalStorage:(id)storage;	// 0x299255
// declared property setter: - (void)setAppVendorStorage:(id)storage;	// 0x29928d
// declared property setter: - (void)setLaunchParams:(id)params;	// 0x29920d
// declared property setter: - (void)setMerchantInfo:(id)info;	// 0x299199
// declared property setter: - (void)setRootURL:(id)url;	// 0x2991d1
- (BOOL)shouldIgnoreJSValidation;	// 0x298c59
- (id)vendorIdentifier;	// 0x298e21
- (id)vendorStorage;	// 0x298f11
@end

