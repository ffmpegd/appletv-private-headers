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
@property(retain, nonatomic) NSString *apnName;	// G=0x3656bd3d; S=0x3656c729; @synthesize=_apnName
@property(retain, nonatomic) NSString *password;	// G=0x3656bd1d; S=0x3656c779; @synthesize=_password
@property(retain, nonatomic) NSString *proxy;	// G=0x3656bd0d; S=0x3656c7a1; @synthesize=_proxy
@property(retain, nonatomic) NSNumber *proxyPort;	// G=0x3656bcfd; S=0x3656c7c9; @synthesize=_proxyPort
@property(retain, nonatomic) NSString *username;	// G=0x3656bd2d; S=0x3656c751; @synthesize=_username
// declared property getter: - (id)apnName;	// 0x3656bd3d
- (void)dealloc;	// 0x3656c7f1
- (id)defaultsRepresentation;	// 0x3656bf45
- (id)description;	// 0x3656bdd5
// declared property getter: - (id)password;	// 0x3656bd1d
// declared property getter: - (id)proxy;	// 0x3656bd0d
// declared property getter: - (id)proxyPort;	// 0x3656bcfd
// declared property setter: - (void)setApnName:(id)name;	// 0x3656c729
// declared property setter: - (void)setPassword:(id)password;	// 0x3656c779
// declared property setter: - (void)setProxy:(id)proxy;	// 0x3656c7a1
// declared property setter: - (void)setProxyPort:(id)port;	// 0x3656c7c9
// declared property setter: - (void)setUsername:(id)username;	// 0x3656c751
- (id)strippedDefaultsRepresentation;	// 0x3656bed9
// declared property getter: - (id)username;	// 0x3656bd2d
@end

