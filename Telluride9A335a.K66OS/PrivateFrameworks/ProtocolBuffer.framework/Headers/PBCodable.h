/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

#import <NSObject.h> // Unknown library

@class NSData;

@interface PBCodable : NSObject {
}
@property(readonly, assign, nonatomic) NSData *data;	// G=0x305c267d; @dynamic
- (id)init;	// 0x305c2579
- (id)initWithData:(id)data;	// 0x305c25a5
// declared property getter: - (id)data;	// 0x305c267d
- (id)dictionaryRepresentation;	// 0x305c2741
- (BOOL)readFrom:(id)from;	// 0x305c2711
- (void)writeTo:(id)to;	// 0x305c272d
@end

