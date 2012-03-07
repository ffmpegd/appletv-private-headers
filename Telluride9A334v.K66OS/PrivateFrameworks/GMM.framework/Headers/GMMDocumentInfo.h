/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSString;

@interface GMMDocumentInfo : PBCodable {
	NSString *_author;	// 4 = 0x4
	NSString *_attributionUrl;	// 8 = 0x8
}
@property(retain, nonatomic) NSString *attributionUrl;	// G=0x35b830a5; S=0x35b830b5; @synthesize=_attributionUrl
@property(retain, nonatomic) NSString *author;	// G=0x35b83071; S=0x35b83081; @synthesize=_author
@property(readonly, assign, nonatomic) BOOL hasAttributionUrl;	// G=0x35b82e1d; 
@property(readonly, assign, nonatomic) BOOL hasAuthor;	// G=0x35b82e05; 
// declared property getter: - (id)attributionUrl;	// 0x35b830a5
// declared property getter: - (id)author;	// 0x35b83071
- (void)dealloc;	// 0x35b82dad
- (id)description;	// 0x35b82e35
- (id)dictionaryRepresentation;	// 0x35b82ea5
// declared property getter: - (BOOL)hasAttributionUrl;	// 0x35b82e1d
// declared property getter: - (BOOL)hasAuthor;	// 0x35b82e05
- (BOOL)readFrom:(id)from;	// 0x35b82f25
// declared property setter: - (void)setAttributionUrl:(id)url;	// 0x35b830b5
// declared property setter: - (void)setAuthor:(id)author;	// 0x35b83081
- (void)writeTo:(id)to;	// 0x35b83019
@end

