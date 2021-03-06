/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "StoreKit-Structs.h"

@class NSString, NSNumber;

@interface SKPaymentQueueClient : NSObject <NSCopying> {
	NSString *_bundleIdentifier;	// 4 = 0x4
	NSString *_bundleVersion;	// 8 = 0x8
	NSNumber *_storeExternalVersion;	// 12 = 0xc
	NSNumber *_storeItemIdentifier;	// 16 = 0x10
	NSString *_vendorIdentifier;	// 20 = 0x14
}
@property(copy, nonatomic) NSString *bundleIdentifier;	// G=0x32a9aca9; S=0x32a9acbd; @synthesize=_bundleIdentifier
@property(copy, nonatomic) NSString *bundleVersion;	// G=0x32a9accd; S=0x32a9ace1; @synthesize=_bundleVersion
@property(copy, nonatomic) NSNumber *storeExternalVersion;	// G=0x32a9acf1; S=0x32a9ad05; @synthesize=_storeExternalVersion
@property(copy, nonatomic) NSNumber *storeItemIdentifier;	// G=0x32a9ad15; S=0x32a9ad29; @synthesize=_storeItemIdentifier
@property(copy, nonatomic) NSString *vendorIdentifier;	// G=0x32a9ad39; S=0x32a9ad4d; @synthesize=_vendorIdentifier
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x32a9a9b9
// declared property getter: - (id)bundleIdentifier;	// 0x32a9aca9
// declared property getter: - (id)bundleVersion;	// 0x32a9accd
- (id)copyWithZone:(NSZone *)zone;	// 0x32a9abc5
- (id)copyXPCEncoding;	// 0x32a9ab19
- (void)dealloc;	// 0x32a9a919
// declared property setter: - (void)setBundleIdentifier:(id)identifier;	// 0x32a9acbd
// declared property setter: - (void)setBundleVersion:(id)version;	// 0x32a9ace1
// declared property setter: - (void)setStoreExternalVersion:(id)version;	// 0x32a9ad05
// declared property setter: - (void)setStoreItemIdentifier:(id)identifier;	// 0x32a9ad29
// declared property setter: - (void)setVendorIdentifier:(id)identifier;	// 0x32a9ad4d
// declared property getter: - (id)storeExternalVersion;	// 0x32a9acf1
// declared property getter: - (id)storeItemIdentifier;	// 0x32a9ad15
// declared property getter: - (id)vendorIdentifier;	// 0x32a9ad39
@end

