/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSString, NSMutableArray;

@interface LBSAddress : PBCodable {
	NSString *_rawText;	// 4 = 0x4
	NSMutableArray *_components;	// 8 = 0x8
	BOOL _hasIsPhysical;	// 12 = 0xc
	BOOL _isPhysical;	// 13 = 0xd
	BOOL _hasIsMailing;	// 14 = 0xe
	BOOL _isMailing;	// 15 = 0xf
	NSMutableArray *_crossStreets;	// 16 = 0x10
}
@property(retain, nonatomic) NSMutableArray *components;	// G=0x338598f1; S=0x33859901; @synthesize=_components
@property(retain, nonatomic) NSMutableArray *crossStreets;	// G=0x33859985; S=0x33859995; @synthesize=_crossStreets
@property(assign, nonatomic) BOOL hasIsMailing;	// G=0x33859955; S=0x33859965; @synthesize=_hasIsMailing
@property(assign, nonatomic) BOOL hasIsPhysical;	// G=0x33859925; S=0x33859935; @synthesize=_hasIsPhysical
@property(readonly, assign, nonatomic) BOOL hasRawText;	// G=0x33859035; 
@property(assign, nonatomic) BOOL isMailing;	// G=0x33859975; S=0x33859115; @synthesize=_isMailing
@property(assign, nonatomic) BOOL isPhysical;	// G=0x33859945; S=0x338590f1; @synthesize=_isPhysical
@property(retain, nonatomic) NSString *rawText;	// G=0x338598bd; S=0x338598cd; @synthesize=_rawText
- (void)addComponent:(id)component;	// 0x3385904d
- (void)addCrossStreet:(id)street;	// 0x33859139
- (id)componentAtIndex:(unsigned)index;	// 0x338590d1
// declared property getter: - (id)components;	// 0x338598f1
- (unsigned)componentsCount;	// 0x338590b1
- (id)crossStreetAtIndex:(unsigned)index;	// 0x338591bd
// declared property getter: - (id)crossStreets;	// 0x33859985
- (unsigned)crossStreetsCount;	// 0x3385919d
- (void)dealloc;	// 0x33858fc9
- (id)description;	// 0x338591dd
- (id)dictionaryRepresentation;	// 0x3385924d
// declared property getter: - (BOOL)hasIsMailing;	// 0x33859955
// declared property getter: - (BOOL)hasIsPhysical;	// 0x33859925
// declared property getter: - (BOOL)hasRawText;	// 0x33859035
// declared property getter: - (BOOL)isMailing;	// 0x33859975
// declared property getter: - (BOOL)isPhysical;	// 0x33859945
// declared property getter: - (id)rawText;	// 0x338598bd
- (BOOL)readFrom:(id)from;	// 0x338593a9
// declared property setter: - (void)setComponents:(id)components;	// 0x33859901
// declared property setter: - (void)setCrossStreets:(id)streets;	// 0x33859995
// declared property setter: - (void)setHasIsMailing:(BOOL)mailing;	// 0x33859965
// declared property setter: - (void)setHasIsPhysical:(BOOL)physical;	// 0x33859935
// declared property setter: - (void)setIsMailing:(BOOL)mailing;	// 0x33859115
// declared property setter: - (void)setIsPhysical:(BOOL)physical;	// 0x338590f1
// declared property setter: - (void)setRawText:(id)text;	// 0x338598cd
- (void)writeTo:(id)to;	// 0x33859625
@end

