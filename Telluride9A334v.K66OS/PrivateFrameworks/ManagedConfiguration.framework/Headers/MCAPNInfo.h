/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <NSObject.h> // Unknown library

@class NSString, NSNumber;

@interface MCAPNInfo : NSObject {
	NSString *_apnName;	// 4 = 0x4
	NSString *_username;	// 8 = 0x8
	NSString *_password;	// 12 = 0xc
	NSString *_proxy;	// 16 = 0x10
	NSNumber *_proxyPort;	// 20 = 0x14
}
@property(retain, nonatomic) NSString *apnName;	// G=0x34748d29; S=0x34749715; @synthesize=_apnName
@property(retain, nonatomic) NSString *password;	// G=0x34748d09; S=0x34749765; @synthesize=_password
@property(retain, nonatomic) NSString *proxy;	// G=0x34748cf9; S=0x3474978d; @synthesize=_proxy
@property(retain, nonatomic) NSNumber *proxyPort;	// G=0x34748ce9; S=0x347497b5; @synthesize=_proxyPort
@property(retain, nonatomic) NSString *username;	// G=0x34748d19; S=0x3474973d; @synthesize=_username
// declared property getter: - (id)apnName;	// 0x34748d29
- (void)dealloc;	// 0x347497dd
- (id)defaultsRepresentation;	// 0x34748f31
- (id)description;	// 0x34748dc1
// declared property getter: - (id)password;	// 0x34748d09
// declared property getter: - (id)proxy;	// 0x34748cf9
// declared property getter: - (id)proxyPort;	// 0x34748ce9
// declared property setter: - (void)setApnName:(id)name;	// 0x34749715
// declared property setter: - (void)setPassword:(id)password;	// 0x34749765
// declared property setter: - (void)setProxy:(id)proxy;	// 0x3474978d
// declared property setter: - (void)setProxyPort:(id)port;	// 0x347497b5
// declared property setter: - (void)setUsername:(id)username;	// 0x3474973d
- (id)strippedDefaultsRepresentation;	// 0x34748ec5
// declared property getter: - (id)username;	// 0x34748d19
@end

