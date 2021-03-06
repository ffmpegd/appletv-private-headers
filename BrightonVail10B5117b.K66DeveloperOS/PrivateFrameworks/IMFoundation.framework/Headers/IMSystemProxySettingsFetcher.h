/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import "IMFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface IMSystemProxySettingsFetcher : NSObject {
	id _delegate;	// 4 = 0x4
	NSString *_host;	// 8 = 0x8
	unsigned short _port;	// 12 = 0xc
	int _proxyProtocol;	// 16 = 0x10
	NSString *_proxyHost;	// 20 = 0x14
	unsigned short _proxyPort;	// 24 = 0x18
	NSString *_proxyAccount;	// 28 = 0x1c
	NSString *_proxyPassword;	// 32 = 0x20
}
@property(copy, nonatomic) NSString *_host;	// G=0x34376785; S=0x34376799; @synthesize
@property(assign, nonatomic) unsigned short _port;	// G=0x343767a9; S=0x343767b9; @synthesize
@property(copy, nonatomic) NSString *_proxyAccount;	// G=0x3437682d; S=0x34376841; @synthesize
@property(copy, nonatomic) NSString *_proxyHost;	// G=0x343767e9; S=0x343767fd; @synthesize
@property(copy, nonatomic) NSString *_proxyPassword;	// G=0x34376851; S=0x34376865; @synthesize
@property(assign, nonatomic) unsigned short _proxyPort;	// G=0x3437680d; S=0x3437681d; @synthesize
@property(assign, nonatomic) int _proxyProtocol;	// G=0x343767c9; S=0x343767d9; @synthesize
@property(assign) id delegate;	// G=0x34376759; S=0x3437676d; @synthesize=_delegate
- (id)initWithHost:(id)host port:(unsigned short)port delegate:(id)delegate;	// 0x34376575
- (id)initWithProxyProtocol:(int)proxyProtocol proxyHost:(id)host proxyPort:(unsigned short)port delegate:(id)delegate;	// 0x343765f9
- (void)_callAccountSettingsDelegateMethod;	// 0x343764e1
- (void)_callProxySettingsDelegateMethod;	// 0x3437647d
- (void)_getProxyAccountAndPasswordFromKeychain;	// 0x34376531
// declared property getter: - (id)_host;	// 0x34376785
// declared property getter: - (unsigned short)_port;	// 0x343767a9
// declared property getter: - (id)_proxyAccount;	// 0x3437682d
// declared property getter: - (id)_proxyHost;	// 0x343767e9
// declared property getter: - (id)_proxyPassword;	// 0x34376851
// declared property getter: - (unsigned short)_proxyPort;	// 0x3437680d
// declared property getter: - (int)_proxyProtocol;	// 0x343767c9
- (void)_takeProxySettingsFromDictionary:(CFDictionaryRef)dictionary;	// 0x34376571
- (void)dealloc;	// 0x343766cd
// declared property getter: - (id)delegate;	// 0x34376759
- (void)retrieveProxyAccountSettings;	// 0x3437668d
- (void)retrieveProxySettings;	// 0x34376689
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3437676d
// declared property setter: - (void)set_host:(id)host;	// 0x34376799
// declared property setter: - (void)set_port:(unsigned short)port;	// 0x343767b9
// declared property setter: - (void)set_proxyAccount:(id)account;	// 0x34376841
// declared property setter: - (void)set_proxyHost:(id)host;	// 0x343767fd
// declared property setter: - (void)set_proxyPassword:(id)password;	// 0x34376865
// declared property setter: - (void)set_proxyPort:(unsigned short)port;	// 0x3437681d
// declared property setter: - (void)set_proxyProtocol:(int)protocol;	// 0x343767d9
@end

