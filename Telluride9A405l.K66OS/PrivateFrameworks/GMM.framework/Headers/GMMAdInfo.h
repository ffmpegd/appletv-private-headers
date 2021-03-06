/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSString;

@interface GMMAdInfo : PBCodable {
	NSString *_uniqueId;	// 4 = 0x4
	NSString *_headline;	// 8 = 0x8
	NSString *_creativeLine1;	// 12 = 0xc
	NSString *_creativeLine2;	// 16 = 0x10
	NSString *_linkText;	// 20 = 0x14
	NSString *_linkUrl;	// 24 = 0x18
}
@property(retain, nonatomic) NSString *creativeLine1;	// G=0x315800c9; S=0x315800d9; @synthesize=_creativeLine1
@property(retain, nonatomic) NSString *creativeLine2;	// G=0x315800fd; S=0x3158010d; @synthesize=_creativeLine2
@property(readonly, assign, nonatomic) BOOL hasCreativeLine1;	// G=0x3157fc3d; 
@property(readonly, assign, nonatomic) BOOL hasCreativeLine2;	// G=0x3157fc55; 
@property(readonly, assign, nonatomic) BOOL hasHeadline;	// G=0x3157fc25; 
@property(readonly, assign, nonatomic) BOOL hasLinkText;	// G=0x3157fc6d; 
@property(readonly, assign, nonatomic) BOOL hasLinkUrl;	// G=0x3157fc85; 
@property(retain, nonatomic) NSString *headline;	// G=0x31580095; S=0x315800a5; @synthesize=_headline
@property(retain, nonatomic) NSString *linkText;	// G=0x31580131; S=0x31580141; @synthesize=_linkText
@property(retain, nonatomic) NSString *linkUrl;	// G=0x31580165; S=0x31580175; @synthesize=_linkUrl
@property(retain, nonatomic) NSString *uniqueId;	// G=0x31580061; S=0x31580071; @synthesize=_uniqueId
// declared property getter: - (id)creativeLine1;	// 0x315800c9
// declared property getter: - (id)creativeLine2;	// 0x315800fd
- (void)dealloc;	// 0x3157fb7d
- (id)description;	// 0x3157fc9d
- (id)dictionaryRepresentation;	// 0x3157fd0d
// declared property getter: - (BOOL)hasCreativeLine1;	// 0x3157fc3d
// declared property getter: - (BOOL)hasCreativeLine2;	// 0x3157fc55
// declared property getter: - (BOOL)hasHeadline;	// 0x3157fc25
// declared property getter: - (BOOL)hasLinkText;	// 0x3157fc6d
// declared property getter: - (BOOL)hasLinkUrl;	// 0x3157fc85
// declared property getter: - (id)headline;	// 0x31580095
// declared property getter: - (id)linkText;	// 0x31580131
// declared property getter: - (id)linkUrl;	// 0x31580165
- (BOOL)readFrom:(id)from;	// 0x3157fe3d
// declared property setter: - (void)setCreativeLine1:(id)a1;	// 0x315800d9
// declared property setter: - (void)setCreativeLine2:(id)a2;	// 0x3158010d
// declared property setter: - (void)setHeadline:(id)headline;	// 0x315800a5
// declared property setter: - (void)setLinkText:(id)text;	// 0x31580141
// declared property setter: - (void)setLinkUrl:(id)url;	// 0x31580175
// declared property setter: - (void)setUniqueId:(id)anId;	// 0x31580071
// declared property getter: - (id)uniqueId;	// 0x31580061
- (void)writeTo:(id)to;	// 0x3157ffad
@end

