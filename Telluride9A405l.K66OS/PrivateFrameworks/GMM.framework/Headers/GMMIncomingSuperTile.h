/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSData;

@interface GMMIncomingSuperTile : PBCodable {
	NSData *_superTileData;	// 4 = 0x4
}
@property(retain, nonatomic) NSData *superTileData;	// G=0x315a9681; S=0x315a9691; @synthesize=_superTileData
- (void)dealloc;	// 0x315a947d
- (id)description;	// 0x315a94c1
- (id)dictionaryRepresentation;	// 0x315a9531
- (BOOL)readFrom:(id)from;	// 0x315a9585
// declared property setter: - (void)setSuperTileData:(id)data;	// 0x315a9691
// declared property getter: - (id)superTileData;	// 0x315a9681
- (void)writeTo:(id)to;	// 0x315a965d
@end

