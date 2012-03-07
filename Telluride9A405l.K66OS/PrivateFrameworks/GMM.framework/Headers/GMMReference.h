/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSString;

@interface GMMReference : PBCodable {
	NSString *_url;	// 4 = 0x4
	NSString *_title;	// 8 = 0x8
	NSString *_domain;	// 12 = 0xc
}
@property(retain, nonatomic) NSString *domain;	// G=0x31584b45; S=0x31584b55; @synthesize=_domain
@property(retain, nonatomic) NSString *title;	// G=0x31584b11; S=0x31584b21; @synthesize=_title
@property(retain, nonatomic) NSString *url;	// G=0x31584add; S=0x31584aed; @synthesize=_url
- (void)dealloc;	// 0x315847e5
- (id)description;	// 0x31584851
- (id)description;	// 0x315786dd
- (id)dictionaryRepresentation;	// 0x315848c1
// declared property getter: - (id)domain;	// 0x31584b45
- (BOOL)readFrom:(id)from;	// 0x3158496d
// declared property setter: - (void)setDomain:(id)domain;	// 0x31584b55
// declared property setter: - (void)setTitle:(id)title;	// 0x31584b21
// declared property setter: - (void)setUrl:(id)url;	// 0x31584aed
// declared property getter: - (id)title;	// 0x31584b11
// declared property getter: - (id)url;	// 0x31584add
- (void)writeTo:(id)to;	// 0x31584a7d
@end

