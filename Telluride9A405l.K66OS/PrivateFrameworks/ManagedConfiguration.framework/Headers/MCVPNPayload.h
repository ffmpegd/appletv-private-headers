/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSDictionary, NSString, NSMutableDictionary;

@interface MCVPNPayload : MCPayload {
	NSMutableDictionary *_atom;	// 40 = 0x28
	NSString *_certificateUUID;	// 44 = 0x2c
	unsigned char _userNameRequired;	// 48 = 0x30
	unsigned char _passwordRequired;	// 49 = 0x31
	unsigned char _proxyUserNameRequired;	// 50 = 0x32
	unsigned char _proxyPasswordRequired;	// 51 = 0x33
	unsigned char _sharedSecretRequired;	// 52 = 0x34
	unsigned char _pinRequired;	// 53 = 0x35
	NSString *_userNameKey;	// 56 = 0x38
	NSString *_passwordKey;	// 60 = 0x3c
	NSString *_proxyUserNameKey;	// 64 = 0x40
	NSString *_proxyPasswordKey;	// 68 = 0x44
	NSString *_sharedSecretKey;	// 72 = 0x48
	NSString *_pinKey;	// 76 = 0x4c
	NSString *_userName;	// 80 = 0x50
	NSString *_password;	// 84 = 0x54
	NSString *_proxyUserName;	// 88 = 0x58
	NSString *_proxyPassword;	// 92 = 0x5c
	NSString *_sharedSecret;	// 96 = 0x60
	NSString *_pin;	// 100 = 0x64
}
@property(readonly, assign, nonatomic) NSDictionary *atom;	// G=0x36570a3d; @synthesize=_atom
@property(readonly, assign, nonatomic) NSString *certificateUUID;	// G=0x36570a2d; @synthesize=_certificateUUID
@property(copy, nonatomic) NSString *password;	// G=0x3657094d; S=0x36570e6d; @synthesize=_password
@property(readonly, assign, nonatomic) NSString *passwordKey;	// G=0x365709ad; @synthesize=_passwordKey
@property(readonly, assign, nonatomic) unsigned char passwordRequired;	// G=0x36570a0d; @synthesize=_passwordRequired
@property(copy, nonatomic) NSString *pin;	// G=0x3657090d; S=0x36570efd; @synthesize=_pin
@property(readonly, assign, nonatomic) NSString *pinKey;	// G=0x3657096d; @synthesize=_pinKey
@property(readonly, assign, nonatomic) unsigned char pinRequired;	// G=0x365709cd; @synthesize=_pinRequired
@property(copy, nonatomic) NSString *proxyPassword;	// G=0x3657092d; S=0x36570eb5; @synthesize=_proxyPassword
@property(readonly, assign, nonatomic) NSString *proxyPasswordKey;	// G=0x3657098d; @synthesize=_proxyPasswordKey
@property(readonly, assign, nonatomic) unsigned char proxyPasswordRequired;	// G=0x365709ed; @synthesize=_proxyPasswordRequired
@property(copy, nonatomic) NSString *proxyUserName;	// G=0x3657093d; S=0x36570e91; @synthesize=_proxyUserName
@property(readonly, assign, nonatomic) NSString *proxyUserNameKey;	// G=0x3657099d; @synthesize=_proxyUserNameKey
@property(readonly, assign, nonatomic) unsigned char proxyUserNameRequired;	// G=0x365709fd; @synthesize=_proxyUserNameRequired
@property(copy, nonatomic) NSString *sharedSecret;	// G=0x3657091d; S=0x36570ed9; @synthesize=_sharedSecret
@property(readonly, assign, nonatomic) NSString *sharedSecretKey;	// G=0x3657097d; @synthesize=_sharedSecretKey
@property(readonly, assign, nonatomic) unsigned char sharedSecretRequired;	// G=0x365709dd; @synthesize=_sharedSecretRequired
@property(copy, nonatomic) NSString *userName;	// G=0x3657095d; S=0x36570e49; @synthesize=_userName
@property(readonly, assign, nonatomic) NSString *userNameKey;	// G=0x365709bd; @synthesize=_userNameKey
@property(readonly, assign, nonatomic) unsigned char userNameRequired;	// G=0x36570a1d; @synthesize=_userNameRequired
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x36570de9
+ (id)typeStrings;	// 0x36570ce9
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x36570f21
- (void)_validateVPNPayload:(id)payload;	// 0x36570a4d
// declared property getter: - (id)atom;	// 0x36570a3d
// declared property getter: - (id)certificateUUID;	// 0x36570a2d
- (void)dealloc;	// 0x36570d11
// declared property getter: - (id)password;	// 0x3657094d
// declared property getter: - (id)passwordKey;	// 0x365709ad
// declared property getter: - (unsigned char)passwordRequired;	// 0x36570a0d
// declared property getter: - (id)pin;	// 0x3657090d
// declared property getter: - (id)pinKey;	// 0x3657096d
// declared property getter: - (unsigned char)pinRequired;	// 0x365709cd
// declared property getter: - (id)proxyPassword;	// 0x3657092d
// declared property getter: - (id)proxyPasswordKey;	// 0x3657098d
// declared property getter: - (unsigned char)proxyPasswordRequired;	// 0x365709ed
// declared property getter: - (id)proxyUserName;	// 0x3657093d
// declared property getter: - (id)proxyUserNameKey;	// 0x3657099d
// declared property getter: - (unsigned char)proxyUserNameRequired;	// 0x365709fd
// declared property setter: - (void)setPassword:(id)password;	// 0x36570e6d
// declared property setter: - (void)setPin:(id)pin;	// 0x36570efd
// declared property setter: - (void)setProxyPassword:(id)password;	// 0x36570eb5
// declared property setter: - (void)setProxyUserName:(id)name;	// 0x36570e91
// declared property setter: - (void)setSharedSecret:(id)secret;	// 0x36570ed9
// declared property setter: - (void)setUserName:(id)name;	// 0x36570e49
// declared property getter: - (id)sharedSecret;	// 0x3657091d
// declared property getter: - (id)sharedSecretKey;	// 0x3657097d
// declared property getter: - (unsigned char)sharedSecretRequired;	// 0x365709dd
// declared property getter: - (id)userName;	// 0x3657095d
// declared property getter: - (id)userNameKey;	// 0x365709bd
// declared property getter: - (unsigned char)userNameRequired;	// 0x36570a1d
@end

