/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSString;

@interface LBSGPlatformProfile : PBCodable {
	NSString *_version;	// 4 = 0x4
	NSString *_platform;	// 8 = 0x8
	NSString *_platformKey;	// 12 = 0xc
	NSString *_distributionChannel;	// 16 = 0x10
	NSString *_locale;	// 20 = 0x14
	NSString *_ip;	// 24 = 0x18
	NSString *_userAgent;	// 28 = 0x1c
}
@property(retain, nonatomic) NSString *distributionChannel;	// G=0x31fb8999; S=0x31fb89a9; @synthesize=_distributionChannel
@property(readonly, assign, nonatomic) BOOL hasDistributionChannel;	// G=0x31fb8485; 
@property(readonly, assign, nonatomic) BOOL hasIp;	// G=0x31fb84b5; 
@property(readonly, assign, nonatomic) BOOL hasLocale;	// G=0x31fb849d; 
@property(readonly, assign, nonatomic) BOOL hasPlatform;	// G=0x31fb8455; 
@property(readonly, assign, nonatomic) BOOL hasPlatformKey;	// G=0x31fb846d; 
@property(readonly, assign, nonatomic) BOOL hasUserAgent;	// G=0x31fb84cd; 
@property(retain, nonatomic) NSString *ip;	// G=0x31fb8a01; S=0x31fb8a11; @synthesize=_ip
@property(retain, nonatomic) NSString *locale;	// G=0x31fb89cd; S=0x31fb89dd; @synthesize=_locale
@property(retain, nonatomic) NSString *platform;	// G=0x31fb8931; S=0x31fb8941; @synthesize=_platform
@property(retain, nonatomic) NSString *platformKey;	// G=0x31fb8965; S=0x31fb8975; @synthesize=_platformKey
@property(retain, nonatomic) NSString *userAgent;	// G=0x31fb8a35; S=0x31fb8a45; @synthesize=_userAgent
@property(retain, nonatomic) NSString *version;	// G=0x31fb88fd; S=0x31fb890d; @synthesize=_version
- (void)dealloc;	// 0x31fb8399
- (id)description;	// 0x31fb84e5
- (id)dictionaryRepresentation;	// 0x31fb8555
// declared property getter: - (id)distributionChannel;	// 0x31fb8999
// declared property getter: - (BOOL)hasDistributionChannel;	// 0x31fb8485
// declared property getter: - (BOOL)hasIp;	// 0x31fb84b5
// declared property getter: - (BOOL)hasLocale;	// 0x31fb849d
// declared property getter: - (BOOL)hasPlatform;	// 0x31fb8455
// declared property getter: - (BOOL)hasPlatformKey;	// 0x31fb846d
// declared property getter: - (BOOL)hasUserAgent;	// 0x31fb84cd
// declared property getter: - (id)ip;	// 0x31fb8a01
// declared property getter: - (id)locale;	// 0x31fb89cd
// declared property getter: - (id)platform;	// 0x31fb8931
// declared property getter: - (id)platformKey;	// 0x31fb8965
- (BOOL)readFrom:(id)from;	// 0x31fb86b1
// declared property setter: - (void)setDistributionChannel:(id)channel;	// 0x31fb89a9
// declared property setter: - (void)setIp:(id)ip;	// 0x31fb8a11
// declared property setter: - (void)setLocale:(id)locale;	// 0x31fb89dd
// declared property setter: - (void)setPlatform:(id)platform;	// 0x31fb8941
// declared property setter: - (void)setPlatformKey:(id)key;	// 0x31fb8975
// declared property setter: - (void)setUserAgent:(id)agent;	// 0x31fb8a45
// declared property setter: - (void)setVersion:(id)version;	// 0x31fb890d
// declared property getter: - (id)userAgent;	// 0x31fb8a35
// declared property getter: - (id)version;	// 0x31fb88fd
- (void)writeTo:(id)to;	// 0x31fb8831
@end

